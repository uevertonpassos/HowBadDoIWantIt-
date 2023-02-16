#include <stdio.h>

#define texto  "Entrada e saida de dados"

char nome[10] = "Ueverton";
int idade = 0;

int  main(){
    printf("%s\n",texto);
    printf("Bem vindo, %s\n", nome);
    printf("Digite a sua idade por favor:  ");
    scanf("%d", &idade);
    printf("%s, tem %d anos de idade, que bom!\n", nome, idade);
    return 0;


}