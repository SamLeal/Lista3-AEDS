#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> //necessário p/ função time()
int main()
{
    /* srand(time(NULL)) inicializa o gerador de números aleatórios com o valor da função time(NULL). time (NULL) é o total de segundos passados
    desde 1 de janeiro de 1970 até a data atual. Cada execução faz com que o valor de referencia seja diferente.
    programa para gerar números aleatórios */
    setlocale(LC_ALL,"portugues");
    int n;
    printf("Gerando 10 valores aleatórios:\n");
    //srand(0);
    srand(time(NULL));
    for (n = 0; n < 10; n++ ){
        /* gerando valores aleatórios entre 1 e 100 */
        printf("%d ", rand() % 100 +1);
        
    }
    getch();    
    return 0;
}

