#include <stdio.h>

int main() {
    char estado[2], estado1[2];
    char codigo[3], codigo1[3];
    char cidade[21], cidade1[21];
    int populacao, populacao1;
    float area, area1;
    float pib, pib1;
    int turismo, turismo1;
    float densidade, densidade1;
    float percapita, percapita1;
    float superpoder, superpoder1;

    printf("Desafio Super Trunfo - Países\n");
    printf("\n");
    printf("Cadastro de Cartas\n");
    printf("\n");
    printf("Digite o nome do primeiro estado:\n");
    scanf("%s", estado);
    printf("Digite o código:\n");
    scanf("%s", codigo);
         //funcão setdebuf(stdin,NULL) para limpar quaisquer sobra de entrada no buffer do teclado
    setbuf(stdin,NULL);
    printf("Digite o nome da cidade:\n");
    scanf("%20[^\n]", cidade);
    printf("Digite a quantidade de população:\n");
    scanf("%d", &populacao);
    printf("Digite a área do estado:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turismo);
    printf("\n");
    printf("Digite o nome do segundo estado:\n");
    scanf("%s", estado1);
    printf("Digite o código:\n");
    scanf("%s", codigo1);
         //funcão setdebuf(stdin,NULL) para limpar quaisquer sobra de entrada no buffer do teclado
    setbuf(stdin,NULL);
    printf("Digite o nome da cidade:\n");
    scanf("%20[^\n]", cidade1);
    printf("Digite a quantidade de população:\n");
    scanf("%d", &populacao1);
    printf("Digite a área do estado:\n");
    scanf("%f", &area1);
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turismo1);
    
    densidade = populacao / area;                densidade1 = populacao1 / area1;        
    percapita = pib*1000000000 / populacao;      percapita1 = pib1*1000000000 / populacao1;
    superpoder = populacao + area + pib + turismo + percapita - densidade;
    superpoder1 = populacao1 + area1 + pib1 + turismo1 + percapita1 - densidade1;

    printf("\n");
   
    printf("Comparação das Cartas\n");
    printf("\n");
    printf("Atributo: População\n");
    printf("Carta %s%s %s:%d habitantes\n", estado, codigo, cidade, populacao);
    printf("Carta %s%s %s:%d habitantes\n", estado1, codigo1, cidade1, populacao1);
        if (populacao > populacao1) {
            printf("Carta %s%s %s venceu!\n", estado, codigo, cidade);
        } else {
            printf("Carta %s%s %s venceu!\n", estado1, codigo1, cidade1);
        };
    printf("\n");
    printf("Atributo: Área\n");
    printf("Carta %s%s %s:%.2f km²\n", estado, codigo, cidade, area);
    printf("Carta %s%s %s:%.2f km²\n", estado1, codigo1, cidade1, area1);
        if (area > area1) {
            printf("Carta %s%s %s venceu!\n", estado, codigo, cidade);
        } else {
            printf("Carta %s%s %s venceu!\n", estado1, codigo1, cidade1);
        };
    printf("\n");
    printf("Atributo: PIB\n");
    printf("Carta %s%s %s:%.2f Bilhões de Reais\n", estado, codigo, cidade, pib);
    printf("Carta %s%s %s:%.2f Bilhões de Reais\n", estado1, codigo1, cidade1, pib1);
        if (pib > pib1) {
            printf("Carta %s%s %s venceu!\n", estado, codigo, cidade);
        } else {
            printf("Carta %s%s %s venceu!\n", estado1, codigo1, cidade1);
        };
    printf("\n");
    printf("Atributo: Pontos Turísticos\n");
    printf("Carta %s%s %s:%d \n", estado, codigo, cidade, turismo);
    printf("Carta %s%s %s:%d \n", estado1, codigo1, cidade1, turismo1);
        if (turismo > turismo1) {
            printf("Carta %s%s %s venceu!\n", estado, codigo, cidade);
        } else {
            printf("Carta %s%s %s venceu!\n", estado1, codigo1, cidade1);
        };
    printf("\n");
    printf("Atributo: Densidade Populacional\n");
    printf("Carta %s%s %s:%.2f hab/km²\n", estado, codigo, cidade, densidade);
    printf("Carta %s%s %s:%.2f hab/km²\n", estado1, codigo1, cidade1, densidade1);
        if (densidade < densidade1) {
            printf("Carta %s%s %s venceu!\n", estado, codigo, cidade);
        } else {
            printf("Carta %s%s %s venceu!\n", estado1, codigo1, cidade1);
        };
    printf("\n");
    printf("Atributo: PIB per Capita\n");
    printf("Carta %s%s %s:%.2f Reais\n", estado, codigo, cidade, percapita);
    printf("Carta %s%s %s:%.2f Reais\n", estado1, codigo1, cidade1, percapita1);
        if (percapita > percapita1) {
            printf("Carta %s%s %s venceu!\n", estado, codigo, cidade);
        } else {
            printf("Carta %s%s %s venceu!\n", estado1, codigo1, cidade1);
        };
    printf("\n");
    printf("Atributo: Super Poder\n");
    printf("Carta %s%s %s:%.2f \n", estado, codigo, cidade, superpoder);
    printf("Carta %s%s %s:%.2f \n", estado1, codigo1, cidade1, superpoder1);
        if (superpoder > superpoder1) {
            printf("Carta %s%s %s venceu!\n", estado, codigo, cidade);
        } else {
            printf("Carta %s%s %s venceu!\n", estado1, codigo1, cidade1);
        };
        

      return 0;
            }