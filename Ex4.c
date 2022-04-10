#include <stdio.h>
#include <stdlib.h>

int main()
{
    //  Escrever um algoritmo em C, para calcular e imprimir o fatorial de um número lido do teclado.

    /*  Entrada                 Saida
        2                       0.962
        3                       0.970
        4                       0.968
    */
    int quant, n;
    float soma;

    printf("Digite a quantidade de termos:");
    scanf("%i", &quant);
    soma = 0;
    n = 1;

    for (int i = 1; i <= quant; i++){      
        if (i % 2 == 0){
            soma = soma - (1.0/pow(n, 3));
            n +=2;
        }
        else{
            soma = soma + (1.0/pow(n, 3));
            n +=2;
        }
    }
    
    printf("%f", soma);
}
