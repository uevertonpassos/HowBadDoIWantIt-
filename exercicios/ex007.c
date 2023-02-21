#include <stdio.h>

void main(){
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	
	if(num % 2 == 0){
		printf("the value is EVEN!\n");
	}
	else
	{
		printf("the value is ODD!\n");
	}
	
}
