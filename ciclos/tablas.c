#include <stdio.h>

int main() {
    int n;
    printf("Ingrese un numero entre el 1 y el 9: ");
    scanf("%d", &n);
    if (n<0 || n>9) {
        printf("El numero ingresado no esta en el rango.\n");
    }else {
        for (int i = 1; i < 10; i++)
        {
            printf("%d x %d = %d\n", i, n, n*i);
        }
    }
}