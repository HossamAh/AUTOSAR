/********************************************************************
 * Automatically generated by ARUnit
 * Filename: Rte_Door_Lock_Indication_SWC_.c
 * Generated on: Sun Aug 4 16:40:13 EET
 ********************************************************************/

#include "string.h"
#include "Rte_Door_Lock_Indication_SWC.h"

Rte_DE_uint8 Read_Door_State_Runnable_DoorState_PPort_Door_State;

Rte_DE_uint8 Door_Lock_indication_Runnable_InputState_RPort_Door_State;


const Rte_CDS_Door_Lock_Indication_SWC Rte_Instance_Door_Lock_Indication_SWC = {
&Read_Door_State_Runnable_DoorState_PPort_Door_State
};

const Rte_CDS_Door_Lock_Indication_SWC * const Rte_Inst_Door_Lock_Indication_SWC = &Rte_Instance_Door_Lock_Indication_SWC;


Std_ReturnType Door_Lock_Indication_SWC_LEDSwitchClient_RPort_LED_Switch_Buffer_retcode = RTE_E_OK;

FunctionPtr_Door_Lock_Indication_SWC_LEDSwitchClient_RPort_LED_Switch Rte_Call_Door_Lock_Indication_SWC_LEDSwitchClient_RPort_LED_Switch_Delegate = 0;

uint8 Rte_IRead_Door_Lock_Indication_SWC_Door_Lock_indication_Runnable_InputState_RPort_Door_State (void)
{
	return (Rte_Inst_Door_Lock_Indication_SWC)->Door_Lock_indication_Runnable_InputState_RPort_Door_State->value;
}
Std_ReturnType Rte_Call_Door_Lock_Indication_SWC_LEDSwitchClient_RPort_LED_Switch (uint8 LED_State)
{
	Std_ReturnType __result = Door_Lock_Indication_SWC_LEDSwitchClient_RPort_LED_Switch_Buffer_retcode;
	if ( Rte_Call_Door_Lock_Indication_SWC_LEDSwitchClient_RPort_LED_Switch_Delegate != 0 ) {
		__result = Rte_Call_Door_Lock_Indication_SWC_LEDSwitchClient_RPort_LED_Switch_Delegate(LED_State);
	}
	LED_Switch(LED_State);
	return __result;
}
