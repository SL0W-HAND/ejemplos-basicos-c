#include <stdio.h>

/*
    El calor cedido por una masa de agua es igual al calor absorbido por la otra. 
    Aplicando la ecuación de equilibrio térmico, nos queda:
    QA=−QB⇒mA⋅c⋅(T−TA)=−mB⋅c⋅(T−TB)⇒mA=-mB⋅(T−TB)/(T−TA)
*/

int main(){
    double masaA;
    int TemperaturaA = 12;
    int masaB = 190;
    int TemperaturaB = 55;
    //int calorEspecificoAgua = 4180;  esta variable no es utilizada
    int temperaturaAmbiente = 23;

    masaA = -masaB*(temperaturaAmbiente-TemperaturaB)/(temperaturaAmbiente-TemperaturaA);

    printf("La masa de agua es: %.2lf g\n",masaA);
}