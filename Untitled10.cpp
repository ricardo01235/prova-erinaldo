10. Elabore uma função que receba o salário bruto de uma pessoa e calcule o valor
da contribuição ao INSS com base na tabela de INSS de 2024. Utilize as faixas e
alíquotas progressivas para calcular o valor da contribuição:
? Até R$ 1.320,00: 7,5%
? De R$ 1.320,01 até R$ 2.571,29: 9%
? De R$ 2.571,30 até R$ 3.856,94: 12%
? De R$ 3.856,95 até R$ 7.507,49: 14%
Use a estrutura condicional aninhada para calcular o desconto corretamente.

#include <stdio.h>

  Função que calcula a contribuição ao INSS com base na tabela de 2024
void calculaINSS(double salarioBruto) {
    double contribuicao = 0.0;

      Calcular a contribuição progressivamente de acordo com as faixas
    if (salarioBruto <= 1320.00) {
        contribuicao = salarioBruto * 0.075;   7,5%
    } else if (salarioBruto <= 2571.29) {
        contribuicao = 1320.00 * 0.075 + (salarioBruto - 1320.00) * 0.09;   7,5% + 9%
    } else if (salarioBruto <= 3856.94) {
        contribuicao = 1320.00 * 0.075 + (2571.29 - 1320.00) * 0.09 + (salarioBruto - 2571.29) * 0.12;   7,5% + 9% + 12%
    } else if (salarioBruto <= 7507.49) {
        contribuicao = 1320.00 * 0.075 + (2571.29 - 1320.00) * 0.09 + (3856.94 - 2571.29) * 0.12 + (salarioBruto - 3856.94) * 0.14;  7,5% + 9% + 12% + 14%
    } else {
          Faixa acima de R$ 7507,49 (só para referência, não usada na tabela atual)
        contribuicao = 1320.00 * 0.075 + (2571.29 - 1320.00) * 0.09 + (3856.94 - 2571.29) * 0.12 + (7507.49 - 3856.94) * 0.14;
         O valor para salários acima de 7507,49 não é calculado porque a faixa máxima da tabela é 7507,49
    }

      Exibe o valor da contribuição ao INSS
    printf("O valor da contribuição ao INSS é: R$ %.2f\n", contribuicao);
}

int main() {
    double salarioBruto;
    
      Exemplo de uso da função
    printf("Digite o salário bruto: R$ ");
    scanf("%lf", &salarioBruto);
    
    calculaINSS(salarioBruto);
    
    return 0;
}
