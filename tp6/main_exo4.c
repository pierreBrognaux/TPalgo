#include "fonctionsBases.h"

int main(){
    int nombreDeNombres=0;
    char choix[15]= {0};
    printf("combien de nombre voulez vous entrez ?\n");
    scanf("%d", &nombreDeNombres);
    int tableau[100] = {0};
    printf("entrez vos nombre :\n");
    for(int i=0;i < nombreDeNombres; i++){
        printf(">");
        scanf("%d", &tableau[i]);
    }
    printf("que voulez vous faire ?\nmultiplier ou addtionner\n2");
    scanf("%s",choix);
    if(strcmp(choix,"multiplier") == 0){
        int somme = multipliertableau(tableau, nombreDeNombres);
        printf("le resultat est %d",somme);
    }
    else if(strcmp(choix,"additionner") == 0){
        int somme = additionnerTableau(tableau,nombreDeNombres);
        printf("le resultat est %d",somme);
    }
    else{
        printf("veuillez bien ecrire ");
    }
}