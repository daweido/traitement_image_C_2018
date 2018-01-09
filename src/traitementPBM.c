/** \file es.c
 *  \author David Rigaux <rigauxdavi@eisti.fr>
 *  \version 1.0
 *  \date 09 Jan. 2018
 *  \brief Fichier de fonctions de traitement des fichiers PBM (P1)
 */

#include "traitementPBM.h"

sPBM chargementPBM(FILE *fichier) {
    sPBM sPBM_charge; /*Image PBM chargé*/
    int i; /*Compteur de pixel*/
    int int_nbPixels; /*Nombre de Pixels dans l'image*/

    /*Lecture des dimensions de l'image*/
    sPBM_charge.hauteur = atoi(lectMot(calloc(255, sizeof(char)), fichier));
    sPBM_charge.largeur = atoi(lectMot(calloc(255, sizeof(char)), fichier));

    /*Calcul du nombre de pixels*/
    int_nbPixels = sPBM_charge.hauteur * sPBM_charge.largeur;

    /*Allocation de l'espace mémoire pour accueillir l'image*/
    sPBM_charge.image = calloc(int_nbPixels, sizeof(sPixel));

    /*Initialisation du compteur*/
    i = 0;

    /*Lecture du fichier jusqu'à fin du fichier*/
    while (!feof(fichier) && i < int_nbPixels) {
        sPBM_charge.image[i] = atoi(lectMot(calloc(1, sizeof(char)), fichier));
        i++;
    }

    /*Retour de la structure PBM de l'image chargé*/
    return (sPBM_charge);
}


void sauvegardePBM(FILE *fichier, sPBM spbm_image) {
    int i; /*Compteur Hauteur*/

    /*Écriture dans le fichier des paramètres de l'image*/
    fprintf(fichier, "P1\n%d %d\n", spbm_image.hauteur, spbm_image.largeur);

    /*Écriture des pixels dans le fichier image de sortie*/
    for (i = 0; i < spbm_image.largeur * spbm_image.hauteur; i++) {
        fprintf(fichier, "%d\n", spbm_image.image[i]);
    }
    fclose(fichier);
}
