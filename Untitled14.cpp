14. Elabore um programa que exiba uma mensagem de boas-vindas baseada no
turno do dia. O usuário deve informar o turno usando um número (1 para manhã, 2
para tarde, 3 para noite). O programa deve exibir uma mensagem apropriada para
cada turno e um erro para entradas inválidas.

#include <stdio.h>

  Função que exibe uma mensagem de boas-vindas com base no turno
void boasVindas(int turno) {
    switch (turno) {
        case 1:
            printf("Bom dia! Espero que tenha um ótimo dia pela frente.\n");
            break;
        case 2:
            printf("Boa tarde! Que sua tarde seja produtiva e agradável.\n");
            break;
        case 3:
            printf("Boa noite! Descanse bem e tenha uma ótima noite.\n");
            break;
        default:
            printf("Erro: Turno inválido. Por favor, escolha 1 para manhã, 2 para tarde ou 3 para noite.\n");
            break;
    }
}

int main() {
    int turno;
    
      Solicita ao usuário o turno
    printf("Informe o turno (1 para manhã, 2 para tarde, 3 para noite): ");
    scanf("%d", &turno);
    
     Chama a função de boas-vindas
    boasVindas(turno);
    
    return 0;
}
