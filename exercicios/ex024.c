/*Faça um Programa que peça um valor e mostre
 na tela se o valor é positivo ou negativo. */

 #include <stdio.h>

 void main(){
    int num;
    printf("Digite um valor: ");
    scanf("%d", &num);
    if(num < 0){
        printf("Ele é negativo!\n");
    }

    else{
        printf("Ele é positivo!\n");
    }
 }
 
