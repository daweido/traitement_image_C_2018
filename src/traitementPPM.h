//
// Created by David Rigaux on 09/01/2018.
//

#ifndef TP13_PROG_PROC_2018_ING1_TRAITEMENTPPM_H
#define TP13_PROG_PROC_2018_ING1_TRAITEMENTPPM_H

#include "es.h"

sPPM chargementPPM(FILE *fichier);

void sauvegardePPM(FILE* fichier,sPPM sppm_image);

void nivGrisPPM(sPPM sppm_image);

void seuillagePPM(sPPM spp_image,int seuil);

#endif //TP13_PROG_PROC_2018_ING1_TRAITEMENTPPM_H
