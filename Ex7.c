#include <stdio.h>
#include <stdlib.h>

main(){
    //Números palíndromos são aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor. Exemplo:929, 44, 97379. Fazer um algoritmo que imprima todos os números palíndromos de 10000 a 99999.
    int a1, a2, a3, a4, a5;
   
    for( int n=10000 ; n<=99999 ; n++ ){
        a1 = n/ 10000;
        a1 = a1%10;
        a2 = n/ 1000;
        a2 = a2%10;
        a3 = n/ 1000;
        a3 = a3%10;
        a4 = n /100;
        a4 = a4%10;
        a5 = n% 10;
        if((a1 + (a2*10) + (a3*100) + (a4*1000) + (a5*10000) == n )){
            printf(" %d \n", n);
        }
    }
   getch();
}