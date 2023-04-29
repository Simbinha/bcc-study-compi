#include <stdio.h>
#include <stdlib.h>

void calcularJuros(double * parcela, int dias, float juros){

    *parcela += (*parcela) * (juros/100) * dias;
 }

 int main(){
    double P;
    int D; 
    float J;
    printf("Informe os valores: ");
    scanf("%lf %d %f", &P, &D, &J);
    calcularJuros(&P, D, J);

    printf("O Valor da Parcela é: R$ %.2lf", P);
 }