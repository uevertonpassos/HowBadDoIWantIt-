//Faça um programa que leia um número real e imprima a sua parte inteira.

#include <stdio.h>

void main(){
    float num = 0;

    printf("Digite um valor: ");
    scanf("%f", &num);
    printf("O numero inteiro sera: %.d", (int)num);

}
