/** \file es.h
 *  \author David Rigaux <rigauxdavi@eisti.fr>
 *  \version 1.0
 *  \date 09 Jan. 2018
 *  \brief Fichier d'en-tête du fichier \ref traitementPPM.c.
 */

#ifndef TP13_PROG_PROC_2018_ING1_TRAITEMENTPPM_H
#define TP13_PROG_PROC_2018_ING1_TRAITEMENTPPM_H

#include "es.h"

/**
 * \fn sPPM chargementPPM(FILE *fichier)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Fonction effectuant le chargement d'une image PPM (P3)
 * \param fichier : Fichier ouvert en mode lecture
 * \return Structure d'une image PPM
 */
sPPM chargementPPM(FILE *fichier);

/**
 * \fn void sauvegardePPM(FILE* fichier,sPPM sppm_image)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Fonction effectuant la sauvegarde d'une image PPM (P3)
 * \param fichier : Objet image ouvert en écriture
 * \param sppm_image : Image PPM (P3) à sauvegarder
 */
void sauvegardePPM(FILE *fichier, sPPM sppm_image);

/**
 * \fn void nivGrisPPM(sPPM sppm_image)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Fonction transformant en niveau de gris une image PPM
 * \param sppm_image : Image à transformer en niveau de gris
 */
void nivGrisPPM(sPPM sppm_image);

/**
 * \fn int estNiveauGris(sPPM sppm_image)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Fonction vérifiant l'état de niveau de gris d'une image
 * \param sppm_image : Image à vérifier
 * \return 1 si en niveau de gris sinon 0
 */
int estNiveauGris(sPPM sppm_image);

/**
 * \fn void seuillagePPM(sPPM spp_image, int seuil)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \version 1.0
 * \date 9 Jan. 2018
 * \brief Fonction appliquant la transformation du seuillage à une image PPM (P3). Si celle-ci n'est pas encore en niveau de gris alors elle sera d'abord transformé en niveau de gris.
 * \param spp_image : Image à seuiller
 * \param seuil : Valeur du seuillage
 */
void seuillagePPM(sPPM spp_image, int seuil);

#endif /*TP13_PROG_PROC_2018_ING1_TRAITEMENTPPM_H*/
