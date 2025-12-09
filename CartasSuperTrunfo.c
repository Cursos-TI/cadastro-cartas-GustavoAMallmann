#include <stdio.h>

int main() {
  char Estado1[2];
  char NomedaCidade1[10];
  char CodigoCarta1[5];
  int Populacao1;
  float Area1;
  float Pib1;
  int PontosTuristicos1;

  char Estado2[2];
  char NomedaCidade2[10];
  char CodigoCarta2[5];
  int Populacao2;
  float Area2;
  float Pib2;
  int PontosTuristicos2;



  printf("Para começar digite as iniciais do Estado: \n");
  scanf("%s", &Estado1);

  printf("Digite o nome da Cidade: \n");
  scanf("%s", &NomedaCidade1);

  printf("Digite a quantidade da habitantes: \n");
  scanf("%d", &Populacao1);

  printf("Digite a Área em km²: \n");
  scanf("%f", &Area1);

  printf("Digite o PIB da Cidade: \n");
  scanf("%f", &Pib1);

  printf("Digite o numero de pontos Turisticos: \n");
  scanf("%d", &PontosTuristicos1);

  printf("As caracteristicas da sua Carta 01 são: \n");
  printf("ESTADO: %s \n", Estado1);
  printf("NOME: %s \n", NomedaCidade1);
  printf("POPULAÇÃO: %d \n", Populacao1);
  printf("PIB: %f \n", Pib1);
  printf("PONTOS TURISTICOS: %d \n", PontosTuristicos1);


\\ agora sera cadastrado a segunda CARTA

  printf("Cadastre sua segunda CARTA: \n");

  printf("Para começar digite as iniciais do Estado: \n");
  scanf("%s", &Estado2);

  printf("Digite o nome da Cidade: \n");
  scanf("%s", &NomedaCidade2);

  printf("Digite a quantidade da habitantes: \n");
  scanf("%d", &Populacao2);

  printf("Digite a Área em km²: \n");
  scanf("%f", &Area2);

  printf("Digite o PIB da Cidade: \n");
  scanf("%f", &Pib2);

  printf("Digite o numero de pontos Turisticos: \n");
  scanf("%d", &PontosTuristicos2);

  printf("As caracteristicas da sua Carta 02 são: \n");
  printf("ESTADO: %s \n", Estado2);
  printf("NOME: %s \n", NomedaCidade2);
  printf("POPULAÇÃO: %d \n", Populacao2);
  printf("PIB: %f \n", Pib2);
  printf("PONTOS TURISTICOS: %d \n", PontosTuristicos2);
return 0;

} 
