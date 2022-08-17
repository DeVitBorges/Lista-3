#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 2\n");

    int inicio, fim, total=0;

    printf ("\npara o intervalo, informe o numero inicial: ");
    scanf ("%d", &inicio);
    printf ("\ninforme o fim do intervalo: ");
    scanf ("%d", &fim);

    for (int a = inicio; a<=fim; a++)
        total = total+a;
    printf ("\nTotal: %d\n", total);

    return 0;
}
