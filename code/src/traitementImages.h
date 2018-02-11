/** \file es.h
 *  \author David Rigaux <rigauxdavi@eisti.fr>
 *  \version 1.0
 *  \date 09 Jan. 2018
 *  \brief Fichier d'en-tête du fichier \ref traitementImages.c.
 */

#ifndef TP13_PROG_PROC_2018_ING1_TRAITEMENTIMAGES_H
#define TP13_PROG_PROC_2018_ING1_TRAITEMENTIMAGES_H

#include "es.h"
#include "traitementPPM.h"
#include "traitementPGM.h"
#include "traitementPBM.h"

/**
 * \fn int traitementTypeImage(FILE *fichier)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Fonction reconnaissant le type d'image à charger
 * \param fichier : Objet fichier ouvert en mode lecture
 * \return format d'image
 */
int traitementTypeImage(FILE *fichier);




/**
 * \fn void traitementImage(FILE *fichier, char *nomFichierOut, int int_effet, int int_valeurSeuillage)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Fonction traitant l'image (effet et sauvegarde)
 * \param fichier : Objet fichier ouvert en mode lecture
 * \param nomFichierOut : Nom du fichier à sauvegarder
 * \param int_effet : Numéro de l'effet à appliquer
 * \param int_valeurSeuillage : Valeur du seuillage
 */
void traitementImage(FILE *fichier, char *nomFichierOut, int int_effet, int int_valeurSeuillage);

#endif /*TP13_PROG_PROC_2018_ING1_TRAITEMENTIMAGES_H*/
