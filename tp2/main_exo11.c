#include <stdio.h>

int main(){
    int nombreA,nombreB,nombre,nombreDeBase;
    printf("Saisissez l'entier A:\n>");
    scanf("%d",&nombreA);
    printf("Saisissez l'entier B:\n>");
    scanf("%d", &nombreB);
    nombreDeBase = nombreA;
    for(nombreA ;nombreA<=nombreB; nombreA++){
        nombre += nombreA;
    }
    printf("La somme des nomrbes entre %d et %d est %d", nombreDeBase,nombreB,nombre);
}