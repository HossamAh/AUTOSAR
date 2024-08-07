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

#define green_ON	(*(volatile unsigned int*)(0x40020014)) |= (1U << (15))
#define green_OFF	(*(volatile unsigned int*)(0x40020014)) &= (~(1U << (15)))

#define yellow_ON	(*(volatile unsigned int*)(0x40020414)) |= (1U << (15))
#define yellow_OFF	(*(volatile unsigned int*)(0x40020414)) &= (~(1U << (15)))

#define red_ON	(*(volatile unsigned int*)(0x40020814)) |= (1U << (15))
#define red_OFF	(*(volatile unsigned int*)(0x40020814)) &= (~(1U << (15)))




#define PA15_red (*(volatile unsigned int*)(0x40020014)) ^= (1U << (15))
#define PB15_blue (*(volatile unsigned int*)(0x40020414)) ^= (1U << (15))
#define PC15_orange (*(volatile unsigned int*)(0x40020814)) ^= (1U << (15))

#include "tp.h"
#include "tpl_os.h"

unsigned char itr = 0;
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
#define APP_Task_Task1_START_SEC_CODE
#include "tpl_memmap.h"
TASK(Task1) {
	unsigned char count = 0;
	green_ON;
	yellow_OFF;
	red_OFF;
	while (count++ < 100) {

	}
	count = 0;
	ChainTask(Task2);

}
#define APP_Task_Task1_STOP_SEC_CODE
#include "tpl_memmap.h"
//-------------------------------------------
//-------------------------------------------
#define APP_Task_Task2_START_SEC_CODE
#include "tpl_memmap.h"
TASK(Task2) {
	unsigned char count = 0;
	green_OFF;
	yellow_ON;
	red_OFF;
	while (count++ < 100) {

	}
	count = 0;
	ChainTask(Task3);

}
#define APP_Task_Task2_STOP_SEC_CODE
#include "tpl_memmap.h"
//-------------------------------------------
#define APP_Task_Task3_START_SEC_CODE
#include "tpl_memmap.h"
TASK(Task3) {
	unsigned char count = 0;
	green_OFF;
	yellow_OFF;
	red_ON;
	while (count++ < 100) {

	}
	count = 0;
	ChainTask(Task1);
}
#define APP_Task_Task3_STOP_SEC_CODE
#include "tpl_memmap.h"
/*
 *  * This is necessary for ST libraries
 *   */
FUNC(void, OS_CODE) assert_failed(uint8_t* file, uint32_t line) {
}

