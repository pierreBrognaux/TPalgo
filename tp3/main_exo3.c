#include <stdio.h>

int main(){
    const int nbr;
    scanf("%d%",&nbr);
    (nbr%3 == 0) ? (printf("cette entier est un multiple de 3\n")) : (printf("cette entier n'est pas un multiple de 3\n"));
    (nbr >= 10) ? (printf("nbr superireur a 10")) : (printf("nombre inferieur a 10"));

}