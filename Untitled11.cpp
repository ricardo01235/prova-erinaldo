11. Crie uma função que receba o valor de um produto e calcule o valor do desconto
de ICMS com base nas faixas de preço do produto:
? Até R$ 1.000,00: Desconto de 5%
? De R$ 1.000,01 até R$ 5.000,00: Desconto de 10%
? Acima de R$ 5.000,00: Desconto de 15%
Use a estrutura condicional aninhada para aplicar o desconto corretamente.

#include <stdio.h>

  Função que calcula o valor do desconto de ICMS com base nas faixas de preço
void calculaDescontoICMS(double valorProduto) {
    double desconto;

      Calcula o desconto com base nas faixas de preço
    if (valorProduto <= 1000.00) {
        desconto = valorProduto * 0.05;   5%
    } else if (valorProduto <= 5000.00) {
        desconto = valorProduto * 0.10;   10%
    } else {
        desconto = valorProduto * 0.15;   15%
    }

      Exibe o valor do desconto
    printf("O valor do desconto de ICMS é: R$ %.2f\n", desconto);
}

int main() {
    double valorProduto;
    
     Exemplo de uso da função
    printf("Digite o valor do produto: R$ ");
