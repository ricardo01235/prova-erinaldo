7. Desenvolva uma fun��o que receba um n�mero inteiro e determine se ele � par
ou �mpar. Exiba uma mensagem correspondente para cada caso.

#include <stdio.h>

   Fun��o que determina se um n�mero � par ou �mpar
void verificaParOuImpar(int numero) {
    if (numero % 2 == 0) {
        printf("O n�mero %d � par.\n", numero);
    } else {
        printf("O n�mero %d � �mpar.\n", numero);
    }
}

int main() {
    int numero;
    
      Exemplo de uso da fun��o
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);
    
    verificaParOuImpar(numero);
    
    return 0;
}
