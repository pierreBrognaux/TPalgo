#include "fonctionsBases.h"

int main(){
    int a=0,b=0;
    scanf("%d %d",&a,&b);
    printf("a = %d b = %d\n",a,b);
    echangeVariable(&a,&b);
    printf("a = %d b = %d\n",a,b);
}