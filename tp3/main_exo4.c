#include <stdio.h>

int main(){
    int age = 0, tarif, etudiant = 0;
    printf("quelle est votre age ?\n");
    scanf("%d",&age);
    if(18<=age && age<27){
        while((etudiant != 1) && (etudiant != 2)){
            printf("etes vous un etudiant ?\noui : 1    non : 2\n");
            scanf("%d", &etudiant);
            if((etudiant != 1) && (etudiant != 2)){
                printf("veuillez ecrire soit oui soit non.\n");
            }
        }
    }
    if((0<=age) && (age<12)){
        tarif = 4;
    }
    else if((12<=age && age<=17) || (etudiant == 1)){
        tarif = 6;
    }
    else if(65<=age){
        tarif = 6;
    }
    else{
        tarif = 9;
    }
    printf("votre tarif est de %d euros.",tarif);
}