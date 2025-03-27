#include <stdio.h>

int main(void) {
    char opcao;

    printf("Escolha uma opção para o ciclo da máquina de lavar (F para encerrar):\n");
    printf("S. Secar\n");
    printf("E. Enxaguar e Secar\n");
    printf("L. Lavar, Enxaguar e Secar\n");
    printf("Digite a opção desejada: ");
    scanf("%c", &opcao);  

    int cicloSecar = 0;
    int cicloEnxaguarSecar = 0;
    int cicloLavarEnxaguarSecar = 0;

    while (opcao != 'F') {
        switch (opcao) {
            case 'S': 
                cicloSecar++;
                break;
            case 'E': 
                cicloEnxaguarSecar++;
                break;
            case 'L': 
                cicloLavarEnxaguarSecar++;
                break;
        }

        // Pergunta novamente ao usuário
        printf("\nEscolha uma opção para o ciclo da máquina de lavar (F para encerrar):\n");
        printf("S. Secar\n");
        printf("E. Enxaguar e Secar\n");
        printf("L. Lavar, Enxaguar e Secar\n");
        printf("Digite a opção desejada: ");
        getchar();  
        scanf("%c", &opcao);
    }

    printf("\nResumo dos ciclos escolhidos:\n");
    printf("Secar: %d\n", cicloSecar);
    printf("Enxaguar e Secar: %d\n", cicloEnxaguarSecar);
    printf("Lavar, Enxaguar e Secar: %d\n", cicloLavarEnxaguarSecar);

    return 0;
}
