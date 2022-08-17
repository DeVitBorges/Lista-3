#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 18\n");

    int quant;

    float nota1, nota2, media;

    printf ("\ninforme o numero de alunos: ");
    scanf ("%d", &quant);

    for (int i=1; i<=quant; i++){
        printf ("\ninforme a nota 1 do aluno %d: ", i);
        scanf ("%f", &nota1);
        printf ("\ninforme a nota 2 do aluno %d: ", i);
        scanf ("%f", &nota2);
        media = (nota1+nota2)/2;
        printf ("\nmedia do aluno %d: %.2f", i, media);
        if (media>=6){
            printf ("\naprovado\n");
        }
        else
            printf ("\nreprovado\n");

    }


    return 0;
}
