#include <stdio.h>

int main()
{
    int i;
    int j;

    for (j = 1; i <= 9; j++)
    {
        printf("tabla del %d\n", j);
        for (i = 1; i <= 9; i++)
        {
            printf("%d * %d = %d\n", j, i, i * j);
        }
        printf("\n");
    }
}