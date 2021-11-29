#include <stdio.h>

int main()
{
    float matriz[2][2];
    float matriz2[2][2];
    float suma[2][2];

    printf("Ingrese los valores de la matriz 1: \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("ingrese el valor de la posicion [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("\n");
    printf("Ingrese los valores de la matriz 2: \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("ingrese el valor de la posicion [%d][%d]: ", i, j);
            scanf("%f", &matriz2[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            suma[i][j] = matriz[i][j] + matriz2[i][j];
        }
    }
    printf("La suma de las matrices es: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%f ", matriz[i][j]);
        }

        if (i == 0)
        {
            printf("  +  ");
        }
        else
        {
            printf("     ");
        }

        for (int j = 0; j < 2; j++)
        {
            printf("%f ", matriz2[i][j]);
        }

        if (i == 0)
        {
            printf("  =  ");
        }
        else
        {
            printf("     ");
        }

        for (int j = 0; j < 2; j++)
        {
            printf("%f ", suma[i][j]);
        }

        printf("\n");
    }
}