16. Desenvolva um programa que classifique o desempenho acad�mico de um
aluno com base em sua nota final. A nota deve ser informada pelo usu�rio e
classificada da seguinte forma:
? A (nota >= 9.0)
? B (nota >= 7.0 e < 9.0)
? C (nota >= 5.0 e < 7.0)
? D (nota < 5.0)
O programa deve exibir a classifica��o correspondente. Se a nota estiver fora do
intervalo de 0 a 10, o programa deve informar um erro. 

#include <stdio.h>

  Fun��o que classifica o desempenho acad�mico com base na nota
void classificarDesempenho(double nota) {
    if (nota < 0 || nota > 10) {
          Nota fora do intervalo permitido
        printf("Erro: Nota inv�lida. A nota deve estar entre 0 e 10.\n");
    } else if (nota >= 9.0) {
          Classifica��o A
        printf("Classifica��o: A\n");
    } else if (nota >= 7.0) {
          Classifica��o B
        printf("Classifica��o: B\n");
    } else if (nota >= 5.0) {
          Classifica��o C
        printf("Classifica��o: C\n");
    } else {
          Classifica��o D
        printf("Classifica��o: D\n");
    }
}

int main() {
    double nota;
    
      Solicita ao usu�rio a nota final
    printf("Digite a nota final do aluno (0 a 10): ");
    scanf("%lf", &nota);
    
     Chama a fun��o para classificar o desempenho
    classificarDesempenho(nota);
    
    return 0;
}
