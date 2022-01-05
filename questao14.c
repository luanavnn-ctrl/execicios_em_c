/*Em uma avaliação de um produto o cliente responde sua opinião (1 – satisfatório; 2 – indiferente; 3 – insatisfatório). 
Faça um programa que leia a idade e opinião e apresente: o número de clientes que respondeu satisfatório, a média de idade dos clientes 
que opinaram como satisfatório e o número de quem respondeu insatisfatório. 
O programa se encerra quando for digitado o valor 0 para idade.*/

#include<stdio.h>

int main(){

    int idade, opniao, cont = 0;
    int qtde_1 = 0, qtde_2 = 0, qtde_3 = 0;
    float media_1 = 0, soma_idade_1 =0;

    while(idade != 0){
        printf("Idade: ");
        scanf("%d", &idade);

        if(idade != 0){
            cont++;
            soma_idade_1 = soma_idade_1 + idade;

            printf("Opniao:\n1 - Satisfatorio\n2 - Indiferentes\n3 - Insatisfatorio\n");
            scanf("%d", &opniao);
            switch(opniao){
                case 1: qtde_1++; break;
                case 2: qtde_2++; break;
                case 3: qtde_3++; break;
                default: printf("Opniao invalida\n"); break;
            }
            media_1 = soma_idade_1 / cont;                   
        }       
    }  

    printf("\nSatisfatorio: %d\nIndiferente: null\nInsatisfatorio: %d\n", qtde_1, qtde_3);
    printf("\nMedia da idade dos que opnaram Satisfatorio: %.2f\n", media_1);

    return 0;
}