#include <stdio.h>

int main() {
    int idade = 0;
    char name[10] = "Ueverton";

    printf("Valor inicial da idade: %d\n", idade);

    printf("Usuario, digite a sua idade: ");
    scanf("%d", &idade);
    printf("essa pessoa tem %d anos e se chama %s", idade, name);

}

