//
// Created by David Rigaux on 08/01/2018.
//

#include "es.h"

char *nomFichierIn(char **argv) {
    return (argv[2]);
}

char *nomFichierOut(char **argv) {
    return (argv[4]);
}

FILE *ouvertureFichierLecture(char *pstr_cheminFichier) {
    FILE *fp; /*Objet représentant le fichier*/

    /*Ouverture du fichier*/
    fp = fopen(pstr_cheminFichier, "r");
    printf("Success");

    /*Retour du fichier*/
    return fp;
}


char *lectMot(char *mot, FILE *fichier) {
    fscanf(fichier, "%s\n", mot);
    return mot;
}
