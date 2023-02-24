/* Tendo como dados de entrada a altura de uma pessoa, 
construa um algoritmo que calcule seu peso ideal, 
usando a seguinte fórmula: (72.7*altura) - 58 */ 

#include <stdio.h>

void main(){
    float altura, pesoideal;

    printf("Digite a sua altura");
    scanf("%f", &altura);
    pesoideal = (72.7*altura) - 58;
    printf("Seu peso ideal será %.2f\n", pesoideal);

}   