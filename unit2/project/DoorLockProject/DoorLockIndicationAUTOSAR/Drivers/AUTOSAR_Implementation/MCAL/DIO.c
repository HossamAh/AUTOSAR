#include "DIO.h"

unsigned char DIO_ReadChannel(unsigned char ID)
{
	return MGPIO_GPIO_PinLevelGetPinValue(Port_Used, ID);
}
void DIO_Write(unsigned char ID,unsigned char Level)
{
	MGPIO_VoidSetPinValue(Port_Used, ID, Level);
}
