15. Crie um programa que converta um valor monetário entre três moedas: real
(BRL), dólar (USD) e euro (EUR). O usuário deve informar a moeda de origem, a
moeda de destino e o valor a ser convertido. As taxas de conversão são as
seguintes:
? 1 USD = 5.30 BRL
? 1 EUR = 6.20 BRL
? 1 BRL = 0.19 USD
? 1 BRL = 0.16 EUR
O programa deve calcular e exibir o valor convertido. Se a moeda informada não for
reconhecida, o programa deve exibir uma mensagem de erro.

#include <stdio.h>

  Função que realiza a conversão de moeda
void converterMoeda(char moedaOrigem, char moedaDestino, double valor) {
    double valorConvertido;

      Verifica se a moeda de origem e a moeda de destino são válidas
    if (moedaOrigem == moedaDestino) {
        printf("A moeda de origem e a moeda de destino são iguais. Nenhuma conversão necessária.\n");
        return;
    }

      Converte BRL para USD e EUR
    if (moedaOrigem == 'B') {
        if (moedaDestino == 'U') {
            valorConvertido = valor * 0.19;   BRL para USD
            printf("R$ %.2f = $ %.2f\n", valor, valorConvertido);
        } else if (moedaDestino == 'E') {
            valorConvertido = valor * 0.16;   BRL para EUR
            printf("R$ %.2f = € %.2f\n", valor, valorConvertido);
        } else {
            printf("Erro: Moeda de destino não reconhecida.\n");
        }
    }
      Converte USD e EUR para BRL
    else if (moedaOrigem == 'U') {
        if (moedaDestino == 'B') {
            valorConvertido = valor * 5.30;   USD para BRL
            printf("$ %.2f = R$ %.2f\n", valor, valorConvertido);
        } else if (moedaDestino == 'E') {
            valorConvertido = valor * (5.30 / 6.20);  USD para EUR (conversão indireta)
            printf("$ %.2f = € %.2f\n", valor, valorConvertido);
        } else {
            printf("Erro: Moeda de destino não reconhecida.\n");
        }
    }
    else if (moedaOrigem == 'E') {
        if (moedaDestino == 'B') {
            valorConvertido = valor * 6.20;   EUR para BRL
            printf("€ %.2f = R$ %.2f\n", valor, valorConvertido);
        } else if (moedaDestino == 'U') {
            valorConvertido = valor * (0.19 * 6.20);   EUR para USD (conversão indireta)
            printf("€ %.2f = $ %.2f\n", valor, valorConvertido);
        } else {
            printf("Erro: Moeda de destino não reconhecida.\n");
        }
    }
    else {
        printf("Erro: Moeda de origem não reconhecida.\n");
    }
}

int main() {
    char moedaOrigem, moedaDestino;
    double valor;

      Solicita ao usuário a moeda de origem, a moeda de destino e o valor a ser convertido
    printf("Digite a moeda de origem (B para BRL, U para USD, E para EUR): ");
    scanf(" %c", &moedaOrigem);   O espaço antes de %c é para ignorar qualquer caractere de nova linha pendente
    
    printf("Digite a moeda de destino (B para BRL, U para USD, E para EUR): ");
    scanf(" %c", &moedaDestino);
    
    printf("Digite o valor a ser convertido: R$ ");
    scanf("%lf", &valor);
    
      Chama a função de conversão de moeda
    converterMoeda(moedaOrigem, moedaDestino, valor);
    
    return 0;
}
