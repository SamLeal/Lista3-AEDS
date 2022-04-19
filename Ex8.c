#include <stdio.h>
#include <stdlib.h>

int main(){
    /*- O numero 3025 possui a seguinte característica: 
    30 + 25 = 55 
    55^2 = 3025 
    Quantos e quais são os números de 4 dígitos possuem essa característica 
                        SAIDA
                        2025
                        3025
                        9801    
    */
    int aux;
    float num;

    for(int n = 1000;n < 10000; n++){
        aux = n/100;
        num = pow((n -(aux*100))+aux, 2);

        if(num == n){
            printf("%i\n", n);
        }
    }
}
