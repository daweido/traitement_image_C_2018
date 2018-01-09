//
// Created by David Rigaux on 08/01/2018.
//

#ifndef TP13_PROG_PROC_2018_ING1_ES_H
#define TP13_PROG_PROC_2018_ING1_ES_H

#include <stdio.h>

/**
 * \struct sPixel
 * \brief Structure décrivant un pixel d'une image
 */
struct sPixel {
    int r;
    int v;
    int b;
};

/**
 * \struct sImagePPM
 * \brief Structure décrivant une image PPM (P3)
 */
struct sImagePPM {
    int hauteur;
    int largeur;
    int valMax;
    struct sPixel *image;
};

/**
 * \struct sImagePGM
 * \brief Structure décrivant une image PGM (P2)
 */
struct sImagePGM {
    int hauteur;
    int largeur;
    int valMax;
    int *pixel;
};

/**
 * \struct sImagePBM
 * \brief Structure décrivant une image PBM (P1)
 */
struct sImagePBM {
    int hauteur;
    int largeur;
    int *pixel;
};


FILE* ouvertureFichierLecture(void);

int recupTypeImage(FILE *fp);


#endif //TP13_PROG_PROC_2018_ING1_ES_H
