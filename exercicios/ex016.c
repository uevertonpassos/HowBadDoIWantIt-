/*Faça um Programa que peça o raio de um círculo, 
calcule e mostre sua área. */

#include <stdio.h>

void main(){
    float raio, area;
    printf("Digite o valor do raio:");
    scanf("%f", &raio);
    area = 3.14*(raio*raio);
    printf("A area do circulo sera: %.2f metros\n", area);


}   