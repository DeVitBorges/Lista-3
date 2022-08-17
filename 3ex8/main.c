#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int TAM = 10;

    char nomes[TAM][50];
    int idades[TAM], aux=0;

    int idadeMenor;

    printf("Nome: ");
    scanf("%s", nomes[0]);

    printf("Idade: ");
    scanf("%d", &idades[0]);

    idadeMenor = idades[0];

    for(int i=1; i<TAM; i++) {
        printf("Nome: ");
        scanf("%s", nomes[i]);

        printf("Idade: ");
        scanf("%d", &idades[i]);

        if(idades[i] < idadeMenor) {
            idadeMenor = idades[i];
            aux = i;
        }
    }


    printf("%s possui a menor idade de %d\n", nomes[aux], idades[aux]);


    return 0;
}

