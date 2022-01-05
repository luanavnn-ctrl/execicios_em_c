#include <stdio.h>

int main(){
   
    int idade;
    
    printf("Informe sua idade: ");
    scanf("%d", &idade); 

    if (idade < 16){
        printf("Nao eleitor");
    }
    else if (idade >= 18 && idade <= 65){
        printf("Eleitor Obrigatorio");
    }
    else {
        printf("Eleitor Facultativo");
    }    
    return 0;
}