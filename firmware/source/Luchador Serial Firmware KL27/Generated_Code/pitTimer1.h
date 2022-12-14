/*
 * Copyright 2020 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : pitTimer1.h
**     Project     : Luchador Serial Fimware KL27
**     Processor   : MKL27Z256VLH4
**     Component   : fsl_pit
**     Version     : Component 1.3.0, Driver 01.00, CPU db: 3.00.000
**     Repository  : KSDK 1.3.0
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-11-26, 13:37, # CodeGen: 6
**     Contents    :
**         PIT_DRV_Init                       - pit_status_t PIT_DRV_Init(uint32_t instance,bool isRunInDebug);
**         PIT_DRV_Deinit                     - pit_status_t PIT_DRV_Deinit(uint32_t instance);
**         PIT_DRV_InitChannel                - void PIT_DRV_InitChannel(uint32_t instance,uint32_t channel,const...
**         PIT_DRV_StartTimer                 - void PIT_DRV_StartTimer(uint32_t instance,uint32_t channel);
**         PIT_DRV_StopTimer                  - void PIT_DRV_StopTimer(uint32_t instance,uint32_t channel);
**         PIT_DRV_SetTimerPeriodByUs         - void PIT_DRV_SetTimerPeriodByUs(uint32_t instance,uint32_t channel,uint32_t us);
**         PIT_DRV_GetTimerPeriodByUs         - uint32_t PIT_DRV_GetTimerPeriodByUs(uint32_t instance,uint32_t channel);
**         PIT_DRV_ReadTimerUs                - uint32_t PIT_DRV_ReadTimerUs(uint32_t instance,uint32_t channel);
**         PIT_DRV_SetTimerPeriodByCount      - void PIT_DRV_SetTimerPeriodByCount(uint32_t instance,uint32_t...
**         PIT_DRV_GetTimerPeriodByCount      - uint32_t PIT_DRV_GetTimerPeriodByCount(uint32_t instance,uint32_t channel);
**         PIT_DRV_ReadTimerCount             - uint32_t PIT_DRV_ReadTimerCount(uint32_t instance,uint32_t channel);
**         PIT_DRV_SetLifetimeTimerPeriodByUs - void PIT_DRV_SetLifetimeTimerPeriodByUs(uint32_t instance,uint64_t us);
**         PIT_DRV_ReadLifetimeTimerUs        - uint64_t PIT_DRV_ReadLifetimeTimerUs(uint32_t instance);
**         PIT_DRV_InitUs                     - void PIT_DRV_InitUs(uint32_t instance,uint32_t channel);
**         PIT_DRV_GetUs                      - uint32_t PIT_DRV_GetUs(void);
**         PIT_DRV_DelayUs                    - void PIT_DRV_DelayUs(uint32_t us);
**         PIT_DRV_ClearIntFlag               - void PIT_DRV_ClearIntFlag(uint32_t instance,uint32_t channel);
**         PIT_DRV_IsIntPending               - bool PIT_DRV_IsIntPending(uint32_t instance,uint32_t channel);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file pitTimer1.h
** @version 01.00
*/         
/*!
**  @addtogroup pitTimer1_module pitTimer1 module documentation
**  @{
*/         
#ifndef __pitTimer1_H
#define __pitTimer1_H
/* MODULE pitTimer1. */

/* Include inherited beans */
#include "clockMan1.h"
#include "osa1.h"
#include "Cpu.h"

/*! @brief Device instance number */
#define pitTimer1_IDX PIT_IDX
/*! @brief Device instance number for backward compatibility */
#define FSL_PITTIMER1 pitTimer1_IDX
/*! @brief PIT timer channel */
#define pitTimer1_CHANNEL 0
/*! @brief PIT timer channel for backward compatibility */
#define FSL_PITTIMER1_CHANNEL pitTimer1_CHANNEL

/*! @brief PIT configuration declaration */
extern const pit_user_config_t pitTimer1_InitConfig0;
    

#endif
/* ifndef __pitTimer1_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
