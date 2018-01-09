//
// Created by David Rigaux on 08/01/2018.
//

#include "es.h"

FILE *ouvertureFichierLecture(void) {
    FILE *fp; /*Objet représentant le fichier*/

    /*Ouverture du fichier*/
    fp = fopen("/Users/davidrigaux/Desktop/ppm.ppm", "r");

    /*Retour du fichier*/
    return fp;
}


int recupTypeImage(FILE *fp) {
    char buff[255]; /**/

    fscanf(fp,"%s\n",buff);
    printf("%s",buff);
    return 1;
}