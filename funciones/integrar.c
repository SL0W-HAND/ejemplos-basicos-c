#include <stdio.h>
#include <math.h>

float f(float x)
{
    return exp(x * x);
}

float integrar(float a, float b, int n)
{
    float Dx = (b + a) / n;
    float area = 0;
    float x;
    float h;
    int i;
    for (i = 0; i < n; i++)
    {
        x = (a + (a + Dx)) / 2;
        h = f(x);
        area = area + Dx * h;
        a = a + Dx;
    }
    return area;
}

int main()
{
    float res = integrar(0, 2, 1000);
    printf("la integral es: %f", res);
}