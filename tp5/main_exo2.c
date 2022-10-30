#include <stdio.h>

int main() {
    int tableau[100] = {0}, nbrSaisie = 0, nbrLePlusHaut = 0;
    printf("combien d'entier voulez vous rentrer ?\n");
    scanf("%d",&nbrSaisie);
    if(1>nbrSaisie || nbrSaisie >= 100){
        printf("veuillez mattre un nombre compris entre 0 et 100\n");
        main();
    }
    printf("entre vos nombres :\n");
    for(int i=0;i<nbrSaisie;i++){
        scanf("%d",&tableau[i]);
    }
    for(int i=0;i<=nbrSaisie;i++){
        if(tableau[i]>=nbrLePlusHaut){
            nbrLePlusHaut = tableau[i];
        }
    }
    printf("le nombre le plus eleve est %d", nbrLePlusHaut);
}