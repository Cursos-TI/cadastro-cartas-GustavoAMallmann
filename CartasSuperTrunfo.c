#include <stdio.h>

int main() {
  char Estado[2];
  char NomedaCidade[10];
  char CodigoCarta[5];
  int Populacao;
  float Area;
  float Pib;
  int PontosTuristicos;

  printf("Para começar digite as iniciais do Estado: \n");
  scanf("%s", &Estado);

  printf("Digite o nome da Cidade: \n");
  scanf("%s", &NomedaCidade);

  printf("Digite a quantidade da habitantes: \n");
  scanf("%d", &Populacao);

  printf("Digite a Área em km²: \n");
  scanf("%f", &Area);

  printf("Digite o PIB da Cidade: \n");
  scanf("%f", &Pib);

  printf("Digite o numero de pontos Turisticos: \n");
  scanf("%d", &PontosTuristicos);

  printf("As caracteristicas da sua Carta são: \n");
  printf("CODIGO DA CARTA: \n", Estado+01);
  printf("ESTADO: %s \n", Estado);
  printf("NOME DA CIDADE: %s \n" NomedaCidade);
  printf("POPULAÇÃO: %d", Populacao);
  printf("PIB: %f", Pib);
  printf("PONTOS TURISTICOS: %d", PontosTuristicos);




return 0;
} 
