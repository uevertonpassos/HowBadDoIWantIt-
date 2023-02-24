#include <stdio.h>

void main(){
    int num1,num2, escolha;
    printf("\n");
    printf("=|=|=|=|=|=|=\n");
    printf("CALCULADORA\n");
    printf("=|=|=|=|=|=|=\n");
    printf("\n");
    printf("Digite um valor: ");
    scanf("%d",  &num1);
    printf("Digite outro valor: ");
    scanf("%d", &num2);
    printf("\n");
    printf("1 - adicao\n2 - subtracao\n3 - multiplicacao\n4 - divisao\n");
    printf("\n");
    printf("Escolha a operação: ");
    scanf("%d", &escolha);
    switch(escolha){
        
        case 1:
            escolha = num1 + num2;
            printf("A resposta sera: %d\n", escolha);
            break;
        case 2:
            escolha = num1 - num2;
            printf("A resposta sera %d\n", escolha);
            break;
        case 3:
            escolha = num1 * num2;
            printf("A resposta sera: %d\n", escolha);
            break;
        case 4:
            escolha = num1 / num2;
            printf("A resposta sera: %d\n", escolha);
        
        default:
            printf("Entrada inválida\n");
            break;
    }      
}