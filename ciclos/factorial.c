#include <stdio.h>

int main(){
    int n;
    printf("De que numero quieres saber el factorial: ");
    scanf("%d", &n);
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    printf("El factorial de %d es %d\n",n,fact);
    return 0;
}