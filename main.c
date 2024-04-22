#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
  int m, tipo, total;
  printf("Selecione o tipo de tijolo que será utilizado: \n\n1 - Tijolo de 6 furos \n2 - Tijolo de 4 furos \n3 - Tijolo Maciço \n");
  scanf("%i", &tipo);
  getchar();
  switch (tipo) {
  case 1:
    printf("Digite a metragem: ");
    scanf("%i", &m);
    total = m * 15;
    printf("Tijolos necessários: %i", total);
    break;
  case 2:
    printf("Digite a metragem: ");
    scanf("%i", &m);
    total = m * 25;
    printf("Tijolos necessários: %i", total);
    break;
  case 3:
    printf("Digite a metragem: ");
    scanf("%i", &m);
    total = m * 30;
    printf("Tijolos necessários: %i", total);
    break;
  default:
    printf("Tipo inválido");
  }
  getchar();
  getchar();
}
