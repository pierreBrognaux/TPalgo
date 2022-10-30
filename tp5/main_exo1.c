#include "fonctionsbases.h"
#include <string.h>


int main(){
    nbrRationnel nbr = {0,0};
    nbrRationnel nbr2 = {0,0};
    char choix[15];


    printf("veuillez sasir votre premier nombre. (n/d)\n");
    saisieRationnel(&nbr);
    printf("veuillez sasir votre deuxieme nombre.(n/d)\n");
    saisieRationnel(&nbr2);
    /*printf("%1.f/%1.f et %1.f/%1.f\n", nbr.numerateur, nbr.denominateur, nbr2.numerateur, nbr2.denominateur);*/
    printf("Que voulez vous faire ?\nadditionner,multiplier ou afficher\n");
    scanf("%s", choix);
    if(strcmp(choix, "additionner") == 0){
        additionRationnel(&nbr,&nbr2);
        }
    else if(strcmp(choix, "multiplier") == 0){
        multiplicationRationnel(&nbr,&nbr2);
        }
    else if(strcmp(choix, "afficher") == 0){
        int choixAffichage = 0;
        printf("quelle nombre 1 ou le 2 ?\nle nombre ->\n");
        scanf("%d", &choixAffichage);
        if(choixAffichage == 1){
            affichageRationnel(&nbr);
            }
        else{
            affichageRationnel(&nbr2);
        }
        }
    else{
        printf("vous n'avez pas rentre la bonne instruction veuillez recommencer.\n");
        main();
        }
    return 0;
}