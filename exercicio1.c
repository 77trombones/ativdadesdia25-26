#include <stdio.h>

int main() {
    int numero, soma = 0;

    printf("Digite um número: ");
    scanf("%d", &numero);

// n = nÃºmero
    for (int n = 1; n <= numero; n++) {
        if (n % 2 != 0) {  
            soma += n;
        }
    }

    printf("A soma dos números ímpares de 1 até %d é: %d\n", numero, soma);

    return 0;
}