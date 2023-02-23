/*Faça um Programa que peça as 4 notas bimestrais e mostre a média. */
#include <stdio.h>

void main(){
    float nota1, nota2, nota3, nota4,average;
    printf("Primeira nota: ");
    scanf("%f", &nota1);
    printf("Segunda nota: ");
    scanf("%f", &nota2);
    printf("Terceira nota: ");
    scanf("%f", &nota3);
    printf("Quarta nota: ");
    scanf("%f", &nota4);
    average = (nota1+nota2+nota3+nota4)/4;
    printf("A MEDIA FINAL DO ALUNO FOI: %f\n", average);
    if(average>= 6){
        printf("Aprovado, parabéns!");
    }
    else{
        printf("Rerpovado");

    }
}
