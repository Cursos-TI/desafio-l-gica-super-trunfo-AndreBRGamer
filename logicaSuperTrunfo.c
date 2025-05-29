#include <stdio.h>

int main () {
 
 //Carta 1
  char estado[80] = "SP";
  char codigo[80] = "A01";
  char Nome[80] = "SãoPaulo";
  int populacao = 12325000;
   float area = 1521.11;
   float PIB = 699.28;
   int PontosTuristicos = 50;
   float Densidade = (float) populacao / area;
   float pibpercapita = (float) populacao / PIB;
  float SuperPoder = populacao + area + PIB + PontosTuristicos + pibpercapita;
   
   //Carta 2
   char estado2[5] = "RJ";
   char codigo2[5] = "A02";
   char nome2[20] = "RioDeJaneiro";
   int populacao2 = 67480000;
  float area2 = 1200.25;
  float pib2 = 300.50;
  int PontosTuristicos2 = 30;
  float Densidade2 = (float) populacao2 / area2;
  float pibpercapita2 = (float) populacao2 / pib2;
  float SuperPoder2 = populacao2 + area2 + pib2 + PontosTuristicos2 + pibpercapita2;
  
  printf("CARTA 1\n");
  printf("Estado: %s\n", estado);
  printf("Codigo da Carta: %s\n", codigo);
  printf("Cidade de %s\n", Nome);
  printf("População: %d\n", populacao);
  printf("Area Por Km²: %.2f\n", area);
  printf("PIB: %f\n", PIB);
  printf("Pontos Turísticos: %d\n", PontosTuristicos);
  printf("Densidade Populacional: %.2f\n", Densidade);
  printf("PIB per Capita: %.2f\n", pibpercapita);
printf("Poder: %f\n", SuperPoder);


  printf("CARTA 2\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo da Carta: %s\n", codigo2);
  printf("Cidade de %s\n", nome2);
  printf("População: %d\n", populacao2);
  printf("Area Por Km²: %.2f\n", area2);
  printf("PIB: %f\n", pib2);
  printf("Pontos Turísticos: %d\n", PontosTuristicos2);
  printf("Densidade Populacional: %.2f\n", Densidade2);
  printf("PIB per Capita: %.2f\n", pibpercapita2);
 printf("Poder: %f\n", SuperPoder2);
 
 printf("COMPARAÇÃO\n");

 
 printf("São Paulo (SP): %d\n",populacao);
 printf("Rio de Janeiro(RJ): %d\n", populacao2);
if(populacao > populacao2){
   printf("População de São Paulo é maior.\n");
}else{printf("Rio de Janeiro tem população maior.\n");}
return 0;
   }
