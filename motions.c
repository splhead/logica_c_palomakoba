/*
* Author: Silas Pinho Ladislau
*/

#include <stdio.h>
#include <stdlib.h>

#define FIM 0
#define INICIO 99

void funcao_horaria_velocidade(double velocidade_inicial, double aceleracao, double tempo)
{
  // v = v0 + at
  double velocidade_no_instante_t;
  velocidade_no_instante_t = velocidade_inicial + (aceleracao * tempo);
  printf("A velocidade é de %.1lf m/s no instante %.1lf\n", velocidade_no_instante_t, tempo);
}

void funcao_horaria_posicao(double espaco_inicial, double velocidade_inicial, double tempo, double aceleracao)
{
  // s = s0 + v0t + (at2)/2
  double posicao_no_instante_t;
  posicao_no_instante_t = espaco_inicial + (velocidade_inicial * tempo) + (aceleracao * (tempo * tempo)) / 2;
  printf("No instante %.1lf a posição é %.1lf m\n", tempo, posicao_no_instante_t);
}

void equacao_torricelli(double velocidade_inicial, double aceleracao, double espaco_inicial, double espaco_final)
{
  // v2 = v02 + 2a(s - s0)
  double velocidade_final;
  velocidade_final = (velocidade_inicial * velocidade_inicial) + (2 * aceleracao * (espaco_final - espaco_inicial));
  printf("Velocidade final ao quadrado é %.1lf m/s2\n", velocidade_final);
}

void ajuda()
{
  printf("\nPara realizar os calculos\nentre com os valores no padrão SI separados por virgula\nPor exemplo a função v = v0 + at\nonde velocidade inicial v0 = 20m/s\naceleracao a = -2m/s\ntempo t = 8s\nficaria 20,-2,8\nvelocidade inicial,aceleracao e tempo respectivamente\n\nPressione uma teclar para continuar...\nA qualquer momento aperte Control + C para sair.\n\n");
  getchar();
}

void menu()
{
  int opcao = 99;
  double velocidade_inicial, espaco_inicial, espaco_final, aceleracao, tempo;

  while (opcao)
  {
    switch (opcao)
    {
    case INICIO:
      printf("\nO que deseja?\n1 - Função horária da velocidade\n2 - Função horária da posição\n3 - Equação Torricelli\n4 - ajuda\n0 - sair\n");
      scanf("%d", &opcao);
      break;

    case 1:
      printf("\nFunção horária da velocidade\n");
      printf("v = v0 + at\n");
      printf("Entre com os valores de v0,a,t\n");
      scanf("%lf,%lf,%lf", &velocidade_inicial, &aceleracao, &tempo);
      funcao_horaria_velocidade(velocidade_inicial, aceleracao, tempo);
      opcao = INICIO;
      break;
    case 2:
      printf("\nFunção horária da posição\n");
      printf("s = s0 + v0t + (at2) / 2\n");
      printf("Entre com os valores de s0,v0,a,t\n");
      scanf("%lf,%lf,%lf,%lf", &espaco_inicial, &velocidade_inicial, &aceleracao, &tempo);
      funcao_horaria_posicao(espaco_inicial, velocidade_inicial, aceleracao, tempo);
      opcao = INICIO;
      break;
    case 3:
      printf("\nEquação de Torricelli\n");
      printf("v2 = v02 + 2a(s - s0)\n");
      printf("Entre com os valores de v0,a,s,s0\n");
      scanf("%lf,%lf,%lf,%lf", &velocidade_inicial, &aceleracao, &espaco_final, &espaco_inicial);
      equacao_torricelli(velocidade_inicial, aceleracao, espaco_final, espaco_inicial);
      opcao = INICIO;
      break;
    case 4:
      ajuda();
      opcao = INICIO;
      break;

    case 0:
      opcao = FIM;
      break;
    default:
      ajuda();
      opcao = INICIO;
      break;
    }
  }
}

int main()
{
  menu();
  return EXIT_SUCCESS;
}