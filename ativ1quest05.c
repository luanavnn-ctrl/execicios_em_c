#include<stdio.h>
#include<math.h>

int main(){
    int raio;
    float area, perimetro;

    printf("Digite o valor do raio: ");
    scanf("%d", &raio);
    
    perimetro = 2 * 3.14 * raio;
    area = 2 * 3.14 * pow(raio,2);

    printf("A medida do perimetro do circulo eh de %.2f", perimetro);
    printf("\nA medida da area do circulo eh de %.2f", area);

    return 0;
}

