#include <stdio.h>

int main(){
    int nbrBloc = 0, nbrEtage = 0, i=1, blocEtage = 1;
    printf("combien avez vous de bloc ?\n");
    scanf("%d", &nbrBloc);
    while(nbrBloc >= blocEtage){
        nbrEtage += 1;
        nbrBloc -= blocEtage;
        i +=  1;
        blocEtage = i*i;
        }
    printf("vous pouvez faire %d etage.", nbrEtage);
}

