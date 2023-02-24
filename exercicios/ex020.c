/*Faça um Programa que peça a temperatura em graus Celsius, 
transforme e mostre em graus Fahrenheit. */

#include <stdio.h>

void main(){
    float celsius, fahrenheit;

    printf("Digite o valor em celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius *9/5) + 32;
    printf("O valor digitado equivalei a: %.2f graus Fahrenheit",fahrenheit);

}
