/*******************************************************************************
  MPLAB Harmony System Configuration Header

  File Name:
    system_config.h

  Summary:
    Build-time configuration header for the system defined by this MPLAB Harmony
    project.

  Description:
    An MPLAB Project may have multiple configurations.  This file defines the
    build-time options for a single configuration.

  Remarks:
    This configuration header must not define any prototypes or data
    definitions (or include any files that do).  It only provides macro
    definitions for build-time configuration options that are not instantiated
    until used by another MPLAB Harmony module or application.

    Created with MPLAB Harmony Version 2.06
*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2015 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED AS IS WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/
// DOM-IGNORE-END

#ifndef _SYSTEM_CONFIG_H
#define _SYSTEM_CONFIG_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
/*  This section Includes other configuration headers necessary to completely
    define this configuration.
*/


// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: System Service Configuration
// *****************************************************************************
// *****************************************************************************
// *****************************************************************************
/* Common System Service Configuration Options
*/
#define SYS_VERSION_STR           "2.06"
#define SYS_VERSION               20600

// *****************************************************************************
/* Clock System Service Configuration Options
*/
#define SYS_CLK_FREQ                        252000000ul
#define SYS_CLK_BUS_PERIPHERAL_1            84000000ul
#define SYS_CLK_BUS_PERIPHERAL_2            126000000ul
#define SYS_CLK_BUS_PERIPHERAL_3            84000000ul
#define SYS_CLK_BUS_PERIPHERAL_4            126000000ul
#define SYS_CLK_BUS_PERIPHERAL_5            126000000ul
#define SYS_CLK_BUS_PERIPHERAL_7            252000000ul
#define SYS_CLK_BUS_PERIPHERAL_8            126000000ul
#define SYS_CLK_BUS_REFERENCE_3             252000000ul
#define SYS_CLK_CONFIG_PRIMARY_XTAL         24000000ul
#define SYS_CLK_CONFIG_SECONDARY_XTAL       32768ul
   
/*** Ports System Service Configuration ***/
#define SYS_PORT_B_ANSEL        0x0007
#define SYS_PORT_B_TRIS         0x016F
#define SYS_PORT_B_LAT          0x0000
#define SYS_PORT_B_ODC          0x0000
#define SYS_PORT_B_CNPU         0x0000
#define SYS_PORT_B_CNPD         0xFE90
#define SYS_PORT_B_CNEN         0x0000

#define SYS_PORT_C_ANSEL        0x9FFF
#define SYS_PORT_C_TRIS         0x9FFF
#define SYS_PORT_C_LAT          0x0000
#define SYS_PORT_C_ODC          0x0000
#define SYS_PORT_C_CNPU         0x0000
#define SYS_PORT_C_CNPD         0x6000
#define SYS_PORT_C_CNEN         0x0000

#define SYS_PORT_D_ANSEL        0xF1C0
#define SYS_PORT_D_TRIS         0xF1C2
#define SYS_PORT_D_LAT          0x0000
#define SYS_PORT_D_ODC          0x0000
#define SYS_PORT_D_CNPU         0x0000
#define SYS_PORT_D_CNPD         0x0E3D
#define SYS_PORT_D_CNEN         0x0000

#define SYS_PORT_E_ANSEL        0xFF00
#define SYS_PORT_E_TRIS         0xFF20
#define SYS_PORT_E_LAT          0x0000
#define SYS_PORT_E_ODC          0x0000
#define SYS_PORT_E_CNPU         0x0000
#define SYS_PORT_E_CNPD         0x00DF
#define SYS_PORT_E_CNEN         0x0000

#define SYS_PORT_F_ANSEL        0xFFC4
#define SYS_PORT_F_TRIS         0xFFC4
#define SYS_PORT_F_LAT          0x0000
#define SYS_PORT_F_ODC          0x0000
#define SYS_PORT_F_CNPU         0x0000
#define SYS_PORT_F_CNPD         0x003B
#define SYS_PORT_F_CNEN         0x0000

#define SYS_PORT_G_ANSEL        0xFC3F
#define SYS_PORT_G_TRIS         0xFFFF
#define SYS_PORT_G_LAT          0x0000
#define SYS_PORT_G_ODC          0x0000
#define SYS_PORT_G_CNPU         0x0000
#define SYS_PORT_G_CNPD         0x0000
#define SYS_PORT_G_CNEN         0x0000


/*** Interrupt System Service Configuration ***/
#define SYS_INT                     true

// *****************************************************************************
// *****************************************************************************
// Section: Driver Configuration
// *****************************************************************************
// *****************************************************************************
/*** Timer Driver Configuration ***/
#define DRV_TMR_INTERRUPT_MODE             true

/*** Timer Driver 0 Configuration ***/
#define DRV_TMR_PERIPHERAL_ID_IDX0          TMR_ID_1
#define DRV_TMR_INTERRUPT_SOURCE_IDX0       INT_SOURCE_TIMER_1
#define DRV_TMR_INTERRUPT_VECTOR_IDX0       INT_VECTOR_T1
#define DRV_TMR_ISR_VECTOR_IDX0             _TIMER_1_VECTOR
#define DRV_TMR_INTERRUPT_PRIORITY_IDX0     INT_PRIORITY_LEVEL1
#define DRV_TMR_INTERRUPT_SUB_PRIORITY_IDX0 INT_SUBPRIORITY_LEVEL0
#define DRV_TMR_CLOCK_SOURCE_IDX0           DRV_TMR_CLKSOURCE_INTERNAL
#define DRV_TMR_PRESCALE_IDX0               TMR_PRESCALE_VALUE_1
#define DRV_TMR_OPERATION_MODE_IDX0         DRV_TMR_OPERATION_MODE_16_BIT
#define DRV_TMR_ASYNC_WRITE_ENABLE_IDX0     false
#define DRV_TMR_POWER_STATE_IDX0            

#define DRV_TMR_PERIPHERAL_ID_IDX1          TMR_ID_2
#define DRV_TMR_INTERRUPT_SOURCE_IDX1       INT_SOURCE_TIMER_2
#define DRV_TMR_INTERRUPT_VECTOR_IDX1       INT_VECTOR_T2
#define DRV_TMR_ISR_VECTOR_IDX1             _TIMER_2_VECTOR
#define DRV_TMR_INTERRUPT_PRIORITY_IDX1     INT_PRIORITY_LEVEL1
#define DRV_TMR_INTERRUPT_SUB_PRIORITY_IDX1 INT_SUBPRIORITY_LEVEL0
#define DRV_TMR_CLOCK_SOURCE_IDX1           DRV_TMR_CLKSOURCE_INTERNAL
#define DRV_TMR_PRESCALE_IDX1               TMR_PRESCALE_VALUE_256
#define DRV_TMR_OPERATION_MODE_IDX1         DRV_TMR_OPERATION_MODE_16_BIT

#define DRV_TMR_ASYNC_WRITE_ENABLE_IDX1     false
#define DRV_TMR_POWER_STATE_IDX1            

 // *****************************************************************************
/* USART Driver Configuration Options
*/
#define DRV_USART_INSTANCES_NUMBER                  1
#define DRV_USART_CLIENTS_NUMBER                    1
#define DRV_USART_INTERRUPT_MODE                    true
#define DRV_USART_BYTE_MODEL_SUPPORT                true
#define DRV_USART_READ_WRITE_MODEL_SUPPORT          false
#define DRV_USART_BUFFER_QUEUE_SUPPORT              false

// *****************************************************************************
// *****************************************************************************
// Section: Middleware & Other Library Configuration
// *****************************************************************************
// *****************************************************************************



// *****************************************************************************
// *****************************************************************************
// Section: Application Configuration
// *****************************************************************************
// *****************************************************************************
/*** Application Defined Pins ***/

/*** Functions for LED9_R pin ***/
#define LED9_RToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_6)
#define LED9_ROn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_6)
#define LED9_ROff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_6)
#define LED9_RStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_6)
#define LED9_RStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_6, Value)

/*** Functions for LED9_G pin ***/
#define LED9_GToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_7)
#define LED9_GOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_7)
#define LED9_GOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_7)
#define LED9_GStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_7)
#define LED9_GStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_7, Value)

/*** Functions for LED9_Y pin ***/
#define LED9_YToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_4)
#define LED9_YOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_4)
#define LED9_YOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_4)
#define LED9_YStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_4)
#define LED9_YStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_4, Value)

/*** Functions for SYNCHRO_DATA_DAC pin ***/
#define SYNCHRO_DATA_DACToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_7)
#define SYNCHRO_DATA_DACOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_7)
#define SYNCHRO_DATA_DACOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_7)
#define SYNCHRO_DATA_DACStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_7)
#define SYNCHRO_DATA_DACStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_7, Value)

/*** Functions for LED6_R pin ***/
#define LED6_RToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_9)
#define LED6_ROn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_9)
#define LED6_ROff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_9)
#define LED6_RStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_9)
#define LED6_RStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_9, Value)

/*** Functions for LED6_G pin ***/
#define LED6_GToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_10)
#define LED6_GOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_10)
#define LED6_GOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_10)
#define LED6_GStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_10)
#define LED6_GStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_10, Value)

/*** Functions for LED6_Y pin ***/
#define LED6_YToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_11)
#define LED6_YOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_11)
#define LED6_YOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_11)
#define LED6_YStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_11)
#define LED6_YStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_11, Value)

/*** Functions for LED5_R pin ***/
#define LED5_RToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_12)
#define LED5_ROn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_12)
#define LED5_ROff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_12)
#define LED5_RStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_12)
#define LED5_RStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_12, Value)

/*** Functions for LED5_G pin ***/
#define LED5_GToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_13)
#define LED5_GOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_13)
#define LED5_GOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_13)
#define LED5_GStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_13)
#define LED5_GStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_13, Value)

/*** Functions for LED5_Y pin ***/
#define LED5_YToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_14)
#define LED5_YOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_14)
#define LED5_YOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_14)
#define LED5_YStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_14)
#define LED5_YStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_14, Value)

/*** Functions for LED4_R pin ***/
#define LED4_RToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_15)
#define LED4_ROn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_15)
#define LED4_ROff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_15)
#define LED4_RStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_15)
#define LED4_RStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_15, Value)

/*** Functions for LED2_R pin ***/
#define LED2_RToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_3)
#define LED2_ROn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_3)
#define LED2_ROff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_3)
#define LED2_RStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_3)
#define LED2_RStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_3, Value)

/*** Functions for LED2_G pin ***/
#define LED2_GToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_4)
#define LED2_GOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_4)
#define LED2_GOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_4)
#define LED2_GStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_4)
#define LED2_GStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_4, Value)

/*** Functions for LED2_Y pin ***/
#define LED2_YToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_5)
#define LED2_YOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_5)
#define LED2_YOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_5)
#define LED2_YStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_5)
#define LED2_YStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_5, Value)

/*** Functions for LED1_R pin ***/
#define LED1_RToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_9)
#define LED1_ROn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_9)
#define LED1_ROff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_9)
#define LED1_RStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_9)
#define LED1_RStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_9, Value)

/*** Functions for LED1_G pin ***/
#define LED1_GToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_10)
#define LED1_GOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_10)
#define LED1_GOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_10)
#define LED1_GStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_10)
#define LED1_GStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_10, Value)

/*** Functions for LED1_Y pin ***/
#define LED1_YToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_11)
#define LED1_YOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_11)
#define LED1_YOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_11)
#define LED1_YStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_11)
#define LED1_YStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_11, Value)

/*** Functions for LED0_R pin ***/
#define LED0_RToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_0)
#define LED0_ROn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_0)
#define LED0_ROff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_0)
#define LED0_RStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_0)
#define LED0_RStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_0, Value)

/*** Functions for LED0_G pin ***/
#define LED0_GToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_C, PORTS_BIT_POS_13)
#define LED0_GOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_C, PORTS_BIT_POS_13)
#define LED0_GOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_C, PORTS_BIT_POS_13)
#define LED0_GStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_C, PORTS_BIT_POS_13)
#define LED0_GStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_C, PORTS_BIT_POS_13, Value)

/*** Functions for LED0_Y pin ***/
#define LED0_YToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_C, PORTS_BIT_POS_14)
#define LED0_YOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_C, PORTS_BIT_POS_14)
#define LED0_YOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_C, PORTS_BIT_POS_14)
#define LED0_YStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_C, PORTS_BIT_POS_14)
#define LED0_YStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_C, PORTS_BIT_POS_14, Value)

/*** Functions for LED3_Y pin ***/
#define LED3_YToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_2)
#define LED3_YOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_2)
#define LED3_YOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_2)
#define LED3_YStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_2)
#define LED3_YStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_2, Value)

/*** Functions for LED3_G pin ***/
#define LED3_GToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_3)
#define LED3_GOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_3)
#define LED3_GOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_3)
#define LED3_GStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_3)
#define LED3_GStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_3, Value)

/*** Functions for LED3_R pin ***/
#define LED3_RToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_4)
#define LED3_ROn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_4)
#define LED3_ROff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_4)
#define LED3_RStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_4)
#define LED3_RStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_4, Value)

/*** Functions for LED4_Y pin ***/
#define LED4_YToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_5)
#define LED4_YOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_5)
#define LED4_YOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_5)
#define LED4_YStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_5)
#define LED4_YStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_5, Value)

/*** Functions for LED4_G pin ***/
#define LED4_GToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_0)
#define LED4_GOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_0)
#define LED4_GOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_0)
#define LED4_GStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_0)
#define LED4_GStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_0, Value)

/*** Functions for LED7_Y pin ***/
#define LED7_YToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_1)
#define LED7_YOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_1)
#define LED7_YOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_1)
#define LED7_YStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_1)
#define LED7_YStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_1, Value)

/*** Functions for LED7_G pin ***/
#define LED7_GToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_0)
#define LED7_GOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_0)
#define LED7_GOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_0)
#define LED7_GStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_0)
#define LED7_GStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_0, Value)

/*** Functions for LED7_R pin ***/
#define LED7_RToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_1)
#define LED7_ROn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_1)
#define LED7_ROff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_1)
#define LED7_RStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_1)
#define LED7_RStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_1, Value)

/*** Functions for LED8_Y pin ***/
#define LED8_YToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_2)
#define LED8_YOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_2)
#define LED8_YOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_2)
#define LED8_YStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_2)
#define LED8_YStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_2, Value)

/*** Functions for LED8_G pin ***/
#define LED8_GToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_3)
#define LED8_GOn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_3)
#define LED8_GOff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_3)
#define LED8_GStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_3)
#define LED8_GStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_3, Value)

/*** Functions for LED8_R pin ***/
#define LED8_RToggle() PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_4)
#define LED8_ROn() PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_4)
#define LED8_ROff() PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_4)
#define LED8_RStateGet() PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_4)
#define LED8_RStateSet(Value) PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_E, PORTS_BIT_POS_4, Value)


/*** Application Instance 0 Configuration ***/

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // _SYSTEM_CONFIG_H
/*******************************************************************************
 End of File
*/
