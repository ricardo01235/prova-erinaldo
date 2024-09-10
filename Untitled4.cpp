4. Elabore uma função que receba três lados de um triângulo e verifique se ele é um
triângulo retângulo. Um triângulo é retângulo se o quadrado da hipotenusa (o maior
lado) for igual à soma dos quadrados dos outros dois lados. Caso o triângulo seja
retângulo, a função deverá informar ao usuário que o triângulo é retângulo, caso
contrário, não deverá fazer nada.

#include <stdio.h>

   Função que verifica se três lados formam um triângulo retângulo
void verificaTrianguloRetangulo(double lado1, double lado2, double lado3) {
    double a, b, c;
    
      Ordenar os lados para identificar o maior lado
    if (lado1 > lado2 && lado1 > lado3) {
        c = lado1;   Hipotenusa
        a = lado2;
        b = lado3;
    } else if (lado2 > lado1 && lado2 > lado3) {
        c = lado2;   Hipotenusa
        a = lado1;
        b = lado3;
    } else {
        c = lado3;   Hipotenusa
        a = lado1;
        b = lado2;
    }
    
      Verifica se é um triângulo retângulo
    if (c * c == a * a + b * b) {
        printf("O triângulo é retângulo.\n");
    }
      Caso contrário, não faz nada
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
    
    verificaTrianguloRetangulo(lado1, lado2, lado3);
    
    return 0;
}
