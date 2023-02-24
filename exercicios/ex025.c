/*Escreva um programa em C que verifique se uma
 letra digitada é uma vogal ou não.*/

 #include <stdio.h>

 void main(){
    char letra;
    printf("Digite uma letra:");
    scanf("%c", &letra);

    switch (letra)
    {
    case 'a':{
            printf("vogal\n");
            break;
        }
    case 'e':{
            printf("vogal\n");
            break;
        }
    case 'i':{
            printf("vogal\n");
            break;
        }
    case 'o':{
            printf("vogal\n");
            break;
        }
    case 'u':{
            printf("vogal\n");
            break;
        }
    
    default:{ 
        printf("consoante\n");
        break;
    }
 }
 }
