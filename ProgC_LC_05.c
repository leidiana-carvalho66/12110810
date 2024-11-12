#include <stdio.h>
// exercicio 5 //
//Leidiana Carvalho//

int main() {
    float precoBase, precoFinal;
    int taxaIVA = 23; 

    printf("Digite o preço base do produto: ");
    scanf("%f", &precoBase);

    precoFinal = precoBase + (precoBase * taxaIVA / 100.0f);
    printf("O preço final do produto é: %.2f\n", precoFinal);

    return 0;
}
