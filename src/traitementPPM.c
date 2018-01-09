//
// Created by David Rigaux on 09/01/2018.
//

#include "traitementPPM.h"

sPPM chargementPPM(FILE *fichier) {
    sPPM sPPM_charge; /*Image PPM chargé*/
    int i; /*Compteur de pixel*/
    int int_nbPixels; /*Nombre de Pixels dans l'image*/


    sPPM_charge.hauteur = atoi(lectMot(calloc(255, sizeof(char)), fichier));
    sPPM_charge.largeur = atoi(lectMot(calloc(255, sizeof(char)), fichier));
    sPPM_charge.valMax = atoi(lectMot(calloc(4, sizeof(char)), fichier));

    int_nbPixels = sPPM_charge.hauteur * sPPM_charge.largeur;

    sPPM_charge.image = calloc(int_nbPixels, sizeof(sPixel));

    i = 0;

    while (!feof(fichier) && i < int_nbPixels) {
        sPPM_charge.image[i].r = atoi(lectMot(calloc(4, sizeof(char)), fichier));
        sPPM_charge.image[i].v = atoi(lectMot(calloc(4, sizeof(char)), fichier));
        sPPM_charge.image[i].b = atoi(lectMot(calloc(4, sizeof(char)), fichier));
        i++;
    }

    return (sPPM_charge);
}