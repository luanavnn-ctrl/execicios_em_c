# include <stdio.h>

int main(){
    int num, mes;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if (num%3 == 0){
        printf("O numero eh divisivel por 3");
    }else if (num%7 == 0){
        printf("O numero eh divisivel por 7");
    }else{
        printf("O numero nao eh divisivel nem por 3 nem por 7");
    }
    return 0;
}