#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Faça um programa que leia um conjunto indeterminado de números inteiros positivos e imprima o maior, o menor e a média aritmética desse conjunto de dados.

    /*  Entrada                 Saida
        1,2,3,-1        Maior numero: 3 Menor numero: 1 \nA media: 2
        3,2,1,-1        Maior numero: 3 Menor numero: 1 \nA media: 2
        1,3,2,-1        Maior numero: 3 Menor numero: 1 \nA media: 2
    */
    int c, maior, menor, soma, i, media;

    printf("Digite numeros inteiros positivos:");
    scanf("%i", &c);       
    
    maior = -1;
    menor = 9999;
    i = 0;

    while(c != -1){

        while(c < 0){
            printf("\nNumero invalidao!");
            printf("\nDigite um numero positivo novamente");
            scanf("%i", &c);
        }
        if(maior < c){
            maior = c;
        }
        if(menor > c){
            menor =  c;
        }

        soma += c;
        i++;

        printf("Digite numeros inteiros positivos:");
        scanf("%i", &c);
    }

    media = soma/i;

    printf("Maior numero: %i \nMenor numero: %i \nA media: %i.", maior, menor, media);
    return 0;
}
