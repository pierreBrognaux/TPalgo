#include <stdio.h>


int main(){
    int nbr;
    printf("rentrez votre nombre :\n");
    scanf("%d", &nbr );
    if(nbr%7 == 0 || nbr%2 == 0){
        if(nbr%7 == 0){
            printf("votre nombre est un multiple de 7");
        }
        if(nbr%2 == 0){
            printf("votre nombre est un multiple de 2");
        }
    }
    else{
        printf("veuillez ecrire un nombre multiple de 2 ou 7.\n");
        main();
    }
}