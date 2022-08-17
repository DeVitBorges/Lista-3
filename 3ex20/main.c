#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("ex 20\n");

    int numb, d=0, c=0;
    char anim;


    printf ("\nhow many animals are in the store?: ");
    scanf ("%d", &numb);
    printf ("\npress c to cats and d to dogs\n");

    for(int i=0; i<numb; i++){
        printf("\nanimal: ");
        fflush(stdin);
        scanf("%c", &anim);

        if(anim == 'c')
        c++;

        if(anim == 'd')
        d++;

    }

    printf ("\ncats: %d", c);
    printf ("\ndogs: %d", d);

    return 0;
}
