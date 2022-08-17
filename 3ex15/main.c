#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 15\n");

    int valor, fatorial;

    printf ("\ninforme um valor inteiro: ");
    scanf ("%d", &valor);

    for(fatorial = 1; valor > 1; valor = valor - 1){
      fatorial = fatorial * valor;
  }

  printf("\nfatorial: %d\n", fatorial);
  return 0;
}


