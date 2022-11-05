#include <stdio.h>
#include <stdlib.h>

int* allouerTableau(int *n){
    printf("rentrez la taille du tableau ?\n");
    scanf("%d",&*n);
    int* tableau = (int*) calloc(n,sizeof(int));
    return tableau;
}

int main(){
    int n =0;
    int *tableau = allouerTableau(&n);
    printf("vous avez allouer un tableau a %d entre",n);
    free(tableau);
}