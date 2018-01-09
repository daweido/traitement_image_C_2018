//
// Created by David Rigaux on 09/01/2018.
//

#include "traitementPGM.h"

sPGM chargementPGM(FILE *fichier) {
    sPGM sPGM_charge; /*Image PGM chargé*/
    int i; /*Compteur de pixel*/
    int int_nbPixels; /*Nombre de Pixels dans l'image*/


    sPGM_charge.hauteur = atoi(lectMot(calloc(255, sizeof(char)), fichier));
    sPGM_charge.largeur = atoi(lectMot(calloc(255, sizeof(char)), fichier));
    sPGM_charge.valMax = atoi(lectMot(calloc(4, sizeof(char)), fichier));

    int_nbPixels = sPGM_charge.hauteur * sPGM_charge.largeur;

    sPGM_charge.image = calloc(int_nbPixels, sizeof(sPixel));

    i = 0;

    while (!feof(fichier) && i < int_nbPixels) {
        sPGM_charge.image[i] = atoi(lectMot(calloc(4, sizeof(char)), fichier));
        i++;
    }

    return (sPGM_charge);
}
