#include <stdio.h>
int main() {
//Atribuir as variaveis
    char estado1, estado2;
    char NomeCidade1[50], NomeCidade2[50], codigo1[4], codigo2[4];
    int pturisticos1, pturisticos2;
    unsigned long int populacao1, populacao2;
    float PIB1, PIB2, area1, area2, superpoder1, superpoder2, inverso_densidade1, inverso_densidade2, densidade1, densidade2, percapita1, percapita2;
//Pedindo dados ao usuario
    
    //Estados
    printf("Defina o estado com uma letra de A a B\n Estado 1: ");
    scanf(" %c", &estado1);
    printf(" Estado 2: ");
    scanf(" %c", &estado2);
    
    printf("\n");

    //Codigo das cartas

    printf("Digite o código da carta (Exemplo A01 ou B02)\n Código da carta 1: ");
    scanf(" %s", codigo1);
    printf(" Codigo da carta 2: ");
    scanf(" %s", codigo2);
    
    printf("\n");

    //Nome das cidades
    printf("Digite o nome da cidade\n Cidade 1: ");
    scanf("%s", NomeCidade1);
    printf(" Cidade 2: ");
    scanf("%s", NomeCidade2);

    printf("\n");
        
    //população
    printf("Digite o número de habitantes da: \n Cidade 1: ");
    scanf("%lu", &populacao1);
    printf("Cidade 2: ");
    scanf("%lu", &populacao2);

    printf("\n"); 
    
    //area
    printf("\n");
    printf("Digite a área da cidade em km/2: \n Cidade 1: ");
    scanf("%f", &area1) ;
    printf(" Cidade 2: ");
    scanf("%f", &area2);

    printf("\n");
    
    //PIB 
    printf("Digite o PIB cidade.\n Cidade 1: ");
    scanf("%f", &PIB1) ;
    printf(" Cidade 2: ");
    scanf("%f", &PIB2);

    printf("\n");
    
    
    //Numero de pontos turiscos.
    printf("Digite o número de pontos turisticos da: \n Cidade 1: ");
    scanf("%d", &pturisticos1);
    printf(" Cidade 2: ");
    scanf("%d", &pturisticos2);

    printf("\n");

//Calculo da densidade (população/area)
    densidade1 = (float) populacao1/area1;
    densidade2 = (float) populacao2/area2;
      
//Calculo PIB per capita (PIB/População)
    percapita1 = (float) PIB1/populacao1;
    percapita2 = (float) PIB2/populacao2;

//Calculo Inverso da densidade ( Utilizando operador ternario e evitando que seja dividido por 0, o que poderia bugar o codigo :).)
    inverso_densidade1 = (densidade1 > 0) ? (1.0f / densidade1) : 0.0f;
    inverso_densidade2 = (densidade2 > 0) ? (1.0f / densidade2) : 0.0f;

//Calculo Super Poder (A soma de todos as variaveis)
    superpoder1 = (float) populacao1 + pturisticos1 + PIB1 + area1 + inverso_densidade1;
    superpoder2 = (float) populacao2 + pturisticos2 + PIB2 + area2 + inverso_densidade2;

    //Exibição Carta 1
    printf("⊱⋅ ──────⋆. 𐙚 ˚────── ⊰\n");
    printf("ִ⊹₊⟡⋆Carta 1⊹₊⟡⋆ \nEstado: %c\n",estado1);
    printf("Código: %s\n",codigo1);
    printf("Nome da cidade: %s\n",NomeCidade1);
    printf("População: %lu\n",populacao1);
    printf("Área: %.2f\n",area1);
    printf("PIB: %.2f\n",PIB1 );
    printf("Número de Pontos Turisticos: %d\n",pturisticos1);
    printf("Densidade Populacional: %.2f\n",densidade1); 
    printf("PIB per Capita: %.2f\n",percapita1);
    printf("Super Poder: %.2f\n", superpoder1);
    
   //Exibição Carta 2
   printf("⊱⋅ ──────⋆. 𐙚 ˚────── \n");
   printf("⊹₊⟡⋆Carta 2⊹₊⟡⋆ \nEstado: %c\n",estado2);
   printf("Código: %s\n",codigo2);
   printf("Nome da cidade: %s\n",NomeCidade2);
   printf("População: %lu\n",populacao2);
   printf("Área: %.2f\n",area2);
   printf("PIB: %.2f\n",PIB2 );
   printf("Número de Pontos Turisticos: %d\n",pturisticos2);
   printf("Densidade Populacional: %.2f\n",densidade2); 
   printf("PIB per Capita: %.2f\n",percapita2);
   printf("Super Poder: %.2f\n", superpoder2);

  // Exibição da comparação das cartas, se for 0 **Carta 1 vence se for 1 **Carta 2 vence.
  printf("⊱⋅ ──────⋆. 𐙚 ˚────── \n");
  printf(" 𐙚Comparações das cartas (Se for 0 ⟡Carta 1 vence, se for 1 ⟡Carta 2 vence𐙚 \n");
  printf("População: %d\n", populacao1 > populacao2);
  printf("Área: %d\n", area1 > area2);
  printf("PIB: %d\n", PIB1 > PIB2);
  printf("Número de Pontos Turisticos: %d\n", pturisticos1 > pturisticos2);
  printf("Densidade Populacional: %d\n", densidade1 < densidade2);
  printf("PIB per Capita: %d\n", percapita1 > percapita2);
  printf("Super Poder: %d\n", superpoder1 > superpoder2);
// ***Todos em %d pois exibira um número inteiro ( 0 ou 1)
    return 0; }
