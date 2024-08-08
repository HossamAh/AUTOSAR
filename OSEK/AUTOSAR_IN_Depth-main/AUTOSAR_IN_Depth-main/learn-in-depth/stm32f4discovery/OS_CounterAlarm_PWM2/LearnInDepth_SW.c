/*
 * AUTOSAR IN Depth Materials
 * www.learn-in-depth.com
 * Eng.Keroles Shenouda
 * eng.keroles.karam@gmail.com
 *
 */

//    PA15   (*(unsigned int*)(0x40020014)) >> 15
//    PB15   (*(unsigned int*)(0x40020414)) >> 15
//    PC15   (*(unsigned int*)(0x40020814)) >> 15
//    PD15:  (*(unsigned int*)(0x40020C14)) >> 15
#define PA15_red (*(volatile unsigned int*)(0x40020014)) ^= (1U << (15))
#define PB15_blue (*(volatile unsigned int*)(0x40020414)) ^= (1U << (15))
#define PC15_orange (*(volatile unsigned int*)(0x40020814)) ^= (1U << (15))

#define set_PWM (*(volatile unsigned int*)(0x40020014)) |= (1U << (15))
#define clear_PWM (*(volatile unsigned int*)(0x40020014)) &= (~(1U << (15)))

#include "tp.h"
#include "tpl_os.h"
//simple mydelay function
void mydelay(unsigned int ms) {
	unsigned int i;
	for (i = 0; i < ms; i++) {
	}
}
FUNC(int, OS_APPL_CODE) main(void) {
	initBoard();
	StartOS(OSDEFAULTAPPMODE);
	return 0;
}

unsigned int PWM_period_counts;
unsigned int PWM_High_counts;
unsigned int PWM_Low_counts;
unsigned char PWM_Duty_Cycle_Percentage=50;

//-------------------------------------------
#define APP_Task_initTask_START_SEC_CODE
#include "tpl_memmap.h"
TASK(initTask) {
	PWM_period_counts = 100;
	//PWM_Duty_Cycle_Percentage = 50;

	PWM_High_counts = (PWM_Duty_Cycle_Percentage*PWM_period_counts)/100;
	PWM_Low_counts = PWM_period_counts - PWM_High_counts;

	SetRelAlarm(THigh_Alarm,PWM_Low_counts,PWM_period_counts);//turn it to high after low time at first then set it after a period time
	TerminateTask();
}
#define APP_Task_initTask_STOP_SEC_CODE
#include "tpl_memmap.h"
//-------------------------------------------
//-------------------------------------------
#define APP_Task_TH_START_SEC_CODE
#include "tpl_memmap.h"
TASK(TH) {
//	unsigned char count = 0;
//	while (count++ < 100) {
	set_PWM;
	SetRelAlarm(TLow_Alarm, (TickType) PWM_High_counts, (TickType) 0);

//	}
//	count = 0;

	TerminateTask();

}
#define APP_Task_TH_STOP_SEC_CODE
#include "tpl_memmap.h"
//-------------------------------------------
#define APP_Task_TL_START_SEC_CODE
#include "tpl_memmap.h"
TASK(TL) {
//	unsigned char count = 0;
//	while (count++ < 100) {

	clear_PWM;
//	SetRelAlarm(THigh_Alarm, (TickType) PWM_Low_counts, 0);

//	}
//	count = 0;
	TerminateTask();

}
#define APP_Task_TL_STOP_SEC_CODE
#include "tpl_memmap.h"
/*
 *  * This is necessary for ST libraries
 *   */
FUNC(void, OS_CODE) assert_failed(uint8_t* file, uint32_t line) {
}

