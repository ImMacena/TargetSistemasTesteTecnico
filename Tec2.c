#include <stdio.h>
#include <stdbool.h>

/*
  2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores
  (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...),
  escreva um programa na linguagem que desejar onde, informado um número,
  ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

  IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;
*/

#define VARIAVEL 34

int main()
{
  int x = VARIAVEL, fib1 = 0, fib2 = 1, fibAtual = 1, termo = 2;
  bool pertence = false;

  if (x == 0 || x == 1)
  {
    pertence = true;
    termo = x + 1;
  }

  while (fibAtual < x && !pertence)
  {
    termo++;

    fibAtual = fib1 + fib2;

    if (fibAtual == x) pertence = true;

    fib1 = fib2;
    fib2 = fibAtual;
  }

  if (pertence)
  {
    printf("O número '%d' pertence à sequência Fibonacci, sendo o %dº termo.\n", x, termo);
  }
  else
  {
    printf("O número '%d' não pertence à sequência Fibonacci.\n", x);
  }

  return 0;
}
