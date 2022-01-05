/*Faça um programa que apresenta a soma de todos os números inteiros ímpares entre 200 e 500.*/


#include <stdio.h>

int main(){

    int soma = 0, i;

    for(i=200; i<=500; i++){
        if(i % 2 == 1){
            soma += i;
        }        
    }
    printf("Soma: %d", soma);

    return 0;
}