#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("ex 7\n");

    int idade, total=0, n, maiores;
    n=20;

    for (int i = 1; i<=n; i++){
    printf ("\ninforme a idade da pessoa %d: ", i);
    scanf ("%d", &idade);
    if (idade>=18)
        maiores++;
    }
    printf ("\nmnumero de maiores de idade: %d", maiores);
    return 0;
}
