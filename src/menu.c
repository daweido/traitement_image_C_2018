/** \file menu.c
 *  \author David Rigaux <rigauxdavi@eisti.fr>
 *  \version 1.0
 *  \date 16 Nov. 2017
 *  \brief Fichier contenant toutes les fonctions relative à l'afficahge et la gestion du menu.
**/


/*Inclusion du fichier d'en-tête contenant tous les prototypes de ce fichier*/

#include "menu.h"

void clearScr(void)
{
    system("clear");
}

void cleanStdin(void) {
    int c; /*Caractère restant dans le buffer*/

    /*On lit dans le buffer tant qu’on n’arrive pas au caractère de retour chariot ou fin*/
    do {
        c = getchar();
    } while ((c != '\n') && (c!= EOF));
}

void titre(void) {
/*Affichage du grand titre*/
    printf("\t\t\t ______    ____      ____\n");
    printf("\t\t\t/\\__  _\\  /\\  _`\\   /'___\\\n");
    printf("\t\t\t\\/_/\\ \\/  \\ \\ \\L\\ \\/\\ \\__/\n");
    printf("\t\t\t   \\ \\ \\   \\ \\ ,__/\\ \\  _``\\\n");
    printf("\t\t\t    \\ \\ \\   \\ \\ \\/  \\ \\ \\L\\ \\\n");
    printf("\t\t\t     \\ \\_\\   \\ \\_\\   \\ \\____/\n");
    printf("\t\t\t      \\/_/    \\/_/    \\/___/\n\n");

}

void retourMenuPK(void) {
/*Affichage de message pour continuer l'exécution du programme*/
    printf("Appuyez sur ENTRER pour continuer...");

/*Vidage du buffer*/
    cleanStdin();

/*Attente de la réponse de l'utilisateur pour continuer*/
    getchar();

/*Appel de la fonction affichant le menu*/
    mainMenu();
}


int mainMenu(void) {
    int int_option;/*Valeur de l'option choisie par l'utilisateur*/

    clearScr(); /*Vidage de l'écran du terminal*/

    titre(); /*Afficahge du grand titre*/

    /*Affichage du menu principal*/
    printf("\t\tBienvenue dans le menu principal du TP6\n");
    printf("\t\tVeuillez choisir l'exercice souhaité :\n");
    printf("\t\t1. L'inversion d'un tableau;\n");
    printf("\t\t2. Le produit vectoriel;\n");
    printf("\t\t3. La normalisation de réels d'un tableau;\n");
    printf("\t\t4. La Cryptographie – Code de César;\n");
    printf("\t\t5. Tic-Tac-Toe;\n");
    printf("\t\t6. Quitter.\n\n");
    printf("\t\tChoix : ");

    int_option = saisieEntier();


    clearScr(); /*Vide affichage pour faire place au choix fait*/

    /*Appel de la fonction correspondant à l'option choisie par l'utilisateur*/
    switch (int_option) {
        case 1 :
            printf("1");
            retourMenuPK();
            break;
        case 2 :
            printf("2");
            retourMenuPK();
            break;
        case 3 :
            printf("3");
            retourMenuPK();
            break;
        case 4 :
            printf("4");
            retourMenuPK();
            break;
        case 5 :
            printf("5");
            retourMenuPK();
            break;
        case 6 :
            printf("\tMerci d'avoir exécuté le TP6 !\n\tÀ très bientot, Aurevoir !\n\n\tDavid Rigaux\n\trigauxdavi@eisti.eu\n");
            exit(0);
            break;
        default :
            mainMenu();
            break;
            }
/* Fin de la fonction, elle se termine normalement, et donc retourne 0*/
    return (0);
}
