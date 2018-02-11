/** \file traitementImages.c
 *  \author David Rigaux <rigauxdavi@eisti.fr>
 *  \version 1.0
 *  \date 09 Jan. 2018
 *  \brief Fichier coordonnant les traitements d'images
 */

#include "traitementImages.h"


int traitementTypeImage(FILE *fichier) {
    char *pstr_type; /*Type d'image*/

    /*Affectation du type de l'image*/
    pstr_type = lectMot(calloc(3, sizeof(char)), fichier);

    /*Renvoie du type d'image*/
    return (pstr_type[1] - '0');
}

void traitementImage(FILE *fichier, char *nomFichierOut, int int_effet, int int_valeurSeuillage) {
    FILE *fichierOut; /*Fichier à sauvegarder*/
    int int_typeImage; /*Valeur du type de l'image*/
    sPPM sPPM_image; /*Image PPM*/
    sPGM sPGM_image; /*Image PGM*/
    sPBM sPBM_image; /*Image PBM*/

    /*Traitement du type de l'image*/
    int_typeImage = traitementTypeImage(fichier);

    /*Ouverture en mode écriture du fichier de sortie*/
    fichierOut = ouvertureFichierEcriture(nomFichierOut);

    /*Début du traitement de l'image en fonction du format de celle-ci*/
    if (int_typeImage == 1) {
        /*Chargement de l'image PBM*/
        sPBM_image = chargementPBM(fichier);

        /*Sauvegarde de l'image PBM*/
        sauvegardePBM(fichierOut, sPBM_image);
    } else if (int_typeImage == 2) {
        /*Chargement de l'image PGM*/
        sPGM_image = chargementPGM(fichier);

        /*Application de l'effet si demandé*/
        if (int_effet == 2) {
            seuillagePGM(sPGM_image, int_valeurSeuillage);
        }

        /*Sauvegarde de l'image*/
        sauvegardePGM(fichierOut, sPGM_image);

    } else if (int_typeImage == 3) {
        /*Chargement de l'image*/
        sPPM_image = chargementPPM(fichier);

        /*Application de l'effet demandé*/
        if (int_effet == 1) {
            nivGrisPPM(sPPM_image);
        } else if (int_effet == 2) {
            seuillagePPM(sPPM_image, int_valeurSeuillage);
        }

        /*Sauvegarde de l'image*/
        sauvegardePPM(fichierOut, sPPM_image);
    } else {
        /*Présence d'une erreur : Sortie du programme*/
        printf("Erreur lors du chargement : fichier erroné");
        exit(-1);
    }
    /*Fermeture du fichier*/
    fclose(fichier);
}



