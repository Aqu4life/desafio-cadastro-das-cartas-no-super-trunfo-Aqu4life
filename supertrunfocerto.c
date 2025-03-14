#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {

    // Declaração de variáveis para armazenar os dados

    char estado1[50] = "Distrito Federal";
    char codigo1[4] = "A00";
    char cidade1[50] = "Planaltina";
    int populacao1 = 10000;
    float area1 = 100000;
    float pib1 = 10000000;
    int pontur1 = 10;

    char estado2[50] = "Minas Gerais";
    char codigo2[4] = "B00";
    char cidade2[50] = "Unaí";
    int populacao2 = 10000;
    float area2 = 100000;
    float pib2 = 1000000;
    int pontur2 = 10;

    // Captação dos dados da 1° carta

printf("Registro de cartas do jogo Super Trunfo - países. \nRegistre conforme a informação solicitada \n");
    
printf("Digite o Estado: (Utilize letras de A ao H) \n");
scanf(" %[^\n]", &estado1);

printf("Digite o código da carta: (Exemplo: A01 - Sendo A a letra do estado e 01 o número da cidade) \n");
scanf("%s", &codigo1);

printf("Digite o nome da cidade: \n");
scanf(" %[^\n]", &cidade1);

printf("Digite a população da cidade: \n");
scanf("%lu", &populacao1);

printf("Digite a área da cidade: \n");
scanf("%f", &area1);

printf("Digite o PIB da cidade: \n");
scanf("%f", &pib1);

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &pontur1);

printf("\n Carta 1: \n");

    // Exibição dos Dados da 1° carta:

printf("Estado: %s \nCódigo da Carta: %s \nCidade: %s \nPopulação: %lu \nÁrea: %.f km² \nPIB: %.lf em reais\nPontos turísticos: %d \n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontur1);

    // Captação dos dados da 2° carta

printf("\n Carta 2 \n");
    
printf("Digite o Estado: (Não repita a letra de outro estado) \n");
scanf(" %[^\n]", &estado2);

printf("Digite o código da carta: (Exemplo: A01 - Sendo A a letra do estado e 01 o número da cidade) \n");
scanf("%s", &codigo2);

printf("Digite o nome da cidade: \n");
scanf(" %[^\n]", &cidade2);

printf("Digite a população da cidade: \n");
scanf("%lu", &populacao2);

printf("Digite a área da cidade: \n");
scanf("%f", &area2);

printf("Digite o PIB da cidade: \n");
scanf("%f", &pib2);

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &pontur2);

printf("\n Carta 2: \n");

    // Exibição dos Dados da 2° carta:

printf("Estado: %s \nCódigo da Carta: %s \nCidade: %s \nPopulação: %lu \nÁrea: %.f km² \nPIB: %.lf em reais\nPpontos turísticos: %d \n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontur2);


    // Encerramento do programa
    
return 0;

}