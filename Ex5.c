#include <stdio.h>
#include <stdlib.h>

int main()
{
    // A série de fibonacci é formada pela seqüência: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Escreva um algoritmo que peça um número N maior que 2. Gere e imprima a série até este n-ésimo termo.

    /*  Entrada                 Saida
           3                    1 1 2
           5                  1 1 2 3 5
    */
    char *c;
    int a = 1, b = 1, n;

    printf("Digite a quantidad de termos: ");
    scanf("%d", &n);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", a);
            a += b;
        }
        else
        {
            printf("%d ", b);
            b += a;
        }
    }

    fflush(stdin);
    return 0;
}
