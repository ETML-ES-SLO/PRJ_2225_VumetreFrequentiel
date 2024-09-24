/* ************************************************************************** */
/** Descriptive File Name

  @Company
 ETML-ES

  @File Name
    Gest_LED.h

  @Summary
 fichier pour la géstion des LEDs

  @Description
 Gestion de l'alumage des LEDs ainsi que du clignotements
 */
/* ************************************************************************** */

#ifndef _GEST_LED_H    /* Guard against multiple inclusion */
#define _GEST_LED_H


/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */
#define LED0    0
#define LED1    1
#define LED2    2
#define LED3    3
#define LED4    4
#define LED5    5
#define LED6    6
#define LED7    7
#define LED8    8
#define LED9    9

#define RED     0
#define GREEN   1
#define YELLOW  2

/* This section lists the other files that are included in this file.
 */

/* TODO:  Include other files here if needed. */

//fonction de gestion des leds

void Gest_LED( uint8_t Num_LEDs,uint8_t Color, bool LED_On_Off);

void All_LED_Off (void);

/* Provide C++ Compatibility */
#ifdef __cplusplus
extern "C" {
#endif


    
#endif /* _GEST_LED_H */

/* *****************************************************************************
 End of File
 */
