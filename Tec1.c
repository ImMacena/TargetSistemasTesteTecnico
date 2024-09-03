#include <stdio.h>

/*
  1) Observe o trecho de código abaixo:

  int INDICE = 13, SOMA = 0, K = 0;
  Enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; }
  Imprimir(SOMA);

  Ao final do processamento, qual será o valor da variável SOMA?
*/

int main()
{
  int INDICE = 13, SOMA = 0, K = 0;

  while (K < INDICE)
  {
    K += 1;
    SOMA += K;
  }

  // A saída (variável 'SOMA') será 91 ao final do programa.
  printf("%d", SOMA);

  return 0;
}