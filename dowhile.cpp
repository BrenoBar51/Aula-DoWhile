#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
  /*
  int x = 15;

  //if-else, if-if-if, if-elseif-else
  if (x < 12)       printf("\nX e menor que 12!");
  else if (x < 15)  printf("\nX e menor que 15!");
  else if (x < 19)  printf("\nX e menor que 19!");
  else              printf("\nX e maior.");
  */
  // switch-case-case-case-default-break

  /*
  int menu = 0;
  printf("\nEscolha uma das opcoes do menu:");
  printf("\n\t[1] Pagamento");
  printf("\n\t[2] Abrir Chamado");
  printf("\n\t[3] Falar com Atendente");
  scanf("%d", &menu);

  switch(menu){
    case 1:
      printf("\nFazer pagamento!");
      break;
    case 2:
      printf("\nAbrir um chamado!");
      break;
    case 3:
      printf("\nFalar com atendente!");
      break;
    default:
      printf("\nOpcao invalida!");
      break;
  }
  */

  // while(){}

  int y = 3, sorteio = 0;

  srand(time(NULL));

  while (y != sorteio){
    printf("\nNumero sorteado = %d", sorteio);
    sorteio = rand() % 10;
  }

  float saldo = 100.00, aposta = 12.00, premio = 2.6;

  do{
    sorteio = rand() % 10;
    printf("\nNumero sorteado = %d", sorteio);

    if (y == sorteio){
      printf("\nVoce acertou! ");
      saldo = saldo + aposta * premio;
    }
    else if(saldo < 12){
      printf("\nSeu saldo acabou, é necessario recarregar!");
      break;
    }else{
      printf("\nVoce errou! ");
      saldo = saldo - aposta;
    }
    printf("Saldo atual: %.2f", saldo);
  }while (y != sorteio);

  // for(type start, stop, inc){}

  // for (int h = 8; h < 18; h += 3){
  //   printf("\nEstou trabalhando sao %d horas.", h);
  // }
  // printf("\nSai do trabalho.");

  return 0;
}