4. Elabore uma fun��o que receba tr�s lados de um tri�ngulo e verifique se ele � um
tri�ngulo ret�ngulo. Um tri�ngulo � ret�ngulo se o quadrado da hipotenusa (o maior
lado) for igual � soma dos quadrados dos outros dois lados. Caso o tri�ngulo seja
ret�ngulo, a fun��o dever� informar ao usu�rio que o tri�ngulo � ret�ngulo, caso
contr�rio, n�o dever� fazer nada.

#include <stdio.h>

   Fun��o que verifica se tr�s lados formam um tri�ngulo ret�ngulo
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
    
      Verifica se � um tri�ngulo ret�ngulo
    if (c * c == a * a + b * b) {
        printf("O tri�ngulo � ret�ngulo.\n");
    }
      Caso contr�rio, n�o faz nada
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
    
    verificaTrianguloRetangulo(lado1, lado2, lado3);
    
    return 0;
}
