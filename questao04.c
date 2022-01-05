/*Construa um programa que apresente todos os números divisíveis por 3 e por 7 (simultaneamente) que sejam menores que 30.*/

#include <stdio.h>

int main(){

    int i;

    for(i=1; i<=30; i++){
        if(i % 3 == 0 && i % 7 == 0){
            printf("O numero %d eh divisivel por 3 e por 7, simultaneamente", i);
        }
    }
    return 0;
}