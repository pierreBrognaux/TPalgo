#include "fonctionsBases.h"

int main() {
    int a = 0, b = 0;
    int quotient = 0, reste = 0;
    printf("rentrez les valeurs de a et b\n");
    scanf("%d %d",&a,&b);
    procedure(a, b, &quotient, &reste);
    printf("%d %d",quotient, reste);
    return 0;
}