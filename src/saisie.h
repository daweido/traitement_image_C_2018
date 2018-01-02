/** \file saisie.h
 *  \author David Rigaux <rigauxdavi@eisti.fr>
 *  \version 1.0
 *  \date 16 Nov. 2017
 *  \brief Fichier d'en-tête du fichier \ref saisie.c
 */


#ifndef TD4_SAISIE_H
#define TD4_SAISIE_H
#define int_N 20
#define int_C 30

/*Définition de la taille des tableaux*/
/*Tableau 1D*/

/*Déclaration des librairies utilisés ainsi que les fichier d'en-tête*/
#include <stdio.h>
#include <stdlib.h>

/**
 * \fn int saisieEntier(void)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \brief Fonction utilisée pour effectuer une saisie d'un entier de la part de l'utilisateur qui vérifie également cette entrée et la renvoie si elle est correcte.
 * \return int_entree : valeur entrée
 * \version 1.0
 * \date 16 Nov. 2017
 */
int saisieEntier(void);

/**
 * \fn float saisieFloat(void)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \brief Fonction utilisée pour effectuer une saisie d'un point flottant de la part de l'utilisateur qui vérifie également cette entrée et la renvoie si elle est correcte.
 * \return flt_entree : valeur entrée
 * \version 1.0
 * \date 16 Nov. 2017
 */
float saisieFloat(void);

/**
 * \fn void saisieTab1dEnt(int tint_tab[int_N])
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \brief Procédure utilisée pour effectuer une saisie d'un tableau de dimension 1 d'entier.
 * \param int tint_tab[int_N] : tableau d'entier dans lequel nous saisissons nos valeurs
 * \version 1.0
 * \date 16 Nov. 2017
 */
void saisieTab1dEnt(int tint_tab[int_N]);

/**
 * \fn void saisieTab1dFlt(float tflt_tab[int_N])
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \brief Procédure utilisée pour effectuer une saisie d'un tableau de dimension 1 de réels.
 * \param float tflt_tab[int_N] : tableau de flotant dans lequel nous saisissons nos valeurs
 * \version 1.0
 * \date 16 Nov. 2017
 */
void saisieTab1dFlt(float tflt_tab[int_N]);

/**
 * \fn void saisieTabVectEnt(int tint_tab1[int_N],int tint_tab2[int_N])
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \brief Procédure utilisée pour effectuer une saisie de deux vecteurs de dimension 3 d'entiers
 * \param int tint_tab1[int_N] : premier vecteur de dimension 3 à saisir
 * \param int tint_tab2[int_N] : deuxième vecteur de dimension 3 à saisir
 * \version 1.0
 * \date 16 Nov. 2017
 */
void saisieTabVectEnt(int tint_tab1[int_N],int tint_tab2[int_N]);

#endif /*TD4_SAISIE_H*/
