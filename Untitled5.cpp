5. Crie uma fun��o que receba a idade de uma pessoa e verifique se ela � maior de
idade (18 anos ou mais). A fun��o deve exibir uma mensagem diferente para os
casos em que a pessoa � maior ou menor de idade.

#include <stdio.h>

  Fun��o que verifica se a pessoa � maior de idade
void verificaIdade(int idade) {
    if (idade >= 18) {
        printf("A pessoa � maior de idade.\n");
    } else {
        printf("A pessoa � menor de idade.\n");
    }
}

int main() {
    int idade;
    
      Exemplo de uso da fun��o
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);
    
    verificaIdade(idade);
    
    return 0;
}
