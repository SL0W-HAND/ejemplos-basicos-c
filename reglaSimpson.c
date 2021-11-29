#include <stdio.h>
#include <math.h>

//Programa para realizar integracion numerica con la regal de Simpson
float f(float x)
{
    return cos(x) * sin(x) * sin(x);
}

float integrar(float limite_superior, float limite_inferior, int n_intervalos)
{
    //Calculando el valor del intervalo h o delta x
    float h = (limite_superior - limite_inferior) / n_intervalos;

    // Calculando en valor de los Y sub i dependiendo de X sub i y guardandolos en un array
    float valores_Y[n_intervalos + 1];

    for (int i = 0; i <= n_intervalos; i++)
    {
        valores_Y[i] = f(limite_inferior + (i * h));
    }

    //Calculando el valor de la integral
    float integral = 0;

    float suma = 0;
    for (int i = 0; i <= n_intervalos; i++)
    {
        //si se trata con el primer o ultimo eleneto del array
        if (i == 0 || i == n_intervalos)
        {
            suma += valores_Y[i];
        }
        // Si i es par
        else if (i % 2 == 0)
        {
            suma += 2 * valores_Y[i];
        }
        // Si i es impar
        else
        {
            suma += 4 * valores_Y[i];
        }
    }

    integral = (h / 3) * suma;

    return integral;
}

int main()
{
    float pi = 3.14159265358979323846;
    //integrando f(x) con el limite inferior 0 y el limite superior pi/4
    float resultado = integrar(pi / 4, 0, 1000);
    printf("El resultado de la integral es: %f", resultado);
}