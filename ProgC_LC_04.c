#include <stdio.h>
#include <math.h>

// exercicio 4 //
//Leidiana Carvalho//

int main() {
  
    float x, y, F;
	
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de y: ");
    scanf("%f", &y);

    F = 2 * sin(x) + cos(y) - tan(x + y);

    printf("O valor de F(%.2f, %.2f) é: %.2f\n", x, y, F);

    return 0;
}
