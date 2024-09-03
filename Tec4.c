#include <stdio.h>
#include <string.h>

/*
  4) Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:
  • SP – R$67.836,43
  • RJ – R$36.678,66
  • MG – R$29.229,88
  • ES – R$27.165,48
  • Outros – R$19.849,53

  Escreva um programa na linguagem que desejar onde calcule o percentual de representação que cada estado teve dentro do valor total mensal da distribuidora.
*/

int main()
{
  char UFs[5][7] = {"SP", "RJ", "MG", "ES", "OUTROS"}; // O limite deve ser 7 pois cada string termina com '\0'

  float UFsFaturamento[5] = {67836.43, 36678.66, 29229.88, 27165.48, 19849.53}, faturamentoTotal = 0;

  int qntFaturamento = sizeof(UFsFaturamento) / sizeof(UFsFaturamento[0]);

  for (int i = 0; i < qntFaturamento; i++)
  {
    faturamentoTotal += UFsFaturamento[i];
  }

  printf("Percentual de representação por estado:\n");

  for (int i = 0; i < qntFaturamento; i++)
  {
    float percentual = (UFsFaturamento[i] / faturamentoTotal) * 100;

    printf("%s: %.2f%% \n", UFs[i], percentual);
  }

  return 0;
}
