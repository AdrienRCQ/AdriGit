#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"



int main(int argc, char *argv[])
{    
int random = rand() % 100 + 1;

FILE* fichier = NULL;
fichier = fopen("D:\\ICS\\autres\\C-Adrien\\include\\toto.txt", "r+");
int caractereActuel = 0;

if (fichier != NULL){

    //on peut lire et écrire dans le fichier
    printf("le fichier existe bien vu! \n");
    fprintf(fichier, random);
        // Boucle de lecture des caractères un à un
        do
        {
            caractereActuel = fgetc(fichier); // On lit le caractère
            printf("%c", caractereActuel); // On l'affiche
        } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)


    fclose(fichier);
}

else
{
    //On affiche un message d'erreur si on veut
    printf("le fichier n'existe pas !");

}

    return 0;
}