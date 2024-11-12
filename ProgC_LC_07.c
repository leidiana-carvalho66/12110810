#include <stdio.h>

// exercicio 7 //
//Leidiana Carvalho//

int main() {
	
    float celsius, fahrenheit;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9.0f / 5.0f) * celsius + 32;

    printf("Temperatura em graus Celsius: %.2f\n", celsius);
    printf("Temperatura em graus Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
