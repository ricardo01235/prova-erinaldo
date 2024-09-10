2. Crie uma função que verifique se um ano fornecido é bissexto. Retorne 1 se for
bissexto, caso contrário, a função não deve retornar nada. Um ano é bissexto se for
divisível por 4, exceto os divisíveis por 100, a menos que também sejam divisíveis
por 400. 

#include <stdio.h>

   Função que verifica se um ano é bissexto e retorna 1 se for bissexto
void verificaAnoBissexto(int ano) {
      Verifica se o ano é divisível por 4
    if (ano % 4 == 0) {
          Verifica se o ano não é divisível por 100 ou é divisível por 400
        if (ano % 100 != 0 || ano % 400 == 0) {
            printf("1\n");   Ano bissexto
        }
    }
      Se não for bissexto, a função não retorna nada
}

int main() {
    int ano;
    
      Exemplo de uso da função
    printf("Digite um ano: ");
    scanf("%d", &ano);
    
    verificaAnoBissexto(ano);
    
    return 0;
}
