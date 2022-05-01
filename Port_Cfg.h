 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_Cfg.h
 *
 * Description: Pre-Compile Configuration Header file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Sandy Ibrahim
 ******************************************************************************/

#ifndef PORT_CFG_H
#define PORT_CFG_H

/*
 * Module Version 1.0.0
 */
#define PORT_CFG_SW_MAJOR_VERSION              (1U)
#define PORT_CFG_SW_MINOR_VERSION              (0U)
#define PORT_CFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_CFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_CFG_AR_RELEASE_PATCH_VERSION     (3U)

/* Pre-compile option for Development Error Detect */
#define PORT_DEV_ERROR_DETECT                (STD_ON)

/* Pre-compile option for Version Info API */
#define PORT_VERSION_INFO_API                (STD_OFF)

/* Pre-compile option for presence of Port_SetPinDirection API */
#define PORT_SET_PIN_DIRECTION_API	     (STD_ON)

/* Pre-compile option for presence of Port_SetPinMode API */
#define PORT_SET_PIN_MODE_API		     (STD_ON)

/* Number of the configured Dio Channels */
#define PORT_CONFIGURED_PINS              (39U) // not including JTAG pins

#define MIN_PIN_NUM              (0U)

/* Port Configured Port ID's  */
#define PORT_A               (0U) /* PORTA */
#define PORT_B               (1U) /* PORTB */
#define PORT_C               (2U) /* PORTC */
#define PORT_D               (3U) /* PORTD */
#define PORT_E               (4U) /* PORTE */
#define PORT_F               (5U) /* PORTF */

/* Port Configured pin ID's */
#define Port_Pin0             (Port_PinType)0 
#define Port_Pin1             (Port_PinType)1 
#define Port_Pin2             (Port_PinType)2
#define Port_Pin3             (Port_PinType)3 
#define Port_Pin4             (Port_PinType)4 
#define Port_Pin5             (Port_PinType)5 
#define Port_Pin6             (Port_PinType)6 
#define Port_Pin7             (Port_PinType)7 

/* Port Configured pin Mode Changeability */
#define MODE_CHANGEABLE       (STD_ON)
#define MODE_UNCHANGEABLE     (STD_OFF)

/* Port Configured pin Direction Changeability */
#define DIR_CHANGEABLE       (STD_ON)
#define DIR_UNCHANGEABLE     (STD_OFF)

/*Port Configured pin Modes*/
#define PORT_PIN_MODE_DIO                         (Port_PinModeType)0
#define PORT_PIN_MODE_UART                        (Port_PinModeType)1
#define PORT_PIN_MODE_SPI                         (Port_PinModeType)2
#define PORT_PIN_MODE_I2C                         (Port_PinModeType)3
#define PORT_PIN_MODE_DIO_GPT                     (Port_PinModeType)4
#define PORT_PIN_MODE_PWM                         (Port_PinModeType)5
#define PORT_PIN_MODE_CAN                         (Port_PinModeType)6
#define PORT_PIN_MODE_ADC                         (Port_PinModeType)7
#define PORT_PIN_MODE_DIO_WDG			  (Port_PinModeType)8
#define PORT_PIN_MODE_FLEXRAY			  (Port_PinModeType)9
#define PORT_PIN_MODE_ICU			  (Port_PinModeType)10
#define PORT_PIN_MODE_LIN			  (Port_PinModeType)11
#define PORT_PIN_MODE_MEM			  (Port_PinModeType)12


#endif /* PORT_CFG_H */
