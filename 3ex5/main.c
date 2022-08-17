#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 5\n");

    int num, total=0;

    for(int i=1; i<=10; i++){
        printf ("\ninforme o %d numero: ", i);
        scanf ("%d", &num);
        total = total+num;
    }
     printf ("\ntotal: %d\n", total);

    return 0;
}
