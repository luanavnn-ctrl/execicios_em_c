# include <stdio.h>

int main(){
    int num;

    printf("Informe um numero, para saber o mes correspondente: ");
    scanf("%d", &num);

    switch (num){
        case  1: num ==  1; printf("O mes eh JANEIRO"); break;       
        case  2: num ==  2; printf("O mes eh FEVEREIRO"); break;
        case  3: num ==  3; printf("O mes eh MARCO"); break;
        case  4: num ==  4; printf("O mes eh ABRIL"); break;
        case  5: num ==  5; printf("O mes eh MAIO"); break;
        case  6: num ==  6; printf("O mes eh JUNHO"); break;
        case  7: num ==  7; printf("O mes eh JULHO"); break;
        case  8: num ==  8; printf("O mes eh AGOSTO"); break;
        case  9: num ==  9; printf("O mes eh SETEMBRO"); break;
        case 10: num == 10; printf("O mes eh OUTUBRO"); break;
        case 11: num == 11; printf("O mes eh NOVEMBRO"); break;
        case 12: num == 12; printf("O mes eh DEZEMBRO"); break;
        default: printf("Mes invalido");
    }
     return 0;
}