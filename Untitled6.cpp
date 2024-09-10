6. Elabore uma função que receba a nota de um aluno (de 0 a 10) e classifique se
ele foi aprovado ou reprovado. A aprovação ocorre se a nota for 7 ou superior, e
reprovação caso contrário. A função deve exibir mensagens para os dois casos.

#include <stdio.h>

  Função que classifica a nota do aluno
void classificaNota(float nota) {
    if (nota >= 7.0) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
}

int main() {
    float nota;
    
      Exemplo de uso da função
    printf("Digite a nota do aluno (de 0 a 10): ");
    scanf("%f", &nota);
    
      Verifica se a nota está dentro do intervalo permitido
    if (nota < 0.0 || nota > 10.0) {
        printf("Nota inválida. Deve estar entre 0 e 10.\n");
    } else {
        classificaNota(nota);
    }
    
    return 0;
}
