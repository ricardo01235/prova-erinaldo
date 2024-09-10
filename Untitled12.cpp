12. Desenvolva uma função que receba o valor venal de um imóvel e calcule o valor
do IPTU com base na tabela abaixo:
? Até R$ 100.000,00: Alíquota de 1%
? De R$ 100.000,01 até R$ 300.000,00: Alíquota de 1,5%
? De R$ 300.000,01 até R$ 500.000,00: Alíquota de 2%
? Acima de R$ 500.000,00: Alíquota de 2,5%
Use a estrutura condicional aninhada para aplicar a alíquota corretamente.

#include <stdio.h>

  Função que calcula o valor do IPTU com base no valor venal do imóvel
void calculaIPTU(double valorVenal) {
    double iptu;

      Calcula o IPTU com base nas faixas de valor venal
    if (valorVenal <= 100000.00) {
        iptu = valorVenal * 0.01;   1%
    } else if (valorVenal <= 300000.00) {
        iptu = valorVenal * 0.015;   1,5%
    } else if (valorVenal <= 500000.00) {
        iptu = valorVenal * 0.02;   2%
    } else {
        iptu = valorVenal * 0.025;   2,5%
    }

      Exibe o valor do IPTU
    printf("O valor do IPTU é: R$ %.2f\n", iptu);
}

int main() {
    double valorVenal;
    
     Exemplo de uso da função
    printf("Digite o valor venal do imóvel: R$ ");
    scanf("%lf", &valorVenal);
}
    

 
