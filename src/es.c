/** \file es.c
 *  \author David Rigaux <rigauxdavi@eisti.fr>
 *  \version 1.0
 *  \date 09 Jan. 2018
 *  \brief Fichier effectuant les entrées et sorties avec les fichiers
 */

#include "es.h"

char *nomFichierIn(char **argv) {
    /*Retour du nom du fichier*/
    return (argv[2]);
}

char *nomFichierOut(char **argv) {
    /*Retour du nom du fichier de sortie*/
    return (argv[4]);
}

FILE *ouvertureFichierLecture(char *pstr_cheminFichier) {
    FILE *fp; /*Objet représentant le fichier*/

    /*Ouverture du fichier*/
    fp = fopen(pstr_cheminFichier, "r");

    /*Retour du fichier*/
    return fp;
}

FILE *ouvertureFichierEcriture(char *pstr_cheminFichier) {
    FILE *fp; /*Objet représentant le fichier*/

    /*Ouverture du fichier*/
    fp = fopen(pstr_cheminFichier, "w");

    /*Retour du fichier*/
    return fp;
}


char *lectMot(char *mot, FILE *fichier) {
    fscanf(fichier, "%s\n", mot);
    return mot;
}

int differentitationEffets(int argc, char **argv) {
    if (strcmp(argv[5],"-gris") == 0) {
        /*Retour de 1 si niveau de gris à faire*/
        return (1);
    } else if (strcmp(argv[5],"-seuil") == 0) {
        /*Retour de 2 si seuillage à faire*/
        return (2);
    } else if (argv[5] != NULL) {
        /*Si argument différent, alors retour erreur*/
        printf("\n\nErreur dans les arguments : %s",argv[5]);
        exit(-1);
    } else {
        /*Si pas d'argument, alors simplement sauvergarder sous*/
        return (0);
    }
}

int presenceEffet(int argc, char **argv) {
    if (argc > 5) {
        /*Retour de l'effet à appliquer*/
        return (differentitationEffets(argc,argv));
    } else {
        /*Aucun effet à appliquer*/
        return (-1);
    }
}
