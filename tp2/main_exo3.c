#include <stdio.h>

int main() {
    char carac1, carac2, temp;
    scanf(" %c %c",&carac1,&carac2);
    temp = carac2;
    carac2 = carac1;
    carac1 = temp;
    printf("la lettre 1 vaut %c et la 2 vaut %c",carac1, carac2);


}

