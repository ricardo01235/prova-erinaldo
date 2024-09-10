6. Elabore uma fun��o que receba a nota de um aluno (de 0 a 10) e classifique se
ele foi aprovado ou reprovado. A aprova��o ocorre se a nota for 7 ou superior, e
reprova��o caso contr�rio. A fun��o deve exibir mensagens para os dois casos.

#include <stdio.h>

  Fun��o que classifica a nota do aluno
void classificaNota(float nota) {
    if (nota >= 7.0) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
}

int main() {
    float nota;
    
      Exemplo de uso da fun��o
    printf("Digite a nota do aluno (de 0 a 10): ");
    scanf("%f", &nota);
    
      Verifica se a nota est� dentro do intervalo permitido
    if (nota < 0.0 || nota > 10.0) {
        printf("Nota inv�lida. Deve estar entre 0 e 10.\n");
    } else {
        classificaNota(nota);
    }
    
    return 0;
}
