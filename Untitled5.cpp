5. Crie uma função que receba a idade de uma pessoa e verifique se ela é maior de
idade (18 anos ou mais). A função deve exibir uma mensagem diferente para os
casos em que a pessoa é maior ou menor de idade.

#include <stdio.h>

  Função que verifica se a pessoa é maior de idade
void verificaIdade(int idade) {
    if (idade >= 18) {
        printf("A pessoa é maior de idade.\n");
    } else {
        printf("A pessoa é menor de idade.\n");
    }
}

int main() {
    int idade;
    
      Exemplo de uso da função
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);
    
    verificaIdade(idade);
    
    return 0;
}
