/*! \mainpage Bienvenue !
 *
 * \section intro_sec Introduction
 *
 * Voici la page d'accueil de ma documentation Doxygen.
 * \section howto_sec Comment utiliser
 *  Pour compiler et exécuter le programme TD6, il vous suffit de suivre l'unique étape ci-dessous.
 * \subsection etape1 1ère Étape: Compilation
 *  Ouvrir le terminal dans le dossier racine du programme. Il suffit maintenant 	d'entrer la ligne suivante terminal :
 *
\verbatim
make all
\endverbatim
* Cette commande va compiler le programme.
 * \subsection etape2 2ème Étape : Exécution
 *Dirigez-vous maintenant dans le dossier \verbatim bin/ \endverbatim et lancer la commande suivante dans le terminal : \verbatim ./main -in fichierIn -out fichierOut -arg1 arg2 \endverbatim.
* \verbatim arg1 \endverbatim : \verbatim -gris \endverbatim (Niveau de gris )ou \verbatim -seuil \endverbatim (Seuillage)
* \verbatim arg2 \endverbatim : Valeur de seuillage si seuillage demandé
 */

/** \file main.c
 *  \author David Rigaux <rigauxdavi@eisti.fr>
 *  \version 1.0
 *  \date 16 Nov. 2017
 *  \brief Fichier Principal contenant l'appel du menu commençant le programme.
 */

/*Inclusion du fichier d'en-tête contenant tous les prototypes de ce fichier*/
#include "main.h"

int main(int argc, char **argv) {
    FILE *fichierIn;
    int int_valeurSeuil; /*Valeur du seuillage*/
    int int_effet; /*Effet à appliquer*/

    fichierIn = ouvertureFichierLecture(nomFichierIn(argv));

    int_effet = differentitationEffets(argc,argv);
    printf("%d",int_effet);

    if (int_effet == 2) {
        if (argc == 7) {
            int_valeurSeuil = atoi(argv[6]);
        } else {
            int_valeurSeuil = -1;
        }
    } else {
        int_valeurSeuil = -1;
    }

    printf("%d",int_valeurSeuil);
    traitementImage(fichierIn,nomFichierOut(argv),int_effet,int_valeurSeuil);

    /*Le programme s'est bien exécuté donc renvoie 0*/
    return 0;
}

