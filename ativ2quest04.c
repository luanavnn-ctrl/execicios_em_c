#include <stdio.h>

main(){
/*declaracao de variaveis*/
float salario, aumento, novo_salario;
int codigo;

/*informaçoes*/
printf("1 - SERVENTE\n2 - PEDREIRO\n3 - MESTRE DE OBRAS\n4 - TECNICO DE SEGURANCA\n");

/*entrada de dados*/
printf("Codigo da funcao: ");
scanf("%d", &codigo);
printf("Valor do salario atual: ");
scanf("%f", &salario);

/*processamento de dados*/
if (codigo == 1){
    printf("Cargo: SERVENTE\n");
    aumento = salario * 0.4;
    novo_salario = aumento + salario;
    printf("O aumento tera valor de R$ %.2f\n", aumento);
    printf("\nO salario tera um aumento de 40 por cento, totalizando: R$ %.2f", novo_salario);
}
else if (codigo == 2){
    printf("Cargo: PEDREIRO\n");
    aumento = salario * 0.35;
    novo_salario = aumento + salario;
    printf("O aumento tera valor de R$ %.2f\n", aumento);
    printf("O salario tera um aumento de 35 por cento, totalizando: R$ %.2f", novo_salario);
}
else if (codigo == 3){
    printf("Cargo: MESTRE DE OBRAS\n");
    aumento = salario * 0.2;
    novo_salario = aumento + salario;
    printf("O aumento tera valor de R$ %.2f\n", aumento);
    printf("O salario tera um aumento de 20 por cento, totalizando: R$ %.2f", novo_salario);
}
else if (codigo == 4){
    printf("Cargo: TECNICO DE SEGURANCA\n");
    aumento = salario * 0.1;
    novo_salario = aumento + salario;
    printf("O aumento tera valor de R$ %.2f\n", aumento);
    printf("O salario tera um aumento de 10 por cento, totalizando: R$ %.2f", novo_salario);
}
else{
    printf("Codigo informado nao correspondente. Tente novamente!");
    }

    return 0;
}