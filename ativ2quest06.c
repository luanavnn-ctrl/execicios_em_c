# include <stdio.h>

int main(){
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if (num%5 == 0){
        printf("O numero eh divisivel por 5");
    }else{
        printf("O numero nao eh divisivel por 5");
    }
    return 0;
}