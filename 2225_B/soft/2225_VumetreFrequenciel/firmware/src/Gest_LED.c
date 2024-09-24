/* ************************************************************************** */
/** Descriptive File Name

  @Company
    Company Name

  @File Name
    filename.c

  @Summary
    Brief description of the file.

  @Description
    Describe the purpose of this file.
 */
/* ************************************************************************** */

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */

/* This section lists the other files that are included in this file.
 */

/* TODO:  Include other files here if needed. */
#include <stddef.h>                     // Defines NULL
#include <stdbool.h>                    // Defines true
#include <stdlib.h>                     // Defines EXIT_FAILURE
#include "app.h"
#include "Gest_LED.h"

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: File Scope or Global Data                                         */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */


//fonction :Gest_LED
//Entrée: uint8_t Num_LEDs  uint8_t Color bool LED_On_Off
//sortie : - 
//description :fonction permetant de contrôler les différentes LEDs par apport au numéro de la LED et la couleurs

void Gest_LED( uint8_t Num_LEDs,uint8_t Color, bool LED_On_Off)
{
 
    //choix de la LED
    switch (Num_LEDs)
    {
        case LED0:
        {
	    //choix de la couleur
            switch (Color)
            {
                case RED:
                {
                    if (LED_On_Off == true)
                    {
                        LED0_ROn();
                    }
                    else
                    {
                        LED0_ROff();
                    }
                    break;
                }
                case YELLOW:
                {
                    if (LED_On_Off == true)
                    {
                        LED0_YOn();
                    }
                    else
                    {
                        LED0_YOff();
                    }
                    break;
                }
                case GREEN:
                {
                    if (LED_On_Off == true)
                    {
                        LED0_GOn();
                    }
                    else
                    {
                        LED0_GOff();
                    }
                    break;
                }
                default:
                {
                    
                break;
                }
                    
            }
            break;
        }
        case LED1:
        {
            switch (Color)
            {
		//choix de la couleur
                case RED:
                {
                    if (LED_On_Off == true)
                    {
                        LED1_ROn();
                    }
                    else
                    {
                        LED1_ROff();
                    }
                    break;
                }
                case YELLOW:
                {
                    if (LED_On_Off == true)
                    {
                        LED1_YOn();
                    }
                    else
                    {
                        LED1_YOff();
                    }
                    break;
                }
                case GREEN:
                {
                    if (LED_On_Off == true)
                    {
                        LED1_GOn();
                    }
                    else
                    {
                        LED1_GOff();
                    }
                    break;
                }
                default:
                {
                    
                break;
                }
                    
            }
            break;
        }
        case LED2:
        {
	    //choix de la couleur
            switch (Color)
            {
                case RED:
                {
                    if (LED_On_Off == true)
                    {
                        LED2_ROn();
                    }
                    else
                    {
                        LED2_ROff();
                    }
                    break;
                }
                case YELLOW:
                {
                    if (LED_On_Off == true)
                    {
                        LED2_YOn();
                    }
                    else
                    {
                        LED2_YOff();
                    }
                    break;
                }
                case GREEN:
                {
                    if (LED_On_Off == true)
                    {
                        LED2_GOn();
                    }
                    else
                    {
                        LED2_GOff();
                    }
                    break;
                }
                default:
                {
                    
                break;
                }
                    
            }
            break;
        }
        case LED3:
        {
            //choix de la couleur
            switch (Color)
            {
                case RED:
                {
                    if (LED_On_Off == true)
                    {
                        LED3_ROn();
                    }
                    else
                    {
                        LED3_ROff();
                    }
                    break;
                }
                case YELLOW:
                {
                    if (LED_On_Off == true)
                    {
                        LED3_YOn();
                    }
                    else
                    {
                        LED3_YOff();
                    }
                    break;
                }
                case GREEN:
                {
                    if (LED_On_Off == true)
                    {
                        LED3_GOn();
                    }
                    else
                    {
                        LED3_GOff();
                    }
                    break;
                }
                default:
                {
                    
                break;
                }
                    
            }
            break;
        }
        case LED4:
        {
            //choix de la couleur
            switch (Color)
            {
                case RED:
                {
                    if (LED_On_Off == true)
                    {
                        LED4_ROn();
                    }
                    else
                    {
                        LED4_ROff();
                    }
                    break;
                }
                case YELLOW:
                {
                    if (LED_On_Off == true)
                    {
                        LED4_YOn();
                    }
                    else
                    {
                        LED4_YOff();
                    }
                    break;
                }
                case GREEN:
                {
                    if (LED_On_Off == true)
                    {
                        LED4_GOn();
                    }
                    else
                    {
                        LED4_GOff();
                    }
                    break;
                }
                default:
                {
                    
                break;
                }
                    
            }
            break;
        }
        case LED5:
        {
            //choix de la couleur
            switch (Color)
            {
                case RED:
                {
                    if (LED_On_Off == true)
                    {
                        LED5_ROn();
                    }
                    else
                    {
                        LED5_ROff();
                    }
                    break;
                }
                case YELLOW:
                {
                    if (LED_On_Off == true)
                    {
                        LED5_YOn();
                    }
                    else
                    {
                        LED5_YOff();
                    }
                    break;
                }
                case GREEN:
                {
                    if (LED_On_Off == true)
                    {
                        LED5_GOn();
                    }
                    else
                    {
                        LED5_GOff();
                    }
                    break;
                }
                default:
                {
                    
                break;
                }
                    
            }
            break;
        }
        case LED6:
        {
            //choix de la couleur
            switch (Color)
            {
                case RED:
                {
                    if (LED_On_Off == true)
                    {
                        LED6_ROn();
                    }
                    else
                    {
                        LED6_ROff();
                    }
                    break;
                }
                case YELLOW:
                {
                    if (LED_On_Off == true)
                    {
                        LED6_YOn();
                    }
                    else
                    {
                        LED6_YOff();
                    }
                    break;
                }
                case GREEN:
                {
                    if (LED_On_Off == true)
                    {
                        LED6_GOn();
                    }
                    else
                    {
                        LED6_GOff();
                    }
                    break;
                }
                default:
                {
                    
                break;
                }
                    
            }
            break;
        }
        case LED7:
        {
            //choix de la couleur
            switch (Color)
            {
                case RED:
                {
                    if (LED_On_Off == true)
                    {
                        LED7_ROn();
                    }
                    else
                    {
                        LED7_ROff();
                    }
                    break;
                }
                case YELLOW:
                {
                    if (LED_On_Off == true)
                    {
                        LED7_YOn();
                    }
                    else
                    {
                        LED7_YOff();
                    }
                    break;
                }
                case GREEN:
                {
                    if (LED_On_Off == true)
                    {
                        LED7_GOn();
                    }
                    else
                    {
                        LED7_GOff();
                    }
                    break;
                }
                default:
                {
                    
                break;
                }
                    
            }
            break;
        }
        case LED8:
        {
            //choix de la couleur
            switch (Color)
            {
                case RED:
                {
                    if (LED_On_Off == true)
                    {
                        LED8_ROn();
                    }
                    else
                    {
                        LED8_ROff();
                    }
                    break;
                }
                case YELLOW:
                {
                    if (LED_On_Off == true)
                    {
                        LED8_YOn();
                    }
                    else
                    {
                        LED8_YOff();
                    }
                    break;
                }
                case GREEN:
                {
                    if (LED_On_Off == true)
                    {
                        LED8_GOn();
                    }
                    else
                    {
                        LED8_GOff();
                    }
                    break;
                }
                default:
                {
                    
                break;
                }
                    
            }
            break;
        }
        case LED9:
        {
            //choix de la couleur
            switch (Color)
            {
                case RED:
                {
                    if (LED_On_Off == true)
                    {
                        LED9_ROn();
                    }
                    else
                    {
                        LED9_ROff();
                    }
                    break;
                }
                case YELLOW:
                {
                    if (LED_On_Off == true)
                    {
                        LED9_YOn();
                    }
                    else
                    {
                        LED9_YOff();
                    }
                    break;
                }
                case GREEN:
                {
                    if (LED_On_Off == true)
                    {
                        LED9_GOn();
                    }
                    else
                    {
                        LED9_GOff();
                    }
                    break;
                }
                default:
                {
                    
                break;
                }
                    
            }
            break;
        }
        default:
        {
            break;
        }

    }
    
}

//fonction : All_LED_Off
//Entrée: -
//sortie : - 
//description :Permet d'éteindre toutes les LED de toutes les couleurs 
 
void All_LED_Off (void)
{
    LED0_ROff();
    LED0_GOff();
    LED0_YOff();
    
    LED1_ROff();
    LED1_GOff();
    LED1_YOff();
    
    LED2_ROff();
    LED2_GOff();
    LED2_YOff();
    
    LED3_ROff();
    LED3_GOff();
    LED3_YOff();
    
    LED4_ROff();
    LED4_GOff();
    LED4_YOff();
    
    LED5_ROff();
    LED5_GOff();
    LED5_YOff();
    
    LED6_ROff();
    LED6_GOff();
    LED6_YOff();
    
    LED7_ROff();
    LED7_GOff();
    LED7_YOff();
    
    LED8_ROff();
    LED8_GOff();
    LED8_YOff();
    
    LED9_ROff();
    LED9_GOff();
    LED9_YOff();
}
/* ************************************************************************** */
/* ************************************************************************** */
// Section: Interface Functions                                               */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

// *****************************************************************************

/** 
  @Function
    int ExampleInterfaceFunctionName ( int param1, int param2 ) 

  @Summary
    Brief one-line description of the function.

  @Remarks
    Refer to the example_file.h interface header for function usage details.
 */
int ExampleInterfaceFunction(int param1, int param2) {
    return 0;
}


/* *****************************************************************************
 End of File
 */
