#include <stdio.h>
#include <string.h>

/*
  5) Escreva um programa que inverta os caracteres de um string.

  IMPORTANTE:
  a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
  b) Evite usar funções prontas, como, por exemplo, reverse;
*/

int main()
{
  char string[] = "Desenvolvimento";

  char aux;
  int inicio = 0, final = (strlen(string) - 1);

  while (inicio < final)
  {
    aux = string[inicio];
    string[inicio] = string[final];
    string[final] = aux;

    inicio++;
    final--;
  }

  printf("String invertida: %s\n", string);

  return 0;
}