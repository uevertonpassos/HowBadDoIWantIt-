#include <stdio.h>
#include <stdlib.h>

int main(){

	int num;

	printf("Digite um valor: ");
	scanf("%d", &num);
	if(num < 0){
		printf("valor negativo\n");
		
	}
	else
	{
		printf("valor positivo\n");
	}	
	system("pause");
	return 0;
}
