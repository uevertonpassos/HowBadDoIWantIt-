//Faça um programa que leia um número inteiro e imprima o seu sucessor.

#include <stdio.h>

int main(){
    int num = 0;

    printf("Digite um valor: ");
    scanf("%d", &num);
    printf("Seu sucessor de %d vai ser %d",num, num + 1);

}