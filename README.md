(Version française / French version)

# Traitement d'images en C
Ceci est un projet fait en première année du cycle ingénieur, codé en [C](http://www.open-std.org/jtc1/sc22/wg14/) qui effectue quelques opérations de traitements d'images.

## Comment ça marche
### Compilation
Ouvrir le terminal dans le dossier racine du programme. Il suffit maintenant 	d'entrer la ligne suivante terminal :
 `make all`.\
Cette commande va compiler le programme.
### Exécution
Dirigez-vous maintenant dans le dossier `bin/` et lancer la commande suivante dans le terminal : `./main -in fichierIn -out fichierOut -arg1 arg2`.
* `arg1` : `-gris` (Niveau de gris) ou `-seuil` (Seuillage)
* `arg2` : Valeur de seuillage si seuillage demandé

(Version anglaise / English version)

# Image manipulation using C
This is a project made in first year of the engineering curriculum coded in [C](http://www.open-std.org/jtc1/sc22/wg14/) which perfoms a few image manipulation operations.
## How it works
### Compilation
Open the terminal in the root directory (`src`). You now have to execute the following line in it :
 `make all`.\
This will compile the program.

### Execution
Now go in the directory `bin/` and execute the following line in the terminal : `./main -in fichierIn -out fichierOut -arg1 arg2`.
* `arg1` : `-gris` (Grayscale) or `-seuil` (Thresholding)
* `arg2` : Thresholding value if given

# License (MIT)
Copyright 2017 David RIGAUX

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
