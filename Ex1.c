#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Faça um algoritmo que leia um conjunto de números (X) e imprima a quantidade de números pares (QPares) e a quantidade de números impares (QImpares) lidos. Admita que o valor 9999 é utilizado como sentinela (FLAG) para fim de leitura.
    
    /*  Entrada                 Saida
        2, 2, 2, 9999         3 par, 0 impares
        3,4,5, 9999           1 par, 2 impares
    */
    int c, QPares, QImpares;

    QPares = 0;
    QImpares = 0;

    printf("Digite um numero:");
    scanf("%i", &c);
    while( c!=9999){

        if(c%2 == 0){
            QPares += 1;
        } else {
               QImpares += 1;
        }
        printf("Digite um numero:");
        scanf("%i", &c);
    }

    printf("A soma dos numeros pares digitados e: %i\n", QPares);
    printf("A soma dos numeros impares digitados e: %i", QImpares);

    return 0;
}
