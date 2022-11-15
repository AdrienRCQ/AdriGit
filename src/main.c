#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"



int main()
{    
int random = rand() % 100 + 1;

FILE* fichier = NULL;
fichier = fopen("..\\include\\toto.txt", "r+");  //du coup le chemin du fichier va changer mdr

if (fichier != NULL){

    //on peut lire et écrire dans le fichier
    printf("le fichier existe bien vu! \n");
    fprintf(fichier, random);

    fclose(fichier);
}

else
{
    //On affiche un message d'erreur si on veut
    printf("le fichier n'existe pas !");

}

    return 0;
}