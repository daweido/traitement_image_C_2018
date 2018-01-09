/*! \mainpage Bienvenue !
 *
 * \section intro_sec Introduction
 *
 * Voici la page d'accueil de ma documentation Doxygen.
 * \section howto_sec Comment utiliser
 *
 * \subsection etape1 1ère Étape: Compilation et exécution
 *
 * Ouvrir le terminal dans le dossier racine du programme. Il suffit maintenant d'entrer la ligne suivante terminal :
\verbatim
make all
\endverbatim
* Cette commande va compiler et exécuter le programme.
 */

/** \file main.c
 *  \author David Rigaux <rigauxdavi@eisti.fr>
 *  \version 1.0
 *  \date 16 Nov. 2017
 *  \brief Fichier Principal contenant l'appel du menu commençant le programme.
 */

/*Inclusion du fichier d'en-tête contenant tous les prototypes de ce fichier*/
#include "main.h"

int main(int argc ,char** argv) {

recupTypeImage(ouvertureFichierLecture());

    /*Le programme s'est bien exécuté donc renvoie 0*/
    return 0;
}

