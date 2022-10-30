#include "fonctionsBases.h"

int main(){
    Point p1,p2;
    printf("veuillez rentrez le premier point x y\n");
    scanf("%f %f",&p1.x,&p1.y);
    printf("veuillez rentrez le deuxieme point x y\n");
    scanf("%f %f",&p2.x,&p2.y);
    echangePoint(&p1,&p2);
    printf("le point 1 est x:%.2f y:%.2f\net le point 2 est x:%.2f et y:%.2f",p1.x,p1.y,p2.x,p2.y);
}