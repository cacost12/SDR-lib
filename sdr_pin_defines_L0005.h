/*******************************************************************************
*                                                                              *
* FILE:                                                                        * 
* 		sdr_pin_defines_L0005.h                                                *
*                                                                              *
* DESCRIPTION:                                                                 * 
* 	    Contains all the MCU pin definitions of the valve controller           *	
*                                                                              *
*******************************************************************************/


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef SDR_PIN_DEFINES 
#define SDR_PIN_DEFINES 

#ifdef __cplusplus
extern "C" {
#endif


/*------------------------------------------------------------------------------
 Includes                                                                    
------------------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"


/* Rev 2.0 */
#ifdef L0005_REV2
	/*-------------------------------------------------------------------------
	 MCU Pin Assignments                                                          
	--------------------------------------------------------------------------*/

	/* LEDs */
	#define STATUS_PIN    GPIO_PIN_15
	#define EXCEPT_PIN    GPIO_PIN_13

	/* Solenoids */
	#define SOL1_PIN   GPIO_PIN_2
	#define SOL2_PIN   GPIO_PIN_3
	#define SOL3_PIN   GPIO_PIN_4
	#define SOL4_PIN   GPIO_PIN_0
	#define SOL5_PIN   GPIO_PIN_1
	#define SOL6_PIN   GPIO_PIN_2


	/*-------------------------------------------------------------------------
	 MCU Port Assignments                                                          
	--------------------------------------------------------------------------*/

	/* LEDs */
	#define STATUS_GPIO_PORT    GPIOA
	#define EXCEPT_GPIO_PORT    GPIOD

	/* Solenoids */
	#define SOL1_GPIO_PORT   GPIOE
	#define SOL2_GPIO_PORT   GPIOE
	#define SOL3_GPIO_PORT   GPIOE
	#define SOL4_GPIO_PORT   GPIOA
	#define SOL5_GPIO_PORT   GPIOA
	#define SOL6_GPIO_PORT   GPIOA


	/*--------------------------------------------------------------------------
	 MCU Peripheral Configuration 
	--------------------------------------------------------------------------*/

	/* Peripheral handles */
	extern UART_HandleTypeDef huart4; /* USB UART */

	/* Peripheral Macros */
	#define USB_HUART         huart4

#endif /* L0005_REV2 */


#ifdef __cplusplus
}
#endif

#endif /* SDR_PIN_DEFINES */
