8. Elabore uma fun��o que calcule o imposto sobre um sal�rio com base no valor
recebido. Se o sal�rio for maior que R$ 5.000,00, o imposto ser� de 20%. Caso
contr�rio, o imposto ser� de 10%. A fun��o deve exibir o valor do imposto a ser
pago.

#include <stdio.h>

   Fun��o que calcula e exibe o imposto sobre o sal�rio
void calculaImposto(double salario) {
    double imposto;

    if (salario > 5000.00) {
        imposto = salario * 0.20;   20% de imposto
    } else {
        imposto = salario * 0.10;   10% de imposto
    }

      Exibe o valor do imposto
    printf("O valor do imposto a ser pago �: R$ %.2f\n", imposto);
}

int main() {
    double salario;
    
      Exemplo de uso da fun��o
    printf("Digite o sal�rio: R$ ");
    scanf("%lf", &salario);
    
    calculaImposto(salario);
    
    return 0;
}
