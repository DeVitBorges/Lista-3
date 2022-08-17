#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 10\n");

    int num=0, n, pares=0;
    n=20;


    for (int i=1; i<=n; i++){
    printf ("\ninsira o numero %d: ", i);
    scanf ("%d", &num);
    if (num%2 == 0){
        pares++;
    }
    }
    printf ("\nquantidade de numeros pares: %d\n", pares);
    return 0;
}
