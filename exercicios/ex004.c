//Faça um programa que converta uma temperatura em graus Celsius para Fahrenheit.
#include <stdio.h>

void main(){
    float num, fah;

    printf("Digite o valor em Celsius: ");
    scanf("%f", &num);
    fah = (num * 9/5) + 32;

    printf("O numero transformado em Fahrenheit se torna: %.1f graus", fah);

}
