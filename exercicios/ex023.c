/*Faça um Programa que peça dois números e imprima o maior deles. */

#include <stdio.h>

void main(){
    int num1,num2;

    printf("Enter a value: ");
    scanf("%d", &num1);
    printf("Enter another one: ");
    scanf("%d", &num2);
    if(num1 > num2 ){
        printf("the biggest is: %d\n", num1);
    }
    else{
        printf("the biggest is: %d\n", num2);
    }


}

