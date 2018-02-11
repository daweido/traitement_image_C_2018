/** \file es.c
 *  \author David Rigaux <rigauxdavi@eisti.fr>
 *  \version 1.0
 *  \date 09 Jan. 2018
 *  \brief Fichier de fonctions de traitement des fichiers PPM (P3)
 */

#include "traitementPPM.h"

sPPM chargementPPM(FILE *fichier) {
    sPPM sPPM_charge; /*Image PPM chargé*/
    int i; /*Compteur de pixel*/
    int int_nbPixels; /*Nombre de Pixels dans l'image*/

    /*Lecture des paramètres de l'image*/
    sPPM_charge.hauteur = atoi(lectMot(calloc(255, sizeof(char)), fichier));
    sPPM_charge.largeur = atoi(lectMot(calloc(255, sizeof(char)), fichier));
    sPPM_charge.valMax = atoi(lectMot(calloc(4, sizeof(char)), fichier));

    /*Calcul du nombre de pixel dans l'image*/
    int_nbPixels = sPPM_charge.hauteur * sPPM_charge.largeur;

    /*Allocation de l'espace mémoire pour accueillir les pixels de l'iamge*/
    sPPM_charge.image = calloc(int_nbPixels, sizeof(sPixel));

    /*Initialisation du compteur*/
    i = 0;

    /*Lecture de chaque couleur (RVB), de chaque pixel de l'image*/
    while (!feof(fichier) && i < int_nbPixels) {
        sPPM_charge.image[i].r = atoi(lectMot(calloc(4, sizeof(char)), fichier));
        sPPM_charge.image[i].v = atoi(lectMot(calloc(4, sizeof(char)), fichier));
        sPPM_charge.image[i].b = atoi(lectMot(calloc(4, sizeof(char)), fichier));
        i++;
    }

    /*Retour de l'image chargé*/
    return (sPPM_charge);
}


void sauvegardePPM(FILE *fichier, sPPM sppm_image) {
    int i; /*Compteur Hauteur*/

    /*Écriture des paramètres de l'image à sauvegarder*/
    fprintf(fichier, "P3\n%d %d\n%d\n",sppm_image.hauteur, sppm_image.largeur,sppm_image.valMax);

    /*Écriture de chaque couleur contenu dans chaque pixel de l'image*/
    for (i = 0; i < sppm_image.largeur * sppm_image.hauteur; i++) {
        fprintf(fichier, "%d %d %d\n", sppm_image.image[i].r, sppm_image.image[i].v, sppm_image.image[i].b);
    }

    /*Fermeture du fichier*/
    fclose(fichier);
}

void nivGrisPPM(sPPM sppm_image) {
    int i; /*Compteur*/
    int int_nivGris; /*Niveau de gris d'un pixel*/

    /*Application de la formule de niveau de gris à chaque pixel de l'image*/
    for (i = 0; i < sppm_image.hauteur * sppm_image.largeur; i++) {
        int_nivGris = 0.299 * sppm_image.image[i].r + 0.587 * sppm_image.image[i].v + 0.114 * sppm_image.image[i].b;
        sppm_image.image[i].r = int_nivGris;
        sppm_image.image[i].v = int_nivGris;
        sppm_image.image[i].b = int_nivGris;
    }
}


int estNiveauGris(sPPM sppm_image) {
    int i; /*Compteur*/

    /*Vérification sur chaque pixel du niveau de gris*/
    for (i = 0; i < sppm_image.hauteur * sppm_image.largeur; i++) {
        if (sppm_image.image[i].r != sppm_image.image[i].v || sppm_image.image[i].v != sppm_image.image[i].b) {
            /*Pixel non niveau de gris donc retour 0*/
            return 0;
        }
    }
    /*Tous pixels en niveau de gris donc retour 1*/
    return 1;
}


void seuillagePPM(sPPM sppm_image, int seuil) {
    int i; /*Compteur*/

    /*Affectation d'une valeur de seuillage par défaut si aucune donnée*/
    if (seuil == -1) {
        seuil = sppm_image.valMax / 2;
    }

    /*Vérification de la positivité de la valeur de seuillage*/
    if (seuil < 1) {
        printf("Erreur : Seuillage doit être supérieur à 1");
        exit(-1);
    }

    /*Transformation en niveau de gris si pas encore*/
    if (estNiveauGris(sppm_image) == 0) {
        nivGrisPPM(sppm_image);
    }

    /*Seuillage appliqué à tous les pixels de l'image en fonction de la valeur de suillage*/
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
