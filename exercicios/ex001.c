#include <stdio.h>

void main(){
    float nota_Um, nota_Dois, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota_Um);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota_Dois);
    media = (nota_Um + nota_Dois)/ 2;
    printf("Media do aluno: %.2f\n", media);
    if (media>=6){
        printf("Ele foi aprovado!");
    }
    else{
        printf("Ele foi reprovado!");
    }
}
