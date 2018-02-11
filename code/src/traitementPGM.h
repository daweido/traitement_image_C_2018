/** \file es.h
 *  \author David Rigaux <rigauxdavi@eisti.fr>
 *  \version 1.0
 *  \date 09 Jan. 2018
 *  \brief Fichier d'en-tête du fichier \ref traitementPGM.c.
 */

#ifndef TP13_PROG_PROC_2018_ING1_TRAITEMENTPGM_H
#define TP13_PROG_PROC_2018_ING1_TRAITEMENTPGM_H

#include "es.h"

/**
 * \fn sPGM chargementPGM(FILE *fichier)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Fonction de chargement d'une image PGM (P2)
 * \param fichier : Fichier ouvert en mode lecture, à charger
 * \return Image chargé
 */
sPGM chargementPGM(FILE *fichier);

/**
 * \fn void sauvegardePGM(FILE* fichier,sPGM spgm_image)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Fonction de sauvegarde d'une image PGM (P2)
 * \param fichier : Fichier ouvert en mode écriture à sauvegarder
 * \param spgm_image : Image à sauvegarder
 */
void sauvegardePGM(FILE* fichier,sPGM spgm_image);

/**
 * \fn void seuillagePGM(sPGM spgm_image, int seuil)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Procédure appliquant le seuillage à une image PGM
 * \param spgm_image : Image à seuiller
 * \param seuil : Valeur de seuillage
 */
void seuillagePGM(sPGM spgm_image, int seuil);

#endif /*TP13_PROG_PROC_2018_ING1_TRAITEMENTPGM_H*/
