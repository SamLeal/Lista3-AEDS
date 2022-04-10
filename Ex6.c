#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Fazer um algoritmo para calcular o valor de s, dado por, sendo o valor de N deverá se lido do teclado

    /*  Entrada                 Saida
           2                     -1.5
           3                      2.33
           4                     -2.92
    */
    int n;
    float soma = 0;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);
    printf("\n");
    for (int i = 1; i <= n; i++){ 
        if (i % 2 == 0){
            soma =  soma - (i / (n-i+1.0));
        }
        else{
            soma =  soma+(i / (n-i+1.0));
        }
    }

    printf("Valor de s e: %.2f:", soma);
    return 0;
}
