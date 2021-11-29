#include <stdio.h>
//area de un circulo
int main(){
    double radio;
    printf("introduce el radio del circulo: ");
    scanf("%lf",&radio);
    double area = 3.141592*radio*radio;
    printf("el area del circulo es: %.2lf",area);
    return 0;
}
