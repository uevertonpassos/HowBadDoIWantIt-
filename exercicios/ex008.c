/*Fa�a um programa que leia dois n�meros
 inteiros e verifique se o primeiro � maior, menor ou igual ao segundo.
*/
#include <stdio.h>

int main(){
	int num, num2;
	
	printf("Enter a value: ");
	scanf("%d", &num);
	printf("Enter another one: ");
	scanf("%d", &num2);
	
	if(num > num2){
		printf("O num %d, e maior que %d\n", num, num2);
	}

	if(num < num2){
		printf("O num %d, e menor que %d\n", num, num2);
	}
	
	if(num == num2)
	{
		printf("os valores sao iguais\n");
	}
	
}
