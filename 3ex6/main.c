#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 6\n");

    int idade, total=0, n;
    n=20;

    for (int i = 1; i<=n; i++){
    printf ("\ninforme a idade da pessoa %d: ", i);
    scanf ("%d", &idade);
    total = total + idade;
    }
    printf ("\nmedia de idades: %.2f\n", (float)total/n);
    return 0;
}
