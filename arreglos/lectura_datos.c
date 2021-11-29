#include <stdio.h>

int main(){
    int n_datos;

    printf("Ingrese el numero de elementos del arreglo: ");
    scanf("%d", &n_datos);

    int datos[n_datos];

    for (int i = 0; i < n_datos; i++)
    {
       printf("posicion %d =>",i);
       scanf("%d", &datos[i]);
       
    }
    
    printf("\n");
    printf("Este es tu arreglo\n");
    printf("[");
    //imprimir los datos
    for (int i = 0; i < n_datos; i++)
    {
        printf("%d,", datos[i]);
    }
    printf("]");
    
    
}