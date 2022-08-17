#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 12 \n");

    int num=0, n, entre0100=0, entre101200=0, entre200mais=0;

    n=20;

    for (int i=1; i<=n; i++){
    printf ("\ninforme o numero %d: ", i);
    scanf ("%d", &num);
    if ((num > 0)&&(num < 101)){
        entre0100++;
    }
    else if ((num > 100) && (num < 200)){
        entre101200++;
    }
    else if (num > 201){
        entre200mais++;
    }
    }
    printf ("\nnumeros entre 0 e 100: %d", entre0100);
    printf ("\nnumeros entre 101 e 200: %d", entre101200);
    printf ("\nmaiores que 200: %d", entre200mais);

    return 0;
}
