//
// Created by David Rigaux on 09/01/2018.
//

#include "traitementImages.h"


int traitementTypeImage(FILE *fichier) {
    char *pstr_type;

    pstr_type = lectMot(calloc(3, sizeof(char)), fichier);

    return (pstr_type[1] - '0');
}

void traitementImage(FILE *fichier) {
    char *mot;
    int int_typeImage; /*Valeur du type de l'image*/
    sPPM sPPM_image; /*Image PPM*/
    sPGM sPGM_image; /*Image PGM*/
    sPBM sPBM_image; /*Image PBM*/
    int i; /*Compteur*/


    int_typeImage = traitementTypeImage(fichier);

    if (int_typeImage == 1) {
        sPBM_image = chargementPBM(fichier);
    } else if (int_typeImage == 2) {
        sPGM_image = chargementPGM(fichier);
    } else if (int_typeImage == 3) {
        sPPM_image = chargementPPM(fichier);
    } else {
        printf("Erreur lors du chargement : fichier erroné");
        exit(-1);
    }
}


