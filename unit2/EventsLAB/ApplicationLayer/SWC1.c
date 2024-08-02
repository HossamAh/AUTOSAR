#include "RTE_SWC1.h"

void SUM(void)
{
    /*define staus with unsuccessful status*/
    Std_ReturnType status = E_NOT_OK;

    unsigned short val1,val2;
    unsigned int SumResult;
    /*explicit READ/Write*/
    status = RTE_READ_SUM_Inputs_RPort_val1(&val1);
    status = RTE_READ_SUM_Inputs_RPort_val1(&val2);
    SumResult = val1+val2;
    status = RTE_Write_SUM_Output_PPort_SumResult(SumResult);
    
}