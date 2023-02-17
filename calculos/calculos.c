#include <stdio.h>

int main(){
    int n1, n2, soma; //posso alinha variaveis assim desde que sejam do mesmo tipo primitivo no caso inteiro

    printf("Digite um valor: ");
    scanf("%d", &n1);
    printf("Digite outro valor: ");
    scanf("%d", &n2);
    soma = n1 + n2;
    printf("A soma entre %d e %d vale: %d", n1, n2, soma);

}