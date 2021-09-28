/*
* author: Silas Pinho Ladislau
*/
#include <stdio.h>
#include <stdlib.h>
#include "bhaskara.h"

int main(int numArgs, char *arg[])
{
  double a, b, c;

  if (numArgs < 2)
  {
    printf("Você pode passar os termos a b c\nna chamada do programa\nEx.: ./bhaskara 3 6 -9 \nou\n");

    printf("Digite a seguir os termos a,b,c da equação ax2+bx+c \nEx: 3,6,-9 (3x2+6x-9)\nou\nControl+c para sair\n");
    scanf("%lf,%lf,%lf", &a, &b, &c);
    printf("\n");
  }
  else
  {
    a = strtol(arg[1], NULL, 10);
    b = strtol(arg[2], NULL, 10);
    c = strtol(arg[3], NULL, 10);
  }

  printRoots(a, b, c);

  return EXIT_SUCCESS;
}
