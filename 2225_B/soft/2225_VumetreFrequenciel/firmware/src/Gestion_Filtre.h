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

#ifndef _GESTION_FILTRE_H    /* Guard against multiple inclusion */
#define _GESTION_FILTRE_H


/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */
#define NOMBRE_ECH    100000

#define NUM_ZERO_COMP   1241

#define MIN_DB            100
#define MOY_DB            500
#define MAX_DB            1000

//fonction recherche valeur min,valeur max et offset
void Value_search(uint16_t t_Values [NOMBRE_ECH],uint16_t *Value_max,uint16_t *Value_min,uint16_t *Val_Zero);
//fonction de gestion des valeurs dans le tableau
void Conv_Values (uint16_t t_Values [NOMBRE_ECH],uint16_t *Nb_ech_pos,uint16_t Val_Zero );
//calcul de la fréquence et allume les LEDs
void Calcul_Frequence_Led (uint16_t Nb_ech,uint16_t Tension_max);

/* Provide C++ Compatibility */
#ifdef __cplusplus
extern "C" {
#endif


    
#endif /* _GEST_LED_H */

/* *****************************************************************************
 End of File
 */
