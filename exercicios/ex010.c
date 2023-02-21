//Faça um programa que leia um caractere e verifique se ele é uma vogal ou uma consoante.

#include <stdio.h>

void main(){

    char letra;
    printf("Digite algo: ");
    scanf("%c", &letra);
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf("Vogal");
    }
    else{
        printf("Consoante");
    }
}