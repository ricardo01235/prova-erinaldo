1. Crie uma fun��o que receba um n�mero inteiro de 1 a 10 e retorne 1 se o n�mero
for primo. Caso contr�rio, n�o retorne nada. Voc� n�o pode usar la�os de repeti��o,
por essa raz�o, limite a verifica��o a um conjunto pequeno de n�meros para
verificar se s�o primos. Um n�mero primo � divis�vel apenas por 1 e por ele mesmo.

#include <stdio.h>

  Fun��o que verifica se um n�mero � primo e retorna 1 se for primo
void verificaPrimo(int num) {
      Verifica se o n�mero est� no intervalo de 1 a 10
    if (num < 1 || num > 10) {
        printf("N�mero fora do intervalo permitido.\n");
        return;
    }
    
      Caso base: 1 n�o � considerado primo
    if (num == 1) {
        return;
    }
    
      Verifica��o de primalidade para n�meros de 2 a 10
    if (num == 2 || num == 3 || num == 5 || num == 7) {
        printf("1\n");  N�mero primo
    }
      N�meros n�o primos entre 1 e 10
    else {
        return;
    }
}

int main() {
    int numero;
    
      Exemplo de uso da fun��o
    printf("Digite um n�mero inteiro entre 1 e 10: ");
    scanf("%d", &numero);
    
    verificaPrimo(numero);
    
    return 0;
}
