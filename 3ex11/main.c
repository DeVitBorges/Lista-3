#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 10\n");

    int num=0, n, entre=0;
    n=20;


    for (int i=1; i<=n; i++){
    printf ("\ninsira o numero %d: ", i);
    scanf ("%d", &num);
    if ((num >= 0) && (num <= 100)){
        entre++;
    }
    }
    printf ("\nquantidade de numeros entre 0 e 100: %d\n", entre);
    return 0;
}
