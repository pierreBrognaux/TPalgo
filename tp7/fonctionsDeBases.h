#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int nombresDeCaracteres(char *chaine,char caractere) {
    int nombre = 0;
    for (int i = 0; i <= strlen(chaine); i++) {
        if(chaine[i] == caractere){
            nombre++;
        }
    }
    return nombre;
}
int GetRandomInteger(int min,int max){
    int nombre;
    srand(time(NULL));
    do{
        nombre = rand();
    }
    while(nombre < min || max < nombre);
    return nombre;
}