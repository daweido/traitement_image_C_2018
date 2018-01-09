//
// Created by David Rigaux on 09/01/2018.
//

#include "traitementPBM.h"

sPBM chargementPBM(FILE *fichier) {
    sPBM sPBM_charge; /*Image PBM chargé*/
    int i; /*Compteur de pixel*/
    int int_nbPixels; /*Nombre de Pixels dans l'image*/


    sPBM_charge.hauteur = atoi(lectMot(calloc(255, sizeof(char)), fichier));
    sPBM_charge.largeur = atoi(lectMot(calloc(255, sizeof(char)), fichier));

    int_nbPixels = sPBM_charge.hauteur * sPBM_charge.largeur;

    sPBM_charge.image = calloc(int_nbPixels, sizeof(sPixel));

    i = 0;

    while (!feof(fichier) && i < int_nbPixels) {
        sPBM_charge.image[i] = atoi(lectMot(calloc(1, sizeof(char)), fichier));
        i++;
    }

    return (sPBM_charge);
}
