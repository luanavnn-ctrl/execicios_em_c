#include <stdio.h>

int main(){

    int bebida, prato, prato_op, bebida_op, caloria, total;

    printf("Informe o prato desejado: \n 1 - Italiano \n 2 - Japones \n 3 - Salvadoreno \n");
    scanf("%d", &prato_op);

    printf("Informe a bebida desejada: \n 1 - Cha \n 2 - Suco de Laranja \n 3 - Refrigerante \n");
    scanf("%d", &bebida_op);

    if (prato_op == 1){
        caloria = 750;
        printf("O valor calorico do prato eh %d cal\n", caloria);
        prato = caloria;
    }
    else if (prato_op == 2){
        caloria = 342;
        printf("O valor calorico do prato eh %d cal\n", caloria);
        prato = caloria;
    }
    else if (prato_op == 3){
        caloria = 545;
        printf("O valor calorico do prato eh %d cal\n", caloria);
        prato = caloria; 
    }
    else{
        printf("Informe uma opcao valida\n");
    }
    

    if (bebida_op == 1){
        caloria = 30;
        printf("O valor calorico da bebida eh %d cal\n", caloria);
        bebida = caloria;
    }
    else if (bebida_op == 2){
        caloria = 80;
        printf("O valor calorico da bebida eh %d cal\n", caloria);
        bebida = caloria;
    }
    else if (bebida_op == 3){
        caloria = 90;
        printf("O valor calorico da bebida eh %d cal\n", caloria);
        bebida = caloria; 
    }
    else{
        printf("Informe uma opcao valida\n");
    }

    total = prato + bebida;
    printf("O total de caloria da refeicao eh %d cal", total);

    return 0;
}