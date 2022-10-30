#include <stdio.h>


typedef struct nombreRationel{
    float numerateur, denominateur;
}nbrRationnel;
void saisieRationnel(nbrRationnel *nbr){
    scanf("%f/%f", &nbr->numerateur, &nbr->denominateur);
}
void affichageRationnel(nbrRationnel *nbr){
    float res = (*nbr).numerateur/(*nbr).denominateur;
    printf("votre nombre Reationnel %.1f/%.1f vaut %.2f  \n", (*nbr).numerateur, (*nbr).denominateur,res );
}
void multiplicationRationnel(nbrRationnel *num1, nbrRationnel *num2){
    struct nombreRationel res;
    res.numerateur= num1->numerateur*num2->numerateur, res.denominateur = num1->denominateur*num2->denominateur;
    printf("le resultat de votre multiplication est %.2f",res.numerateur/res.denominateur);
}
float additionRationnel(nbrRationnel *num1,nbrRationnel *num2){
    struct nombreRationel res2;
    res2.numerateur = (*num1).numerateur*(*num2).denominateur + (*num2).numerateur*(*num1).denominateur;
    res2.denominateur = (*num1).denominateur*(*num2).denominateur;
    printf("votre resultat de l'adition est %.2f", (*num1).numerateur,(*num1).denominateur,(*num2).numerateur,
           (*num2).denominateur,res2.numerateur/res2.denominateur);
    return 0;
}

