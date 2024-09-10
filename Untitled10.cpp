10. Elabore uma fun��o que receba o sal�rio bruto de uma pessoa e calcule o valor
da contribui��o ao INSS com base na tabela de INSS de 2024. Utilize as faixas e
al�quotas progressivas para calcular o valor da contribui��o:
? At� R$ 1.320,00: 7,5%
? De R$ 1.320,01 at� R$ 2.571,29: 9%
? De R$ 2.571,30 at� R$ 3.856,94: 12%
? De R$ 3.856,95 at� R$ 7.507,49: 14%
Use a estrutura condicional aninhada para calcular o desconto corretamente.

#include <stdio.h>

  Fun��o que calcula a contribui��o ao INSS com base na tabela de 2024
void calculaINSS(double salarioBruto) {
    double contribuicao = 0.0;

      Calcular a contribui��o progressivamente de acordo com as faixas
    if (salarioBruto <= 1320.00) {
        contribuicao = salarioBruto * 0.075;   7,5%
    } else if (salarioBruto <= 2571.29) {
        contribuicao = 1320.00 * 0.075 + (salarioBruto - 1320.00) * 0.09;   7,5% + 9%
    } else if (salarioBruto <= 3856.94) {
        contribuicao = 1320.00 * 0.075 + (2571.29 - 1320.00) * 0.09 + (salarioBruto - 2571.29) * 0.12;   7,5% + 9% + 12%
    } else if (salarioBruto <= 7507.49) {
        contribuicao = 1320.00 * 0.075 + (2571.29 - 1320.00) * 0.09 + (3856.94 - 2571.29) * 0.12 + (salarioBruto - 3856.94) * 0.14;  7,5% + 9% + 12% + 14%
    } else {
          Faixa acima de R$ 7507,49 (s� para refer�ncia, n�o usada na tabela atual)
        contribuicao = 1320.00 * 0.075 + (2571.29 - 1320.00) * 0.09 + (3856.94 - 2571.29) * 0.12 + (7507.49 - 3856.94) * 0.14;
         O valor para sal�rios acima de 7507,49 n�o � calculado porque a faixa m�xima da tabela � 7507,49
    }

      Exibe o valor da contribui��o ao INSS
    printf("O valor da contribui��o ao INSS �: R$ %.2f\n", contribuicao);
}

int main() {
    double salarioBruto;
    
      Exemplo de uso da fun��o
    printf("Digite o sal�rio bruto: R$ ");
    scanf("%lf", &salarioBruto);
    
    calculaINSS(salarioBruto);
    
    return 0;
}
