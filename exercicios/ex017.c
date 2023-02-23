/*Faça um Programa que calcule a área de um quadrado,
 em seguida mostre o dobro desta área para o usuário. */

 #include <stdio.h>
 
 void main(){
    float num, area;
    printf("Digite o valor do lado: ");
    scanf("%f", &num);
    area = num*num;
    printf("A area do quadrado sera: %.2f metros\n", area);



 }