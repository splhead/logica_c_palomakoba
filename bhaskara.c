/*
* author: Silas Pinho Ladislau
*/
#include <stdio.h>
#include <stdlib.h>
#include "bhaskara.h"

int main(int numArgs, char *arg[])
{
  long a, b, c;

  if (numArgs < 2)
  {
    printf("você pode passar os termos a b c\nna chamada do programa Ex.: ./bhaskara 3 6 -9 \nou\n");

    printf("Digite a seguir os termos a,b,c da equacao ax2+bx+c \nEx: 3,6,-9 (3x2+6x-9)\n");
    scanf("%ld,%ld,%ld", &a, &b, &c);
  }
  else
  {
    a = strtol(arg[1], NULL, 10);
    b = strtol(arg[2], NULL, 10);
    c = strtol(arg[3], NULL, 10);
  }

  calcRoots(a, b, c);

  return EXIT_SUCCESS;
}
