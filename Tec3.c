#include <stdio.h>

/*
  3) Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, que calcule e retorne:
  • O menor valor de faturamento ocorrido em um dia do mês;
  • O maior valor de faturamento ocorrido em um dia do mês;
  • Número de dias no mês em que o valor de faturamento diário foi superior à média mensal.

  IMPORTANTE:
  a) Usar o json ou xml disponível como fonte dos dados do faturamento mensal;
  b) Podem existir dias sem faturamento, como nos finais de semana e feriados. Estes dias devem ser ignorados no cálculo da média;
*/

// OBS: a linguagem C não possue suporte nativo a JSON ou XML, mas a lógica se mantém.

#define NUM_DIAS 30

int main()
{
  float faturamento[NUM_DIAS] =
      {
          1000.0, 2000.0, 0.0, 3000.0, 1500.0,
          0.0, 0.0,
          2500.0, 0.0, 1800.0, 0.0, 2200.0,
          0.0, 0.0,
          0.0, 2700.0, 2900.0, 0.0, 3200.0,
          0.0, 0.0,
          2100.0, 0.0, 2300.0, 0.0, 1700.0,
          0.0, 0.0};

  float menorFaturamento = faturamento[0];
  float maiorFaturamento = faturamento[0];
  float somaFaturamento = 0.0;
  int diasComFaturamento = 0;
  int diasAcimaMedia = 0;

  for (int i = 0; i < NUM_DIAS; i++)
  {
    if (faturamento[i] > 0)
    {
      if (faturamento[i] < menorFaturamento)
        menorFaturamento = faturamento[i];

      if (faturamento[i] > maiorFaturamento)
        maiorFaturamento = faturamento[i];

      somaFaturamento += faturamento[i];

      diasComFaturamento++;
    }
  }

  float mediaMensal = somaFaturamento / diasComFaturamento;

  for (int i = 0; i < NUM_DIAS; i++)
  {
    if (faturamento[i] > mediaMensal)
      diasAcimaMedia++;
  }

  printf("Menor faturamento: %.2f\n", menorFaturamento);
  printf("Maior faturamento: %.2f\n", maiorFaturamento);
  printf("Número de dias com faturamento acima da média: %d\n", diasAcimaMedia);

  return 0;
}
