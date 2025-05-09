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
    int jogador;

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
        //funcão fgets utilizada para capturar entrada de caracteres com espaço
    fgets(cidade, 21, stdin);
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
        //funcão setdebuf(stdin,NULL) para limpar quaisquer sobra de entrada no buffer do teclado;
    setbuf(stdin,NULL);
    printf("Digite o nome da cidade:\n");
        //funcão fgets utilizada para capturar entrada de caracteres com espaço
    fgets(cidade1, 21, stdin);
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
    printf("Carta 1:\n");
    printf("Estado:%s\n", estado);
    printf("Código:%s%s\n", estado, codigo);
    printf("Nome da Cidade:%s", cidade);
    printf("População:%d\n", populacao);
    printf("Área:%.2fkm²\n", area);
    printf("PIB:%.2f Bilhões de reais\n", pib);
    printf("Números de pontos turisticos:%d\n", turismo);
    printf("Densidade Populacional:%.2f hab/km²\n", densidade);
    printf("PIB per Capita:%.2f Reais\n", percapita);
    printf("Superpoder:%.2f\n", superpoder);
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado:%s\n", estado1);
    printf("Código:%s%s\n", estado1, codigo1);
    printf("Nome da Cidade:%s", cidade1);
    printf("População:%d\n", populacao1);
    printf("Área:%.2fkm²\n", area1);
    printf("PIB:%.2f Bilhões de reais\n", pib1);
    printf("Números de pontos turisticos:%d\n", turismo1);
    printf("Densidade Populacional:%.2f hab/km²\n", densidade1);
    printf("PIB per Capita:%.2f Reais\n", percapita1);
    printf("Superpoder:%.2f\n", superpoder1);
    printf("\n");
    printf("Comparação das Cartas\n");
    printf("\n");
    printf("Selecione o atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("Escolha: ");
    scanf("%d", &jogador);

    switch (jogador)
    {
    case 1:
        if(populacao == populacao1){
            printf("Atributo População:\n");
            printf("Carta: %s%s População: %d Habitantes\n", estado, codigo, populacao);
            printf("Carta: %s%s População: %d Habitantes\n", estado1, codigo1, populacao1);
            printf("Resultado: Empate!\n");
        } else if (populacao > populacao1){
            printf("Atributo População:\n");
            printf("Carta: %s%s População: %d Habitantes\n", estado, codigo, populacao);
            printf("Carta: %s%s População: %d Habitantes\n", estado1, codigo1, populacao1);
            printf("Resultado: Carta %s%s venceu!\n", estado, codigo);
        } else {
            printf("Atributo População:\n");
            printf("Carta: %s%s População: %d Habitantes\n", estado, codigo, populacao);
            printf("Carta: %s%s População: %d Habitantes\n", estado1, codigo1, populacao1);
            printf("Resultado: Carta %s%s venceu!\n", estado1, codigo1);
        };
    break;
    case 2:
        if(area == area1){
            printf("Atributo Área:\n");
            printf("Carta: %s%s Área: %.2f km²\n", estado, codigo, area);
            printf("Carta: %s%s Área: %.2f km²\n", estado1, codigo1, area1);
            printf("Resultado: Empate!\n");
        } else if (area > area1) {
            printf("Atributo Área:\n");
            printf("Carta: %s%s Área: %.2f km²\n", estado, codigo, area);
            printf("Carta: %s%s Área: %.2f km²\n", estado1, codigo1, area1);
            printf("Resultado: Carta %s%s venceu!\n", estado, codigo);
        } else {
            printf("Atributo Área:\n");
            printf("Carta: %s%s Área: %.2f km²\n", estado, codigo, area);
            printf("Carta: %s%s Área: %.2f km²\n", estado1, codigo1, area1);
            printf("Resultado: Carta %s%s venceu!\n", estado1, codigo1);
        };
    break;
    case 3:
        if(pib == pib1){
            printf("Atributo PIB:\n");
            printf("Carta: %s%s PIB: %.2f Bilhões de Reais\n", estado, codigo, pib);
            printf("Carta: %s%s PIB: %.2f Bilhões de Reais\n", estado1, codigo1, pib1);
            printf("Resultado: Empate!\n");
        } else if (pib > pib1) {
            printf("Atributo PIB:\n");
            printf("Carta: %s%s PIB: %.2f Bilhões de Reais\n", estado, codigo, pib);
            printf("Carta: %s%s PIB: %.2f Bilhões de Reais\n", estado1, codigo1, pib1);
            printf("Resultado: Carta %s%s venceu!\n", estado, codigo);
        } else {
            printf("Atributo PIB:\n");
            printf("Carta: %s%s PIB: %.2f Bilhões de Reais\n", estado, codigo, pib);
            printf("Carta: %s%s PIB: %.2f Bilhões de Reais\n", estado1, codigo1, pib1);
            printf("Resultado: Carta %s%s venceu!\n", estado1, codigo1);
        };
    break;
    case 4:
        if(turismo == turismo1){
            printf("Atributo Quantidade de pontos turísticos:\n");
            printf("Carta: %s%s Pontos turísticos: %d\n", estado, codigo, turismo);
            printf("Carta: %s%s Pontos turísticos: %d\n", estado1, codigo1, turismo1);
            printf("Resultado: Empate!\n");
        }
        else if (turismo > turismo1) {
            printf("Atributo Quantidade de pontos turísticos:\n");
            printf("Carta: %s%s Pontos turísticos: %d\n", estado, codigo, turismo);
            printf("Carta: %s%s Pontos turísticos: %d\n", estado1, codigo1, turismo1);
            printf("Resultado: Carta %s%s venceu!\n", estado, codigo);
        } else {
            printf("Atributo Quantidade de pontos turísticos:\n");
            printf("Carta: %s%s Pontos turísticos: %d\n", estado, codigo, turismo);
            printf("Carta: %s%s Pontos turísticos: %d\n", estado1, codigo1, turismo1);
            printf("Resultado: Carta %s%s venceu!\n", estado1, codigo1);
        };
    break;
    case 5:
        if(densidade == densidade1){
            printf("Atributo Densidade populacional:\n");
            printf("Carta: %s%s Densidade populacional: %.2f hab/km²\n", estado, codigo, densidade);
            printf("Carta: %s%s Densidade populacional: %.2f hab/km²\n", estado1, codigo1, densidade1);
            printf("Resultado: Empate!\n");
        } else if (densidade < densidade1) {
            printf("Atributo Densidade populacional:\n");
            printf("Carta: %s%s Densidade populacional: %.2f hab/km²\n", estado, codigo, densidade);
            printf("Carta: %s%s Densidade populacional: %.2f hab/km²\n", estado1, codigo1, densidade1);
            printf("Resultado: Carta %s%s venceu!\n", estado, codigo);
        } else {
            printf("Atributo Densidade populacional:\n");
            printf("Carta: %s%s Densidade populacional: %.2f hab/km²\n", estado, codigo, densidade);
            printf("Carta: %s%s Densidade populacional: %.2f hab/km²\n", estado1, codigo1, densidade1);
            printf("Resultado: Carta %s%s venceu!\n", estado1, codigo1);
        };
    break;
    default:
        printf("Opção Incorreta!\n");
        break;
    }

      return 0;
}