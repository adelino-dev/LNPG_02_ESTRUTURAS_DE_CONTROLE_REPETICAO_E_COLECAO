#include <stdio.h>

int main()
{
  int qntJogosVendidos;
  double valorVendas;
  double bonus;
  double comissao;

  printf("Digite a quantidade de jogos vendidos no mês: ");
  scanf("%d", &qntJogosVendidos);

  valorVendas = qntJogosVendidos * 19.90;
  bonus = ((int)(qntJogosVendidos/15))*(valorVendas*0.08);
  comissao = valorVendas * 0.5 + bonus;

  printf("Valor das vendas do mês = R$ %.2f\n", valorVendas);
  printf("Bônus = R$ %.2f\n", bonus);
  printf("Salário + Bônus = R$ %.2f\n", comissao);

  return 0;
}