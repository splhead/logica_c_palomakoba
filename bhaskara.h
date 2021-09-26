/*
* author: Silas Pinho Ladislau
*/
#ifndef BHASKARA_H
#define BHASKARA_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long calcDelta(long a, long b, long c)
{
  return pow(b, 2) - (4 * a * c);
}

void calcRoots(long a, long b, long c)
{
  long delta, x1, x2;

  printf("a=%ld b=%ld c=%ld\n", a, b, c);

  delta = calcDelta(a, b, c);
  printf("O delta é: %ld\n", delta);

  if (delta < 0)
  {
    printf("Nao possui raizes do conjunto dos numeros reais\n");
  }
  else if (delta == 0)
  {
    x1 = (-b + sqrt(delta)) / 2 * a;
    printf("A equacao possui apenas uma raiz %ld\n", x1);
  }
  else
  {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("As raizes da equação são: %ld %ld\n", x1, x2);
  }
}
#endif