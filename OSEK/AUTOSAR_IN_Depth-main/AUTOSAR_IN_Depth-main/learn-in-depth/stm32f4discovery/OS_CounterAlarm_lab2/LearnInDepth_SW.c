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
//-------------------------------------------
#define APP_Task_initTask_START_SEC_CODE
#include "tpl_memmap.h"
TASK(initTask) {
//	SetAbsAlarm(T1_Alarm,(TickType)300,(TickType)100);
//	SetAbsAlarm(T2_Alarm,(TickType)450,(TickType)200);
	TerminateTask();
}
#define APP_Task_initTask_STOP_SEC_CODE
#include "tpl_memmap.h"
//-------------------------------------------
//-------------------------------------------
#define APP_Task_T1_START_SEC_CODE
#include "tpl_memmap.h"
TASK(T1) {
//	unsigned char count = 0;
//	while (count++ < 100) {
	PB15_blue;
//	}
//	count = 0;
	SetRelAlarm(T2_Alarm,(TickType)400,(TickType)0);
	TerminateTask();

}
#define APP_Task_T1_STOP_SEC_CODE
#include "tpl_memmap.h"
//-------------------------------------------
#define APP_Task_T2_START_SEC_CODE
#include "tpl_memmap.h"
TASK(T2) {
//	unsigned char count = 0;
//	while (count++ < 100) {
		PC15_orange;
//	}
//	count = 0;
	TerminateTask();

}
#define APP_Task_T2_STOP_SEC_CODE
#include "tpl_memmap.h"
/*
 *  * This is necessary for ST libraries
 *   */
FUNC(void, OS_CODE) assert_failed(uint8_t* file, uint32_t line) {
}

