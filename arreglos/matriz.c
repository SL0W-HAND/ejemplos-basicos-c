#include <stdio.h>

int main()
{
    float matriz[2][2];

    matriz[0][0] = 1;
    matriz[0][1] = 5;
    matriz[1][0] = 3;
    matriz[1][1] = 8;

    int i;
    int j;

    for (j = 0; j < 2; i++)
    {
        for (i = 0; i < 2; i++)
        {
            printf("%f ", matriz[j][i]);
        }
        printf("\n");
    }
}