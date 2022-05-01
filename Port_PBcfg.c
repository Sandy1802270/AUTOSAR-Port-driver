 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Sandy Ibrahim
 ******************************************************************************/

#include "Port.h"

/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)

/* AUTOSAR Version checking between Dio_PBcfg.c and Dio.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Dio_PBcfg.c and Dio.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif

    
/* PB structure used with Port_Init API */
const Port_ConfigType Port_Configuration = 
{
      	/*******Port A pins configuration **********/
	PORT_A, Port_Pin0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_A, Port_Pin1, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_A, Port_Pin2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_A, Port_Pin3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_A, Port_Pin4, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_A, Port_Pin5, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_A, Port_Pin6, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_A, Port_Pin7, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	

      	/*******Port B pins configuration **********/
	PORT_B, Port_Pin0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_B, Port_Pin1, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_B, Port_Pin2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_B, Port_Pin3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_B, Port_Pin4, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_B, Port_Pin5, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_B, Port_Pin6, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_B, Port_Pin7, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,


	/*******Port C pins configuration **********/
	PORT_C, Port_Pin4, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_C, Port_Pin5, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_C, Port_Pin6, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_C, Port_Pin7, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,


	/*******Port D pins configuration **********/
	PORT_D, Port_Pin0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_D, Port_Pin1, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_D, Port_Pin2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_D, Port_Pin3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_D, Port_Pin4, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_D, Port_Pin5, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_D, Port_Pin6, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_D, Port_Pin7, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,


	/*******Port E pins configuration **********/
	PORT_E, Port_Pin0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_E, Port_Pin1, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_E, Port_Pin2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_E, Port_Pin3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_E, Port_Pin4, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_E, Port_Pin5, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	

	/*******Port F pins configuration **********/
	PORT_F, Port_Pin0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_F, Port_Pin1, PORT_PIN_OUT, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_F, Port_Pin2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_F, Port_Pin3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE,
	PORT_F, Port_Pin4, PORT_PIN_IN, PULL_UP, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , DIR_CHANGEABLE, MODE_CHANGEABLE
	
};