/** \file saisie.c
 *  \author David Rigaux <rigauxdavi@eisti.fr>
 *  \version 1.0
 *  \date 22 Oct. 2017
 *  \brief Fichier contenant les fonctions permettant d'effectuer des saisies qui sont vérifiées.
 */

/*Inclusion du fichier d'en-tête contenant tous les prototypes de ce fichier*/
#include "saisie.h"

int saisieEntier(void) {
    int int_entree; /*Valeur entrée par l'utilisateur*/
    int int_entreeRetour; /*Valeur de retour de l'entrée*/

    /*Entrée de l'utilisateur*/
    int_entreeRetour = scanf("%d",&int_entree);

    /* Verification de l'entrée utilisateur*/
    if (int_entreeRetour == 0) {
        printf ("Probleme de saisie\n");
        exit (-1);
    }

    /*L'entrée est correcte donc renvoie la valeur entrée*/
    return (int_entree);
}

float saisieFloat(void) {
    float flt_entree; /*Valeur entrée par l'utilisateur*/
    int int_entreeRetour; /*Valeur de retour de l'entrée*/

    /*Entrée de l'utilisateur*/
    int_entreeRetour = scanf("%f",&flt_entree);

    /* Verification de l'entrée utilisateur*/
    if (int_entreeRetour == 0) {
        printf ("Probleme de saisie\n");
        exit (-1);
    }

    /*L'entrée est correcte donc renvoie la valeur entrée*/
    return (flt_entree);
}

void saisieTab1dEnt(int tint_tab[int_N]) {
    int i; /*Compteur permettant de parcourir tout le tableau*/
    printf("Saisie d'un tableau de 20 entiers :\n");

    /*Demande d'entrée de chaque valeur entière du tableau*/
    for (i = 0; i < int_N; i++) {
        printf("\tVeuillez entrer l'élément d'indice %d : ",i);
        tint_tab[i] = saisieEntier();
    }
}

void saisieTab1dFlt(float tflt_tab[int_N]) {
    int i; /*Compteur permettant de parcourir tout le tableau*/
    printf("Saisie d'un tableau de 20 réels :\n");

    /*Demande d'entrée de chaque valeur réelles du tableau*/
    for (i = 0; i < int_N; i++) {
        printf("\tVeuillez entrer l'élément d'indice %d : ",i);
        tflt_tab[i] = saisieFloat();
    }
}


void saisieTabVectEnt(int tint_tab1[int_N],int tint_tab2[int_N]) {
    int i; /*Compteur permettant de parcourir le tableau*/
    int j; /*Compteur du nombre de tableau*/

    /*Boucle demandant la valeur de chaque coordonnées de deux vecteurs de dimension 3*/
    for (j = 0; j < 2; j++) {
        if (j==0) {
            printf("Déclaration du premier vecteur : \n");
        } else {
            printf("Déclaration du deuxième vecteur : \n");
        }
        for (i = 0; i<3;i++) {
            switch (i) {
                case 0 :
                    printf("\tVeuillez entrer la valeur de x : ");
                    break;
                case 1 :
                    printf("\tVeuillez entrer la valeur de y : ");
                    break;
                default:
                    printf("\tVeuillez entrer la valeur de z : ");
            }
            if (j==0) {
                tint_tab1[i]=saisieEntier();
            } else {
                tint_tab2[i]=saisieEntier();
            }
        }
    }

}

