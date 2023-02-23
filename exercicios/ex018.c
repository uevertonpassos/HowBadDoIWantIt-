/*Faça um Programa que pergunte quanto você ganha por hora 
e o número de horas trabalhadas no mês. 
Calcule e mostre o total do seu salário no referido mês. */
#include <stdio.h>

void main(){
    int horas;
    float salario, calculo;

    printf("Digite o quanto você ganha por hora: ");
    scanf("%f", &salario);
    printf("Digite quanta horas você trabalhou: ");
    scanf("%d", &horas);
    calculo = horas * salario;
    printf("Voce vai receber a quantia de R$ %.2f reais\n", calculo);


}