#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 16\n");

    int quantidade, valor=0, total=0;

    do{
    printf ("\ninforme o valor do produto, para encerrar as compras digite 0: ");
    scanf ("%d", &valor);
    total = total + valor;
    printf("\ntotal: %d", total);

    }
    while (valor > 0);
    return 0;
}
