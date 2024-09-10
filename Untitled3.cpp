3. Crie uma fun��o que receba tr�s lados de um tri�ngulo e verifique se esses lados
formam um tri�ngulo v�lido. Um tri�ngulo � v�lido se a soma de dois de seus lados
for sempre maior que o terceiro. Caso o tri�ngulo seja v�lido, a fun��o dever�
retornar 1. Caso contr�rio, n�o deve retornar nada.

#include <stdio.h>

  Fun��o que verifica se tr�s lados formam um tri�ngulo v�lido
void verificaTriangulo(double lado1, double lado2, double lado3) {
      Verifica a condi��o de validade do tri�ngulo
    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        printf("1\n");   Tri�ngulo v�lido
    }
      Se n�o for um tri�ngulo v�lido, a fun��o n�o retorna nada
}

int main() {
    double lado1, lado2, lado3;
    
      Exemplo de uso da fun��o
    printf("Digite o comprimento dos tr�s lados do tri�ngulo:\n");
    printf("Lado 1: ");
    scanf("%lf", &lado1);
    printf("Lado 2: ");
    scanf("%lf", &lado2);
    printf("Lado 3: ");
    scanf("%lf", &lado3);
    
    verificaTriangulo(lado1, lado2, lado3);
    
    return 0;
}
