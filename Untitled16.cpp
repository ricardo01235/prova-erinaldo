16. Desenvolva um programa que classifique o desempenho acadêmico de um
aluno com base em sua nota final. A nota deve ser informada pelo usuário e
classificada da seguinte forma:
? A (nota >= 9.0)
? B (nota >= 7.0 e < 9.0)
? C (nota >= 5.0 e < 7.0)
? D (nota < 5.0)
O programa deve exibir a classificação correspondente. Se a nota estiver fora do
intervalo de 0 a 10, o programa deve informar um erro. 

#include <stdio.h>

  Função que classifica o desempenho acadêmico com base na nota
void classificarDesempenho(double nota) {
    if (nota < 0 || nota > 10) {
          Nota fora do intervalo permitido
        printf("Erro: Nota inválida. A nota deve estar entre 0 e 10.\n");
    } else if (nota >= 9.0) {
          Classificação A
        printf("Classificação: A\n");
    } else if (nota >= 7.0) {
          Classificação B
        printf("Classificação: B\n");
    } else if (nota >= 5.0) {
          Classificação C
        printf("Classificação: C\n");
    } else {
          Classificação D
        printf("Classificação: D\n");
    }
}

int main() {
    double nota;
    
      Solicita ao usuário a nota final
    printf("Digite a nota final do aluno (0 a 10): ");
    scanf("%lf", &nota);
    
     Chama a função para classificar o desempenho
    classificarDesempenho(nota);
    
    return 0;
}
