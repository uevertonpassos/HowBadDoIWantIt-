/*Faça um Programa que peça dois números e imprima a soma. */
#include <stdio.h>

void main(){
    int num1, num2, soma;
    printf("Digite um valor: ");
    scanf("%d", &num1);
    printf("Digite outro valor: ");
    scanf("%d", &num2);
    soma = num1 + num2;
    printf("A soma dos valores equivale a: %d\n", soma);

}