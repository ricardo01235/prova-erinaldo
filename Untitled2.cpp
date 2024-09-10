2. Crie uma fun��o que verifique se um ano fornecido � bissexto. Retorne 1 se for
bissexto, caso contr�rio, a fun��o n�o deve retornar nada. Um ano � bissexto se for
divis�vel por 4, exceto os divis�veis por 100, a menos que tamb�m sejam divis�veis
por 400. 

#include <stdio.h>

   Fun��o que verifica se um ano � bissexto e retorna 1 se for bissexto
void verificaAnoBissexto(int ano) {
      Verifica se o ano � divis�vel por 4
    if (ano % 4 == 0) {
          Verifica se o ano n�o � divis�vel por 100 ou � divis�vel por 400
        if (ano % 100 != 0 || ano % 400 == 0) {
            printf("1\n");   Ano bissexto
        }
    }
      Se n�o for bissexto, a fun��o n�o retorna nada
}

int main() {
    int ano;
    
      Exemplo de uso da fun��o
    printf("Digite um ano: ");
    scanf("%d", &ano);
    
    verificaAnoBissexto(ano);
    
    return 0;
}
