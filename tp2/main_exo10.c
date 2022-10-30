#include <stdio.h>

int main(){
    int nombre,carre;
    printf("Saisissez un nombre :\n>");
    scanf("%d", &nombre);
    carre = nombre*nombre;
    printf("La valeur de ce nombre au carre est %d.",carre);
}