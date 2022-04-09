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
    int quant, impar;
    float result;

    printf("Digite a quantidade de termos:");
    scanf("%i", &quant);
    impar = 1;
    result = 1;

    for (size_t i = 1; i <= (quant/2); i++){
        impar +=2;
        result = result - (1/pow(impar, 3));
        impar +=2;
        result = result + (1/pow(impar, 3));
    }
    
    printf("%f", result);
}
