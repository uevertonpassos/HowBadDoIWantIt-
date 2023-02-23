/*Faça um Programa que converta metros para centímetros. */

#include <stdio.h>

void main(){
    float num, metro;
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &num);
    metro = num*100;
    printf("O valor digitado equivale a:\n");
    printf("%.1f centimetros\n", metro);
}
