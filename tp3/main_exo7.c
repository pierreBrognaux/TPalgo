#include <stdio.h>


int main(){
    int classe, nbrEleves, totalEleves;
    printf("combien de classe avez vous?\n");
    scanf("%d", &classe);
    for(int i=1; i <= classe; i++){
        printf("rentrez le nombre d'eleves de la classe %d \n", i);
        scanf("%d", &nbrEleves);
        totalEleves += nbrEleves;
    }
    printf("vous avez %d eleves dans votre ecoles.", totalEleves);
}