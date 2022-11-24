#include <stdlib.h>
#include <stdio.h>

int main(){
    float note = 0;
    int i=0;
    float *moyenne = (float*) malloc(sizeof(float));
    printf("rentrez vos notes, si vous voulez arreter ecrivez un nombre pas compris entre 0 et 20.\n");
    scanf("%f",&note);
    while(0 <= note && note <= 20) {
        moyenne[i] = note;
        scanf("%f", &note);
        i++;
    }
    i--;
    for(int t=0;t<=i;t++) {
        printf("%f\n", moyenne[t]);
    }
    free(moyenne);

    }
