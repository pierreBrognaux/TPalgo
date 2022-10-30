#include <stdio.h>

int main(){
    int nombre;
    printf("Saisissez un nombre enier ;\n> ");
    scanf("%d",&nombre );
    printf("Les %d premiers entiers naturels impairs :\n", nombre);
    for(int i = 0; i <= nombre-1; i++){
        printf("%d\n",1+2*i);
    }

}
