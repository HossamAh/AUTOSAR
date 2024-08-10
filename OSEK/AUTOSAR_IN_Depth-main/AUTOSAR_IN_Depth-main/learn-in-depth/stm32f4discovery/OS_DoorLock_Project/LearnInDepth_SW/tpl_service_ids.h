/**
 * @file tpl_service_ids.h
 *
 * @section desc File description
 *
 * Header of the service ids for application timer
 * Automatically generated by goil on Www Mmm dd hh:mm:ss yyyy
 * from root OIL file LearnInDepth_SW.oil
 *
 * @section copyright Copyright
 *
 * Trampoline OS
 *
 * Trampoline is copyright (c) IRCCyN 2005-2010
 * Trampoline is protected by the French intellectual property law.
 *
 * This software is distributed under the Lesser GNU Public Licence
 *
 * @section infos File informations
 *
 * $Date$
 * $Rev$
 * $Author$
 * $URL$
 */

#ifndef TPL_SERVICES_IDS_H
#define TPL_SERVICES_IDS_H

#include "tpl_config_def.h"

/*=============================================================================
 * service ids
 */

/**
 * @def OSServiceId_ResumeOSInterrupts
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #ResumeOSInterrupts
 */
#define OSServiceId_ResumeOSInterrupts    0

/**
 * @def OSServiceId_EnableAllInterrupts
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #EnableAllInterrupts
 */
#define OSServiceId_EnableAllInterrupts    1

/**
 * @def OSServiceId_SuspendOSInterrupts
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #SuspendOSInterrupts
 */
#define OSServiceId_SuspendOSInterrupts    2

/**
 * @def OSServiceId_DisableAllInterrupts
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #DisableAllInterrupts
 */
#define OSServiceId_DisableAllInterrupts    3

/**
 * @def OSServiceId_CallTerminateISR2
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #CallTerminateISR2
 */
#define OSServiceId_CallTerminateISR2    4

/**
 * @def OSServiceId_SuspendAllInterrupts
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #SuspendAllInterrupts
 */
#define OSServiceId_SuspendAllInterrupts    5

/**
 * @def OSServiceId_CallTerminateTask
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #CallTerminateTask
 */
#define OSServiceId_CallTerminateTask    6

/**
 * @def OSServiceId_ResumeAllInterrupts
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #ResumeAllInterrupts
 */
#define OSServiceId_ResumeAllInterrupts    7

/**
 * @def OSServiceId_Schedule
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #Schedule
 */
#define OSServiceId_Schedule    8

/**
 * @def OSServiceId_ReleaseResource
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #ReleaseResource
 */
#define OSServiceId_ReleaseResource    9

/**
 * @def OSServiceId_ShutdownOS
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #ShutdownOS
 */
#define OSServiceId_ShutdownOS    10

/**
 * @def OSServiceId_SetEvent
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #SetEvent
 */
#define OSServiceId_SetEvent    11

/**
 * @def OSServiceId_ActivateTask
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #ActivateTask
 */
#define OSServiceId_ActivateTask    12

/**
 * @def OSServiceId_ClearEvent
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #ClearEvent
 */
#define OSServiceId_ClearEvent    13

/**
 * @def OSServiceId_ChainTask
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #ChainTask
 */
#define OSServiceId_ChainTask    14

/**
 * @def OSServiceId_GetEvent
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #GetEvent
 */
#define OSServiceId_GetEvent    15

/**
 * @def OSServiceId_GetTaskID
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #GetTaskID
 */
#define OSServiceId_GetTaskID    16

/**
 * @def OSServiceId_WaitEvent
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #WaitEvent
 */
#define OSServiceId_WaitEvent    17

/**
 * @def OSServiceId_StartOS
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #StartOS
 */
#define OSServiceId_StartOS    18

/**
 * @def OSServiceId_GetAlarmBase
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #GetAlarmBase
 */
#define OSServiceId_GetAlarmBase    19

/**
 * @def OSServiceId_GetActiveApplicationMode
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #GetActiveApplicationMode
 */
#define OSServiceId_GetActiveApplicationMode    20

/**
 * @def OSServiceId_GetAlarm
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #GetAlarm
 */
#define OSServiceId_GetAlarm    21

/**
 * @def OSServiceId_CancelAlarm
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #CancelAlarm
 */
#define OSServiceId_CancelAlarm    22

/**
 * @def OSServiceId_SetRelAlarm
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #SetRelAlarm
 */
#define OSServiceId_SetRelAlarm    23

/**
 * @def OSServiceId_GetResource
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #GetResource
 */
#define OSServiceId_GetResource    24

/**
 * @def OSServiceId_SetAbsAlarm
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #SetAbsAlarm
 */
#define OSServiceId_SetAbsAlarm    25

/**
 * @def OSServiceId_GetTaskState
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #GetTaskState
 */
#define OSServiceId_GetTaskState    26

/**
 * @def OSServiceId_TerminateTask
 *
 * @see #SERVICE_CALL_DESCRIPTOR
 * @see #TerminateTask
 */
#define OSServiceId_TerminateTask    27

/**
 * @def SYSCALL_COUNT
 *
 * Number of system calls
 */
#define SYSCALL_COUNT      28
#define SYSCALL_COUNT_ISR1 8

#endif

/* End of file TPL_SERVICES_IDS_H */

