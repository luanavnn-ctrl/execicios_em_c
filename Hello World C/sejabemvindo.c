#include <stdio.h>

int main(){
    char nome[30];  
    printf("Informe o nome do usuário: ");
    scanf("%s", &nome); 
    printf("Seja bem-vindo a disciplina de Linguagem de Programação I, %s!", nome);
    return 0;
}