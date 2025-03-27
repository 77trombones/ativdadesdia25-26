#include <stdio.h>

int main(void) {
  char pedido;

  printf("Digite o pedido do cliente, F para encerrar:");
  scanf(" %c", &pedido);

  int quantidadebatata = 0;
  int quantidadehamburguer = 0;
  int quantidadesuco = 0;
  int quantidadecombo = 0;
  int total = 0;
  int valor = 0;
//   int valor

  while( pedido != 'F' ) {
    switch (pedido) {
      case 'B':
    	quantidadebatata++;
    	break;
      case 'H': 
    	quantidadehamburguer++;
    	break;
      case 'S':
    	quantidadesuco++;
    	break;
	  case 'C':
	    quantidadecombo++;
	    break;
      default:
    	printf("Pedido errado!");
    	break;
    }
    printf("Digite o pedido do cliente, F para encerrar:");
    scanf(" %c", &pedido);
  }
  
  printf("Batata:  %d vendidos\nHamburguer:  %d vendidos\nSucos:  %d vendidos\nCombos:  %d vendidos\n", quantidadebatata, quantidadehamburguer, quantidadesuco, quantidadecombo);
 
  total = quantidadebatata + quantidadehamburguer + quantidadesuco + quantidadecombo;
  printf("Total: %d\n", total);
  
  valor = quantidadebatata * 10 + quantidadehamburguer * 15 + quantidadesuco * 9 * quantidadecombo * 30;
  printf("Valor total: %d\n", valor);
  return 0;
}