#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 23\n");

    int casas=0, pessoas=0, can3=0, can5=0, can8=0, can11=0, can13=0;
    int pess, canal;
    float total=0;

    printf ("\ninforme o numero de casas: ");
    scanf ("%d", &casas);

    for (int i=0; i<casas; i++){
        printf ("\nquantas pessoas moram na casa?: ");
        scanf ("%d", &pess);

        printf ("\nqual canal estavam assistindo?: ");
        scanf("%d", &canal);

        total = total + pess;

        if(canal == 3)
        can3 = can3+pess;

        if(canal == 5)
        can5 = can5+pess;

        if(canal == 8)
        can8 = can8+pess;

        if(canal == 11)
        can11 = can11+pess;

        if(canal == 13)
        can13 = can13+pess;

    }

    printf ("\nporcentagem de pessoas que assistem ao canal 3: %.2f%%", ((can3/total)*100));
    printf ("\nporcentagem de pessoas que assistem ao canal 5: %.2f%%", ((can5/total)*100));
    printf ("\nporcentagem de pessoas que assistem ao canal 8: %.2f%%", ((can8/total)*100));
    printf ("\nporcentagem de pessoas que assistem ao canal 11: %.2f%%", ((can11/total)*100));
    printf ("\nporcentagem de pessoas que assistem ao canal 13: %.2f%%", ((can13/total)*100));

    return 0;
}
