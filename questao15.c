/*Faça um programa que leia números inteiros até que seja informado o valor 0. 
Apresente a média dos valores, o maior e o menor valor e a quantidade de números pares e ímpares.*/

#include <stdio.h>

int main(){

    int num, cont = 0, soma = 0, qtde_par = 0, qtde_impar = 0;
    float media = 0, maior, menor;

    do{
        printf("Digite um numero: ");
        scanf("%d", &num);

        cont++;
        soma += num;
        media = soma / cont;
        
        if(num > maior && num){
            maior = num;
        }
        else{
            menor = num;
        }
        if(num % 2 == 0){
            qtde_par++;
        }
        else{
            qtde_impar++;
        } 

    } while(num != 0);    
    

    printf("\nMedia: %.2f\n", media);
    printf("Maior: %.2f\nMenor: %.2f\n", maior, menor);
    printf("Pares: %d\nImpares: %d", qtde_par, qtde_impar);

    return 0;
}