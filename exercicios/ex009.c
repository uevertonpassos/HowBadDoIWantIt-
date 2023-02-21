/*Faça um programa que leia a idade de uma pessoa e verifique se ela é maior ou igual
 * a 18 anos (idade mínima para votar no Brasil).
*/
#include <stdio.h>

void main(){
    int idade;
    printf("digite a idade: ");
    scanf("%d", &idade);
    if(idade >= 18){
        printf("Parabens, voce pode votar!");
    }
    else{
        printf("menor de idade, tente na proxima eleicao");

    }
}