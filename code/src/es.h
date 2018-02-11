/** \file es.h
 *  \author David Rigaux <rigauxdavi@eisti.fr>
 *  \version 1.0
 *  \date 09 Jan. 2018
 *  \brief Fichier d'en-tête du fichier \ref es.c.
 */
#ifndef TP13_PROG_PROC_2018_ING1_ES_H
#define TP13_PROG_PROC_2018_ING1_ES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * \struct sPixel
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Structure décrivant un pixel d'une image
 */
struct sPixel {
    int r;
    int v;
    int b;
};

/**
 * \typedef typedef struct sPixel sPixel
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Renommage de la structure
 */
typedef struct sPixel sPixel;


/**
 * \struct sImagePPM
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Structure décrivant une image PPM (P3)
 */
struct sImagePPM {
    int hauteur;
    int largeur;
    int valMax;
    sPixel *image;
};


/**
 * \typedef typedef struct sImagePPM sPPM
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Renommage de la structure
 */
typedef struct sImagePPM sPPM;

/**
 * \struct sImagePGM
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Structure décrivant une image PGM (P2)
 */
struct sImagePGM {
    int hauteur;
    int largeur;
    int valMax;
    int *image;
};

/**
 * \typedef typedef struct sImagePGM sPGM
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Renommage de la structure
 */
typedef struct sImagePGM sPGM;

/**
 * \struct sImagePBM
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Structure décrivant une image PBM (P1)
 */
struct sImagePBM {
    int hauteur;
    int largeur;
    int *image;
};

/**
 * \typedef typedef struct sImagePBM sPBM
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Renommage de la structure
 */
typedef struct sImagePBM sPBM;


/**
 * \fn char *nomFichierIn(char **argv)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Foction retournant le fichier à charger
 * \param argv : Arguments de commande
 * \return nom du fichier d'entrée
 */
char *nomFichierIn(char **argv);

/**
 * \fn char *nomFichierOut(char **argv)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Foction retournant le fichier à sauvegarder
 * \param argv : Arguments de commande
 * \return nom du fichier à sauvegarder
 */
char *nomFichierOut(char **argv);

/**
 * \fn FILE *ouvertureFichierLecture(char *pstr_cheminFichier)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Fonction ouvrant un fichier en mode lecture
 * \param pstr_cheminFichier : Chemin vers le fichier à ouvrir
 * \return Objet fichier ouvert en mode lecture
 */
FILE *ouvertureFichierLecture(char *pstr_cheminFichier);

/**
 * \fn FILE *ouvertureFichierEcriture(char *pstr_cheminFichier)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Fonction ouvrant un fichier en mode écriture
 * \param pstr_cheminFichier : Chemin vers le fichier à ouvrir
 * \return Objet fichier ouvert en mode écriture
 */
FILE *ouvertureFichierEcriture(char *pstr_cheminFichier);

/**
 * \fn char *lectMot(char *mot, FILE *fichier)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Fonction lisant un mot dans un fichier et le sauvegarde dans un pointeur
 * \param mot : Pointeur du mot dans le quel il est sauvegardé
 * \param fichier : Fichier ouvert en mode lecture
 * \return Chaîne de caractères
 */
char *lectMot(char *mot, FILE *fichier);

/**
 * \fn int differentitationEffets(int argc, char **argv)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Fonction faisant la différentiation entre les effets à appliquer
 * \param argc : Nombre d'arguments dans la commande
 * \param argv : Tableaux d'arguments dans la commande
 * \return Retourne l'effet à appliqer
 */
int differentitationEffets(int argc, char **argv);


/**
 * \fn int presenceEffet(int argc, char **argv)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Fonction vérifiant la présence d'argument contenant un effet
 * \param argc : Nombre d'arguments
 * \param argv : Tableau d'arguments
 * \return Si argument supplémentaire présent, renvoie le numéro de l'effet sinon renvoie -1
 */
int presenceEffet(int argc, char **argv);

#endif /*TP13_PROG_PROC_2018_ING1_ES_H*/
