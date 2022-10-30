#include <stdio.h>

int main(){
    int nombre;
    printf("Saisissez un nombre enier ;\n> ");
    scanf("%d",&nombre );
    printf("Entier naturels impairs inferieurs a %d :\n", nombre);
    for(int i = 1; i <= nombre; i+=2){
        printf("%d\n",i);
    }

}