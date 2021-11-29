#include <stdio.h>

int main()
{
    int n_elementos = 5;
    int i;
    float lista[n_elementos];

    for (i = 0; i < n_elementos; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%f", &lista[i]);
    }

    printf("[");
    for (i = 0; i < n_elementos; i++)
    {
        printf("%f", lista[i]);
    }
    printf("]\n");

    float maximo = lista[0];

    for (i = 0; i < n_elementos; i++)
    {
        if (lista[i] > maximo)
        {
            maximo = lista[i];
        }
    }

    printf("El maximo es: %f\n", maximo);

    float minimo = lista[0];
    for (i = 0; i < n_elementos; i++)
    {
        if (lista[i] < minimo)
        {
            minimo = lista[i];
        }
    }

    printf("El minimo es: %f\n", minimo);
}