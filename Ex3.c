#include <stdio.h>
#include <stdlib.h>

int main()
{
    //  Escrever um algoritmo em C, para calcular e imprimir o fatorial de um número lido do teclado.

    /*  Entrada                 Saida
        2               O fatorial e: 2
        5               O fatorial e: 120
        10              O fatorial e: 3628800
    */
    int num, fatorial;
    printf("Digite o numero a ser calculado:");
    scanf("%i", &num);
    fatorial = num;
    for(num; num>1 ; num--){
        fatorial = fatorial*(num-1);
    }

    printf("O fatorial e: %i", fatorial);
    return 0;
}
