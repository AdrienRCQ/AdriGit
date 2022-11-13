#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

int triple(int nombre)
{
    int resultat = 0;
    resultat = 3 * nombre;  // On multiplie le nombre fourni par 3
    return resultat;       // On retourne la variable resultat qui vaut le triple de nombre
}

void write()
{
FILE* fichier = NULL;
fichier = fopen("D:\\ICS\\autres\\C-Adrien\\include\\toto.txt", "r+");

char phrase[50]="Je suis Adrien Ricque !";
    fprintf(fichier, "%s", phrase);
    
}    