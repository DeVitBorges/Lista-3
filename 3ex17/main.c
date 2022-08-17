#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 17\n");

    float peso, conta=0, qBeb, pBeb;

    pBeb = 2;

    do {
    printf ("\npeso do prato: ");
    scanf ("%f", &peso);
    printf ("\nquantidade de bebida: ");
    scanf ("%f", &qBeb);
    conta = conta + ((qBeb*pBeb) + (peso*15));
    printf ("\n\nConta:%.2f\n", conta);
    if (peso<=0 && qBeb<=0){
        break;
    }
    }
    while (peso>0 && qBeb > 0);

    return 0;
}
