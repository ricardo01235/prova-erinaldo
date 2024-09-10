7. Desenvolva uma função que receba um número inteiro e determine se ele é par
ou ímpar. Exiba uma mensagem correspondente para cada caso.

#include <stdio.h>

   Função que determina se um número é par ou ímpar
void verificaParOuImpar(int numero) {
    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }
}

int main() {
    int numero;
    
      Exemplo de uso da função
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    verificaParOuImpar(numero);
    
    return 0;
}
