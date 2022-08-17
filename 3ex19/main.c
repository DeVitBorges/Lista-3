#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 19\n");

    int i=0, k, l;
    float altura[15], menor=0, maior=0;

    for (i=0; i<15; i++){
        printf("\ninforme a altura do aluno %d: ", i+1);
        scanf ("%f", &altura[i]);
    }

    menor = altura[0];
    maior = altura[0];


   for(int n=0; n<15; n++){


         if (altura[n] < menor){
                menor = altura[n];
                k = n;
                }

            if (altura[n] > maior){
            maior = altura[n];
            l = n;
            }


         }

    printf ("\no aluno %d eh o maior com: %f", k+1, maior);
    printf ("\no aluno %d eh o menor com: %f", l+1, menor);


    return 0;
}
