/** \file es.h
 *  \author David Rigaux <rigauxdavi@eisti.fr>
 *  \version 1.0
 *  \date 09 Jan. 2018
 *  \brief Fichier d'en-tête du fichier \ref traitementPBM.c.
 */

#ifndef TP13_PROG_PROC_2018_ING1_TRAITEMENTPBM_H
#define TP13_PROG_PROC_2018_ING1_TRAITEMENTPBM_H

#include "es.h"

/**
 * \fn sPBM chargementPBM(FILE *fichier)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Fonction effectuant le chargement d'une image PBM (P1)
 * \param fichier : Fichier ouvert en mode lecture
 * \return Image chargé
 */
sPBM chargementPBM(FILE *fichier);

/**
 * \fn sPBM chargementPBM(FILE *fichier)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Fonction effectuant la sauvegarde d'une image PBM (P1)
 * \param fichier : Fichier ouvert en mode écriture
 * \param spbm_image : Image à sauvegardé
 */
void sauvegardePBM(FILE *fichier, sPBM spbm_image);

#endif /*TP13_PROG_PROC_2018_ING1_TRAITEMENTPBM_H*/
