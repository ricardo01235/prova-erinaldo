1. Crie uma função que receba um número inteiro de 1 a 10 e retorne 1 se o número
for primo. Caso contrário, não retorne nada. Você não pode usar laços de repetição,
por essa razão, limite a verificação a um conjunto pequeno de números para
verificar se são primos. Um número primo é divisível apenas por 1 e por ele mesmo.

#include <stdio.h>

  Função que verifica se um número é primo e retorna 1 se for primo
void verificaPrimo(int num) {
      Verifica se o número está no intervalo de 1 a 10
    if (num < 1 || num > 10) {
        printf("Número fora do intervalo permitido.\n");
        return;
    }
    
      Caso base: 1 não é considerado primo
    if (num == 1) {
        return;
    }
    
      Verificação de primalidade para números de 2 a 10
    if (num == 2 || num == 3 || num == 5 || num == 7) {
        printf("1\n");  Número primo
    }
      Números não primos entre 1 e 10
    else {
        return;
    }
}

int main() {
    int numero;
    
      Exemplo de uso da função
    printf("Digite um número inteiro entre 1 e 10: ");
    scanf("%d", &numero);
    
    verificaPrimo(numero);
    
    return 0;
}
