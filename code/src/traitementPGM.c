/** \file es.c
 *  \author David Rigaux <rigauxdavi@eisti.fr>
 *  \version 1.0
 *  \date 09 Jan. 2018
 *  \brief Fichier de fonctions de traitement des fichiers PGM (P2)
 */

#include "traitementPGM.h"

sPGM chargementPGM(FILE *fichier) {
    sPGM sPGM_charge; /*Image PGM chargé*/
    int i; /*Compteur de pixel*/
    int int_nbPixels; /*Nombre de Pixels dans l'image*/

    /*Lecture des paramètres de l'image*/
    sPGM_charge.hauteur = atoi(lectMot(calloc(255, sizeof(char)), fichier));
    sPGM_charge.largeur = atoi(lectMot(calloc(255, sizeof(char)), fichier));
    sPGM_charge.valMax = atoi(lectMot(calloc(4, sizeof(char)), fichier));

    /*Calcul du nombre de pixels dans l'image*/
    int_nbPixels = sPGM_charge.hauteur * sPGM_charge.largeur;

    /*Allocation de la mémoire pour accueillir les pixels de l'image*/
    sPGM_charge.image = calloc(int_nbPixels, sizeof(sPixel));

    /*Initialisation du compteur*/
    i = 0;

    /*Lecture de chaque pixel*/
    while (!feof(fichier) && i < int_nbPixels) {
        sPGM_charge.image[i] = atoi(lectMot(calloc(4, sizeof(char)), fichier));
        i++;
    }

    /*Retour de l'image chargé*/
    return (sPGM_charge);
}


void sauvegardePGM(FILE *fichier, sPGM spgm_image) {
    int i; /*Compteur Hauteur*/

    /*Écriture des paramètres de l'image*/
    fprintf(fichier, "P2\n%d %d\n%d\n", spgm_image.hauteur, spgm_image.largeur, spgm_image.valMax);

    /*Écriture de chaque pixel de l'image*/
    for (i = 0; i < spgm_image.largeur * spgm_image.hauteur; i++) {
        fprintf(fichier, "%d\n", spgm_image.image[i]);
    }

    /*Fermeture du fichier*/
    fclose(fichier);
}

void seuillagePGM(sPGM spgm_image, int seuil) {
    int i; /*Compteur*/

    /*Affectation d'une valeur de seuillage par défaut si absence de valeur de seuillage*/
    if (seuil == -1) {
        seuil = spgm_image.valMax / 2;
    }

    /*Vérification de la positivité de la valeur de seuillage*/
    if (seuil < 1) {
        printf("Erreur : Seuillage doit être supérieur à 1");
        exit(-1);
    }

    /*Application du seuillage à l'ensemble des pixels de l'image*/
    for (i = 0; i < spgm_image.hauteur * spgm_image.largeur; i++) {
        if (spgm_image.image[i] >= seuil) {
            spgm_image.image[i] = spgm_image.valMax;
        } else {
            spgm_image.image[i] = 0;
        }
    }
}
