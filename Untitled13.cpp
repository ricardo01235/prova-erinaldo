13. Crie um programa que simule uma calculadora simples. O programa deve
permitir ao usuário escolher entre quatro operações aritméticas: soma, subtração,
multiplicação e divisão. O usuário deve informar a operação desejada e dois
números. O programa deve realizar a operação selecionada e exibir o resultado.
Caso a operação não seja reconhecida, o programa deve informar um erro.

#include <stdio.h>

  Função que realiza a operação aritmética com base na escolha do usuário
void calculadora(char operacao, double num1, double num2) {
    double resultado;

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado da subtração: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado da multiplicação: %.2f\n", resultado);
            break;
        case '/':
              Verifica se o denominador é zero para evitar divisão por zero
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado da divisão: %.2f\n", resultado);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Erro: Operação não reconhecida.\n");
            break;
    }
}

int main() {
    char operacao;
    double num1, num2;
    
      Solicita ao usuário a operação desejada
    printf("Escolha a operação (+, -, *, /): ");
    scanf(" %c", &operacao);  O espa
