3. Crie uma função que receba três lados de um triângulo e verifique se esses lados
formam um triângulo válido. Um triângulo é válido se a soma de dois de seus lados
for sempre maior que o terceiro. Caso o triângulo seja válido, a função deverá
retornar 1. Caso contrário, não deve retornar nada.

#include <stdio.h>

  Função que verifica se três lados formam um triângulo válido
void verificaTriangulo(double lado1, double lado2, double lado3) {
      Verifica a condição de validade do triângulo
    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        printf("1\n");   Triângulo válido
    }
      Se não for um triângulo válido, a função não retorna nada
}

int main() {
    double lado1, lado2, lado3;
    
      Exemplo de uso da função
    printf("Digite o comprimento dos três lados do triângulo:\n");
    printf("Lado 1: ");
    scanf("%lf", &lado1);
    printf("Lado 2: ");
    scanf("%lf", &lado2);
    printf("Lado 3: ");
    scanf("%lf", &lado3);
    
    verificaTriangulo(lado1, lado2, lado3);
    
    return 0;
}
