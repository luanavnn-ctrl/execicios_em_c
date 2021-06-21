#include <stdio.h> /*insere o conteudo da biblioteca stdio.h*/

main(){
    /*Declarar variaveis*/
    int idade, ano;
    float altura;
    char nome[30];

    /*Entrada de dados*/
    printf("Digite o seu nome: "); /*mensagem ao usuario*/
    scanf("%s", &nome); /*leitura do nome*/
    printf("Digite sua idade: "); /*mensagem ao usuario*/
    scanf("%d", &idade); /*leitura da idade*/
    printf("Digite sua altura: "); /*mensagem ao usuario*/
    scanf("%f", &altura); /*leitura da altura*/

    /*Processamento*/
    ano = 2020 - idade; /*calculo do ano de nascimento*/

    /*Saída de dados*/
    printf("\nO nome e: %s", nome);
    printf("\nA idade e: %d", idade);
    printf("\nA altura e: %f", altura);
    printf("\nO ano e: %d", ano);
    return 0;

}