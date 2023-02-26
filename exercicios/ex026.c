/*Escreva um programa em C que solicite ao usuário um número de 1 a 7 e, em seguida, 
informe o dia da semana correspondente.*/

#include <stdio.h>

void main(){
    int num;

    printf("Digite um número:");
    scanf("%d", &num);

    switch(num){
        case 1:
            printf("Domingo\n");
            break;

        case 2:
            printf("Segunda\n");
            break;

        case 3:
            printf("Terça\n");
            break;

        case 4:
            printf("Quarta\n");
            break;

        case 5:
            printf("Quinta\n");
            break;
       
        case 6:
            printf("Sexta\n");
            break;

        case 7:
            printf("Sábado\n");
            break;

        default:
            printf("entrada inválida\n");
            break;
        
    }

}
//teste