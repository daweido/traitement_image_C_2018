/** \file menu.h
 *  \author David Rigaux <rigauxdavi@eisti.fr>
 *  \version 1.0
 *  \date 16 Nov. 2017
 *  \brief Fichier d'en-tête du fichier \ref menu.c
 */


#ifndef TD4_MENU_H
#define TD4_MENU_H


/*Déclaration des librairies utilisés ainsi que les fichier d'en-tête*/

#include "saisie.h"



/**
 * \fn void clearScr(void);
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \brief Procédure permettant d'effacer le contenu dans le terminal.
 *
 * \remarks Vérifie le système d'exploitation et exécute la commande effaçant l'écran du terminal.
 * \version 1.0
 * \date 10 Oct. 2017
 */
void clearScr(void);


/**
 * \fn void cleanStdin(void)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \brief Procédure permettant d'effacer le contenu du buffer d'entrée.
 * \version 1.0
 * \date 10 Oct. 2017
 */
void cleanStdin(void);

/**
 * \fn int mainMenu(void)
 * \author David Rigaux <rigauxdavi@eisti.eu>
 * \brief Fontion permettant d'afficher le menu et effectuer le choix de l'utilisateur.
 * \return 0 : La fonction s'est bien déroulé
 * \version 1.0
 * \date 16 Nov. 2017
 */
int mainMenu(void);

/**
* \fn void titre(void)
* \author David Rigaux <rigauxdavi@eisti.eu>
* \brief Procédure affichant le  titre.
*
* \remarks Fonction qui affiche le titre du programme en Big Text :
\verbatim
 ______    ____      ____
/\__  _\  /\  _`\   /'___\
\/_/\ \/  \ \ \L\ \/\ \__/
   \ \ \   \ \ ,__/\ \  _``\
    \ \ \   \ \ \/  \ \ \L\ \
     \ \_\   \ \_\   \ \____/
      \/_/    \/_/    \/___/

\endverbatim
* \version 1.0
* \date 16 Nov. 2017
*/
void titre(void);



/**
* \fn void retourMenuPK(void)
* \author David Rigaux <rigauxdavi@eisti.eu>
* \brief Procédure de retour vers le menu principal.
*
* \remarks Procédure qui affiche le message suivant après une tout appel de fonction permettant l'utilisateur de voir le résultat avant de retourner sur le menu principal. Le message est le suivant :
\verbatim
Appuyez sur ENTRER pour continuer...
\endverbatim
Une fois la touche ENTRER appuyée, l'utilisateur sera redirigé vers le menu \ref mainMenu
* \version 1.0
* \date 10 Oct. 2017
*/
void retourMenuPK(void);

#endif /*TD4_MENU_H*/

