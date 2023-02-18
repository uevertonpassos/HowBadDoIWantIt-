#include <stdio.h>


int main(){
    int nota = 0;
    printf("Digite a nota: ");
    scanf("%d", &nota);

    if (nota >= 6){
        printf("Aprovado!");
    }
    else{
        printf("reporvado!");
    }

}