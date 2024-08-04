
#if !defined(__SOFT_FP__) && defined(__ARM_FP)
#warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif




/** ******************************************************************************
//		Door Lock indication Project
 ******************************************************************************
 */
//Learn-in-depth
//Keroles Shenouda
//AUTOSAR Course (learn-in-depth.com)


#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

#include "RCC_interface.h"
#include "GPIO_interface.h"



#define CYCLES_PER_LOOP 3
void wait_cycles( uint32_t n ) {
	uint32_t l = n/CYCLES_PER_LOOP;
	asm volatile( "0:" "SUBS %[count], 1;" "BNE 0b;" :[count]"+r"(l) );
}


void MCU_init () {
	//==================GPIO INIT =============================

	//Enable CLock
	MRCC_voidInitSysClock();
	MRCC_voidEnableClock(RCC_APB2,PERIPHERAL_EN_IOPA);

	//PA3 ---> Door Sensor
	MGPIO_VoidSetPinMode_TYPE(_GPIOA_PORT, pin3, INPUT_FLOATING);
	//PA7 ---> Led On/OFF
	MGPIO_VoidSetPinMode_TYPE(_GPIOA_PORT, pin7, OUTPUT_SPEED_10MHZ_PUSHPULL);
}
void StartOS ()
{
	unsigned char i = 0 ;
	//it is not memec 10ms or 12ms
	//it is just a prodic sequence fast implementation
	//as we will focus on implement OS and used accurate time based on the timer later on AUTOSAR OS unit
	//But nw we focused only on APPLICATion Layer
	while (1)
	{
		//memec RTE_Event_10ms
		if (i==10)
		{
			Read_Door_State();
			i++ ;
		}else if (i==15)
		{
			//memec RTE_Event_15ms
			Door_Lock_indication();
			i=0 ;
		}else
		{
			i++ ;
		}
		wait_cycles(10);
	}

}

int main(void)
{
	MCU_init();
	StartOS();
	/* Loop forever */
	while(1)
	{

	}
}
