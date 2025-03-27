#include <stdio.h>

int main(void) {
    char letra;
    int quantidadeP = 0;
    int quantidadeM = 0;
    int quantidadeG = 0;

    printf("Digite os tamanhos (P, M, G) e F para sair:\n");

    letra = getchar();

    while (letra != 'F') {
        if (letra != '\n') {
            if (letra == 'P') {
                quantidadeP++;
            } else if (letra == 'M') {
                quantidadeM++;
            } else if (letra == 'G') {
                quantidadeG++;
            }
        }
        
        letra = getchar();
    }

    printf("P: %d M: %d G: %d\n", quantidadeP, quantidadeM, quantidadeG);
    
    return 0;
}