#include <stdio.h>

int main(){

    int sexo;
    float altura, peso_ideal;    

    printf("Informe sua altura: ");
    scanf("%f", &altura);
    printf("Informe o sexo: \n 1 - Feminino \n 2 - Masculino \n");
    scanf("%d", &sexo);

    if (sexo == 1){
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal eh %.2f", peso_ideal);
    }
    else if (sexo == 2){
        peso_ideal = (72.7 * altura) - 58;
        printf("Seu peso ideal eh %.2f", peso_ideal);
    }
    else{
        printf("Digite uma opcao valida");
    }
    return 0;
}