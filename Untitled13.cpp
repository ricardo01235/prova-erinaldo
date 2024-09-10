13. Crie um programa que simule uma calculadora simples. O programa deve
permitir ao usu�rio escolher entre quatro opera��es aritm�ticas: soma, subtra��o,
multiplica��o e divis�o. O usu�rio deve informar a opera��o desejada e dois
n�meros. O programa deve realizar a opera��o selecionada e exibir o resultado.
Caso a opera��o n�o seja reconhecida, o programa deve informar um erro.

#include <stdio.h>

  Fun��o que realiza a opera��o aritm�tica com base na escolha do usu�rio
void calculadora(char operacao, double num1, double num2) {
    double resultado;

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado da subtra��o: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado da multiplica��o: %.2f\n", resultado);
            break;
        case '/':
              Verifica se o denominador � zero para evitar divis�o por zero
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado da divis�o: %.2f\n", resultado);
            } else {
                printf("Erro: Divis�o por zero n�o � permitida.\n");
            }
            break;
        default:
            printf("Erro: Opera��o n�o reconhecida.\n");
            break;
    }
}

int main() {
    char operacao;
    double num1, num2;
    
      Solicita ao usu�rio a opera��o desejada
    printf("Escolha a opera��o (+, -, *, /): ");
    scanf(" %c", &operacao);  O espa
