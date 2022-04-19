#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> //necessário p/ função time()

int main()
{
    /* srand(time(NULL)) inicializa o gerador de números aleatórios com o valor da função time(NULL). time (NULL) é o total de segundos passados
    desde 1 de janeiro de 1970 até a data atual. Cada execução faz com que o valor de referencia seja diferente.
    programa para gerar números aleatórios 
            ENTRADA                     SAIDA
               0       Espera-se um  numero de vitorias aleatorio.
    */
    setlocale(LC_ALL,"portuguese");
    int num, aleatorio, quant;
    quant = 0;

    printf("Escolha 0 para cara ou 1 para coroa:\n");
    scanf("%i",&num);
    //srand(0);
    srand(time(NULL));

    for (int n = 0; n < 10; n++ ){
        /* gerando valores aleatórios entre 1 e 100 */
        aleatorio = (rand() % 2);

        if (num ==  aleatorio){
            quant++;
        }
    }

    printf("Voce ganhou %i vezes.", quant);

    getch(); 
    return 0;
}
