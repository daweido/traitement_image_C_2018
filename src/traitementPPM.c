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

void sauvegardePPM(FILE *fichier, sPPM sppm_image) {
    int i; /*Compteur Hauteur*/


    fprintf(fichier, "P3\n");
    fprintf(fichier, "%d %d\n", sppm_image.hauteur, sppm_image.largeur);
    fprintf(fichier, "%d\n", sppm_image.valMax);

    for (i = 0; i < sppm_image.largeur * sppm_image.hauteur; i++) {
        fprintf(fichier, "%d %d %d\n", sppm_image.image[i].r, sppm_image.image[i].v, sppm_image.image[i].b);
    }
}

void nivGrisPPM(sPPM sppm_image) {
    int i; /*Compteur*/
    int int_nivGris; /*Niveau de gris d'un pixel*/

    for (i = 0; i < sppm_image.hauteur * sppm_image.largeur; i++) {
        int_nivGris = 0.299 * sppm_image.image[i].r + 0.587 * sppm_image.image[i].v + 0.114 * sppm_image.image[i].b;
        sppm_image.image[i].r = int_nivGris;
        sppm_image.image[i].v = int_nivGris;
        sppm_image.image[i].b = int_nivGris;
    }
}


int estNiveauGris(sPPM sppm_image) {
    int i; /*Compteur*/

    for (i = 0; i < sppm_image.hauteur * sppm_image.largeur; i++) {
        if (sppm_image.image[i].r != sppm_image.image[i].v || sppm_image.image[i].v != sppm_image.image[i].b) {
            return 0;
        }
    }
    return 1;
}


void seuillagePPM(sPPM sppm_image, int seuil) {
    int i;

    if (seuil == -1) {
        seuil = sppm_image.valMax / 2;
    }

    if (estNiveauGris(sppm_image) == 0) {
        nivGrisPPM(sppm_image);
    }

    for (i = 0; i < sppm_image.hauteur * sppm_image.largeur; i++) {
        if (sppm_image.image[i].r >= seuil) {
            sppm_image.image[i].r = sppm_image.valMax;
            sppm_image.image[i].v = sppm_image.valMax;
            sppm_image.image[i].b = sppm_image.valMax;
        } else {
            sppm_image.image[i].r = 0;
            sppm_image.image[i].v = 0;
            sppm_image.image[i].b = 0;
        }
    }
}