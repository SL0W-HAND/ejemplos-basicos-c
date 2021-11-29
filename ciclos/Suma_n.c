#include <stdio.h>

int main(){
    int n;
    printf("hasta que nuero quieres sumar \n"
    "ingresa un numero: ");
    scanf("%d", &n);
    int suma = (n*(n+1))/2;
    printf("la suma es: %d", suma);
}