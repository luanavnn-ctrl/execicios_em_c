#include<stdio.h>
#include<math.h>

main(){
    int a, b, c;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    c = pow(a, b);

    printf("O resultado de a^b = %d", c);
    
    return 0;
}

