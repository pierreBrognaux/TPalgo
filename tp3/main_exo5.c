#include <stdio.h>

int main(){
    int numero;
    printf("quelle boisson voulez-vous ?\n1 : ice tea\n2 : cocaCola\n3 : oasis\n10 : chocolat chaud\n11 : cafe\n>");
    scanf("%d",&numero);
    switch(numero){
        case(1):
            printf("vous avez choisie l'ice tea");
            break;
        case(2):
            printf("vous avez choisie le coca cola");
            break;
        case(3):
            printf("vous avez choisie l'oasis");
            break;
        case(10):
            printf("vous avez choisie le chocolat chaud");
            break;
        case(11):
            printf("vous avez choisie le cafe");
            break;
        default:
            printf("veuillez choisir un numero attribue\n");
            main();





    }

}