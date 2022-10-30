#include <stdio.h>

int main(){
    float nbr , moyenne = 0, i=0;
    printf("entrer vos nombres\n");
    scanf("%f", &nbr);
    while(nbr>0){
        moyenne += nbr;
        scanf("%f", &nbr);
        i += 1;
    }
    moyenne /= i;
    printf("votre moyenne est de %f", moyenne);
}