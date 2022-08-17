#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 13\n");

    int num, total=0;

    do{
        printf ("\ninsira um valor inteiro: ");
        scanf ("%d", &num);
        if (num > 0)
            total = total+num;
        printf ("\ntotal: %d", total);
        } while (num >0);

    return 0;
}
