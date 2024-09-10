8. Elabore uma função que calcule o imposto sobre um salário com base no valor
recebido. Se o salário for maior que R$ 5.000,00, o imposto será de 20%. Caso
contrário, o imposto será de 10%. A função deve exibir o valor do imposto a ser
pago.

#include <stdio.h>

   Função que calcula e exibe o imposto sobre o salário
void calculaImposto(double salario) {
    double imposto;

    if (salario > 5000.00) {
        imposto = salario * 0.20;   20% de imposto
    } else {
        imposto = salario * 0.10;   10% de imposto
    }

      Exibe o valor do imposto
    printf("O valor do imposto a ser pago é: R$ %.2f\n", imposto);
}

int main() {
    double salario;
    
      Exemplo de uso da função
    printf("Digite o salário: R$ ");
    scanf("%lf", &salario);
    
    calculaImposto(salario);
    
    return 0;
}
