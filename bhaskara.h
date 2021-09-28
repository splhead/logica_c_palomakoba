/*
* author: Silas Pinho Ladislau
*/
#ifndef BHASKARA_H
#define BHASKARA_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calcDelta(double a, double b, double c)
{
  return pow(b, 2) - (4 * a * c);
}

char signal(double value)
{
  return value >= 0 ? '+' : ' ';
}

void printRoots(double a, double b, double c)
{
  double delta, x1, x2;

  printf("a=%.1lf b=%.1lf c=%.1lf\n", a, b, c);
  printf("%.1lfx2 %c%.1lfx %c%.1lf\n", a, signal(b), b, signal(c), c);

  delta = calcDelta(a, b, c);
  printf("O delta é: %.1lf\n", delta);

  if (delta < 0)
  {
    printf("Nao possui raizes do conjunto dos numeros reais\n");
  }
  else if (delta == 0)
  {
    x1 = (-b + sqrt(delta)) / 2 * a;
    printf("A equacao possui apenas uma raiz %.1lf\n", x1);
  }
  else
  {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("As raizes da equação são: %.1lf %.1lf\n", x1, x2);
  }
}
#endif