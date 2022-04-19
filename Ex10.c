#include <stdio.h>
#include <locale.h>

void adivinha() {
    /*Faça um programa para adivinhar um número escolhido pelo usuário, entre 1 e 1023. Indique ao 
    final quantas tentativas foram necessárias. O programa deverá localizar o número escolhido pelo 
    usuário em no máximo 10 tentativas*/
    

    setlocale(LC_ALL,"portuguese");
    int aleatorio, ultimo=1023,primeiro=1,tentativas=0;
    char simbolomate;

    do{
        aleatorio = primeiro + (ultimo-primeiro) /2;
        tentativas ++;
        printf("O número que você escolheu é maior,menor ou igual a %d? Digite '>', '<' ou '=' respectivamente\n Número de tentativas : %d\n",aleatorio,tentativas);
        scanf(" %c",&simbolomate);
        switch (simbolomate){
            case '=':
               printf("número correto");
               break;
            case '>':
               primeiro = aleatorio + 1;
               break;
            case '<':
               ultimo = aleatorio - 1;
               break;
        }
    } while(simbolomate != '=');
}

int main()
{
    int numero, tentar_de_novo=1;
    do{
        printf("Pense e digite um número de 1 a 1023\n");
        scanf("%d",&numero);
        adivinha();
        printf("\nSe você deseja jogar novamente digite um qualquer numero, se não digite 0\n");
        scanf("%d",&tentar_de_novo);
    }while(tentar_de_novo);
    return 0;
}
