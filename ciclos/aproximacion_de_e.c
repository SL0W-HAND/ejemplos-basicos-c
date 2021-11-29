#include <stdio.h>

int main(){
    float potencia;
    printf("Ingrese la potencia de e: ");
    scanf("%f", &potencia);
    int n = 10000;
    float resultado = 1;
    float resultado_temporal = 1;
    int i;
    for ( i = 1; i <= n; i++)
    {
        resultado_temporal = (resultado_temporal * potencia) / i;
        resultado += resultado_temporal;
    }
    printf("El resultado de e^%f: %f", potencia , resultado);
}