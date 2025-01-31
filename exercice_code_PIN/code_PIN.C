#include <stdio.h>
#include <stdlib.h>

//commentaire

/*
ce code est juste un  TP test

*/
int main()
{
    int nbre_tentative = 3;
    int code_PIN = 0;

    do{
            nbre_tentative--;
            printf("Saisir le code PIN : ");
            scanf("%d", &code_PIN);

            if (code_PIN != 1234){
                printf("Erreur, il vous reste %d tentatives\n", nbre_tentative);
            }
            else {
                printf("telephone deverouille\n");
                break;
            } 

        }while (nbre_tentative>0);
        return 0;
        
}
