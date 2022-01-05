#include <stdio.h>

int main(){
   
    int idade;
    char nome[30];

    printf("Informe seu nome: ");
    scanf("%s", &nome);    

    printf("Informe sua idade: ");
    scanf("%d", &idade); 

    if (idade <= 18){
        printf("Mensalidade: R$ 50,00\n");
    }
    else if (idade >= 19 && idade <= 29){
        printf("Mensalidade: R$ 70,00\n");        
    }
    else if (idade >= 30 && idade <= 45){
        printf("Mensalidade: R$ 90,00\n");
    }
    else if (idade >= 46 && idade <= 65){
        printf("Mensalidade: R$ 130,00\n");
    }
    else if (idade > 65){
        printf("Mensalidade: R$ 170,00\n");
    }
    

    return 0;
}