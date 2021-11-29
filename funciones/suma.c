#include <stdio.h>

int g = 9.81;

int sumar(int a, int b)
{
    int c = a + b;
}

int main()
{
    int suma = sumar(89, 45);
    int suma2 = sumar(100, 78);
    printf("la suma de 89 y 45 es %d", suma);
}