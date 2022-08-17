#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("ex 14\n");

    char resp[3];

    do{
        printf ("\nOla, tudo bem?\n");
        scanf ("%s", &resp);
        if (strcmp (resp, "sim")== 0){
           return 0;
        }
        else if (strcmp (resp, "nao")== 0);
        else
            printf ("\nnao entendi\n");

    } while(strcmp (resp, "sim")!= 0);

    return 0;
}
