12. Desenvolva uma fun��o que receba o valor venal de um im�vel e calcule o valor
do IPTU com base na tabela abaixo:
? At� R$ 100.000,00: Al�quota de 1%
? De R$ 100.000,01 at� R$ 300.000,00: Al�quota de 1,5%
? De R$ 300.000,01 at� R$ 500.000,00: Al�quota de 2%
? Acima de R$ 500.000,00: Al�quota de 2,5%
Use a estrutura condicional aninhada para aplicar a al�quota corretamente.

#include <stdio.h>

  Fun��o que calcula o valor do IPTU com base no valor venal do im�vel
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
    printf("O valor do IPTU �: R$ %.2f\n", iptu);
}

int main() {
    double valorVenal;
    
     Exemplo de uso da fun��o
    printf("Digite o valor venal do im�vel: R$ ");
    scanf("%lf", &valorVenal);
}
    

 
