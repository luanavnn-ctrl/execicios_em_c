/*Escreva um programa que receba a idade e altura de várias pessoas, calcule e apresenta a média de altura e idade das pessoas. 
A entrada de dados é encerrada quando for digitado o valor 0 para a idade.*/

#include <stdio.h>

int main(){

    int idade, soma_idade = 0, cont = 0;
    float altura, soma_altura = 0, media_altura = 0, media_idade = 0;

    while(idade != 0){
        printf("Idade: ");
        scanf("%d", &idade);

        if(idade != 0){
            cont++;
            soma_idade = soma_idade + idade;

            printf("Altura: ");
            scanf("%f", &altura);
            soma_altura = soma_altura + altura;            
        }

        media_altura = soma_altura / cont;
        media_idade = soma_idade / cont;        
    }

    printf("Medida de altura: %.2f\n", media_altura);
    printf("Media das idade: %.2f\n", media_idade);   

    return 0;
}