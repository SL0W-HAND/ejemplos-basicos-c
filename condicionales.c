#include <stdio.h>
//area de un circulo
int main(){
    double radio;
    printf("introduce el radio del circulo: ");
    scanf("%lf",&radio);
    double area = 3.141592*radio*radio;

    return 0;
}