/* Faça um Programa que peça 2 números inteiros e um número real. 
Calcule e mostre:
a) o produto do dobro do primeiro com metade do segundo .
b) a soma do triplo do primeiro com o terceiro.
c) o terceiro elevado ao cubo.  */

#include <stdio.h>

void main(){
    int num1, num2;
    float num3, elcubo, dobro, soma;

    printf("Digite um valor: ");
    scanf("%d", &num1);
    printf("Digite outro valor: ");
    scanf("%d", &num2);
    printf("Digite o último valor: ");
    scanf("%f", &num3);
    dobro = num1 * 2 - (num2/2);
    soma = num1*3 + num3;
    elcubo = num3 * num3 * num3;
    printf("o produto do dobro do primeiro com metade do segundo vale: %.2f\n", dobro);
    printf("a soma do triplo do primeiro com o terceiro vale: %2.f\n", soma);
    printf("o terceiro elevado ao cubo vale: %.2f\n", elcubo);
}
