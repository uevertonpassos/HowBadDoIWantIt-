/*Faça um Programa que peça a temperatura em graus Fahrenheit, t
ransforme e mostre a temperatura em graus Celsius. */

#include <stdio.h>

void main(){
    float celsius, fahrenheit;
    printf("Digite o valor em Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = 5 * ((fahrenheit-32) / 9);
    printf("A temperatura em Celsius sera: %.2f graus celsius\n", celsius);

}