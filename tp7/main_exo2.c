#include "fonctionsDeBases.h"

int main(){
    int min,max;
    printf("quelle est votre ensemble ?\nmin/max\n");
    scanf("%d/%d",&min,&max);
    int nombre = GetRandomInteger(min,max);
    printf("votre nombre au hazard est %d",nombre);
}