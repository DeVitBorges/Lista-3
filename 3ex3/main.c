#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 3\n");

    char nome[50];

    printf("\ninforme seu nome: ");
    scanf("%s", &nome);

    for (int i=0; i<=10; i++){
    printf ("\n%s\n", nome);
    }
    return 0;
}
