#include <stdio.h>
#include <stdlib.h>


/*
ce code est juste un  TP test

*/

int main()
{
    /*  int point_de_vie = 10;
    point_de_vie +=5;
    point_de_vie ++;
    printf("tu as %d point de vie\n", point_de_vie);*/
    /*
    int age = 0;
    float taille_utilisateur =0;
    printf("Quel est votre age et combien mesurez vous?\n");
    scanf("%d%f", &age, &taille_utilisateur);
    printf("Vous avez %d ans et vous mesurez %f cm \n ", age, taille_utilisateur);
    */
    
    int cote = 0;
    printf("Quelle est la taille d'un cote du carre ?\n");
    scanf("%d",&cote);
    float perimetre = 0;
    perimetre = 4*cote;
    printf("Ce carre a pour perimetre %f\n", perimetre);

    float surface = 0;
    surface = cote*cote;
    printf("Ce carre a pour surafce %f\n", surface);
    return 0;
}
