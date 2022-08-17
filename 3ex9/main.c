#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 09\n");

    int num=0, n, maiores=0;
    n=20;


    for (int i=1; i<=n; i++){
    printf ("\ninsira o numero %d: ", i);
    scanf ("%d", &num);
    if (num>8){
        maiores++;
    }
    }
    printf ("\nquantidade de numeros maiores que 8: %d\n", maiores);
    return 0;
}
