#include <stdio.h>
#include <string.h>

int main()
{
  int quantidade_passageiros;
  char RG[12];
  char data_nascimentoRG[11];
  char possui_passagem[11];
  char data_nascimentoPassagem[11];
  char cadeira[4];

  printf("Digite a quantidade de passageiros:");
  scanf("%d", &quantidade_passageiros);

  for (int i = 1; i <= quantidade_passageiros; i++)
  {
    printf("\n-------------------------\n\n");
    printf("Passageiro %d:\n\n", i);
    printf("RG (Se não tiver, digite 'Nao possui'):");
    scanf(" %11[^\n]", RG);

    if (strcmp(RG, "Nao possui") == 0)
    {
      printf("\na saída é nessa direção\n");
      continue;
    }

    printf("Data de nascimento do RG:");
    scanf(" %10[^\n]", data_nascimentoRG);

    printf("Possui passagem? Digite 'Passagem' se sim. Senão, digite 'Nao possui':");
    scanf(" %10[^\n]", possui_passagem);

    if (strcmp(possui_passagem, "Nao possui") == 0)
    {
      printf("\na recepção é nessa direção\n");
      continue;
    }

    printf("Data de nascimento da passagem:");
    scanf(" %10[^\n]", data_nascimentoPassagem);

    if (strcmp(data_nascimentoPassagem, data_nascimentoRG) != 0)
    {
      printf("\n190\n");
      continue;
    }

    printf("Digite o código da Cadeira:");
    scanf(" %3[^\n]", cadeira);

    printf("\no seu assento é %s", cadeira);
    printf("\nTenha um ótimo dia\n");
  }

  return 0;
}
