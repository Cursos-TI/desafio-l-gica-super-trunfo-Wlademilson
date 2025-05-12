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
    int jogador, jogador1;
    int escolha,  escolha1,  escolha2,  escolha3, escolha4,  escolha5,  escolha6,  escolha7,  escolha8,  escolha9,  escolha10;
    int  escolha11,  escolha12,  escolha13,  escolha14,  escolha15,  escolha16,  escolha17,  escolha18,  escolha19,  escolha20;

    printf("### Desafio Super Trunfo - Países ###\n");
    printf("\n");
    printf("### Cadastro de Cartas ###\n");
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
    printf("### Comparação das Cartas ###\n");
    printf("\n");
    printf("Selecione dois atributos para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Superpoder\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &jogador);
    
    //Estrutura encadeada referente a escolha do primeiro atributo
    if (jogador == 1){
    printf("\n");
    printf("Selecione o segundo atributo para comparação:\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Superpoder\n");
    printf("Escolha o segundo atributo: ");
    scanf("%d", &jogador1);
    }
    if (jogador == 2){
    printf("\n");
    printf("Selecione o segundo atributo para comparação:\n");
    printf("1. População\n");
    printf("3. PIB\n");
    printf("4. Números de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Superpoder\n");
    printf("Escolha o segundo atributo: ");
    scanf("%d", &jogador1);
    }
    if (jogador == 3){
    printf("\n");
    printf("Selecione o segundo atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("4. Números de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Superpoder\n");
    printf("Escolha o segundo atributo: ");
    scanf("%d", &jogador1);
    }
    if (jogador == 4){
    printf("\n");
    printf("Selecione o segundo atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Superpoder\n");
    printf("Escolha o segundo atributo: ");
    scanf("%d", &jogador1);
    }
    if (jogador == 5){
    printf("\n");
    printf("Selecione o segundo atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de pontos turísticos\n");
    printf("6. PIB per Capita\n");
    printf("7. Superpoder\n");
    printf("Escolha o segundo atributo: ");
    scanf("%d", &jogador1);
    }
    if (jogador == 6){
    printf("\n");
    printf("Selecione o segundo atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("7. Superpoder\n");
    printf("Escolha o segundo atributo: ");
    scanf("%d", &jogador1);
    }
    if (jogador == 7){
    printf("\n");
    printf("Selecione o segundo atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per Capita\n");
    printf("Escolha o segundo atributo: ");
    scanf("%d", &jogador1);
    }

    //switch referente a escolha do primeiro atributo
    switch (jogador)
    {
    case 1:
        if(populacao == populacao1){
            printf("\n");
            printf("Atributo População:\n");
            printf("Carta: %s%s População: %d Habitantes\n", estado, codigo, populacao);
            printf("Carta: %s%s População: %d Habitantes\n", estado1, codigo1, populacao1);
            printf("Resultado: Empate!\n");
        } else if (populacao > populacao1){
            printf("\n");
            printf("Atributo População:\n");
            printf("Carta: %s%s População: %d Habitantes\n", estado, codigo, populacao);
            printf("Carta: %s%s População: %d Habitantes\n", estado1, codigo1, populacao1);
            printf("Resultado: Carta %s%s venceu!\n", estado, codigo);
        } else {
            printf("\n");
            printf("Atributo População:\n");
            printf("Carta: %s%s População: %d Habitantes\n", estado, codigo, populacao);
            printf("Carta: %s%s População: %d Habitantes\n", estado1, codigo1, populacao1);
            printf("Resultado: Carta %s%s venceu!\n", estado1, codigo1);
        };
    break;
    case 2:
        if(area == area1){
            printf("\n");
            printf("Atributo Área:\n");
            printf("Carta: %s%s Área: %.2f km²\n", estado, codigo, area);
            printf("Carta: %s%s Área: %.2f km²\n", estado1, codigo1, area1);
            printf("Resultado: Empate!\n");
        } else if (area > area1) {
            printf("\n");
            printf("Atributo Área:\n");
            printf("Carta: %s%s Área: %.2f km²\n", estado, codigo, area);
            printf("Carta: %s%s Área: %.2f km²\n", estado1, codigo1, area1);
            printf("Resultado: Carta %s%s venceu!\n", estado, codigo);
        } else {
            printf("\n");
            printf("Atributo Área:\n");
            printf("Carta: %s%s Área: %.2f km²\n", estado, codigo, area);
            printf("Carta: %s%s Área: %.2f km²\n", estado1, codigo1, area1);
            printf("Resultado: Carta %s%s venceu!\n", estado1, codigo1);
        };
    break;
    case 3:
        if(pib == pib1){
            printf("\n");
            printf("Atributo PIB:\n");
            printf("Carta: %s%s PIB: %.2f Bilhões de Reais\n", estado, codigo, pib);
            printf("Carta: %s%s PIB: %.2f Bilhões de Reais\n", estado1, codigo1, pib1);
            printf("Resultado: Empate!\n");
        } else if (pib > pib1) {
            printf("\n");
            printf("Atributo PIB:\n");
            printf("Carta: %s%s PIB: %.2f Bilhões de Reais\n", estado, codigo, pib);
            printf("Carta: %s%s PIB: %.2f Bilhões de Reais\n", estado1, codigo1, pib1);
            printf("Resultado: Carta %s%s venceu!\n", estado, codigo);
        } else {
            printf("\n");
            printf("Atributo PIB:\n");
            printf("Carta: %s%s PIB: %.2f Bilhões de Reais\n", estado, codigo, pib);
            printf("Carta: %s%s PIB: %.2f Bilhões de Reais\n", estado1, codigo1, pib1);
            printf("Resultado: Carta %s%s venceu!\n", estado1, codigo1);
        };
    break;
    case 4:
        if(turismo == turismo1){
            printf("\n");
            printf("Atributo Quantidade de pontos turísticos:\n");
            printf("Carta: %s%s Pontos turísticos: %d\n", estado, codigo, turismo);
            printf("Carta: %s%s Pontos turísticos: %d\n", estado1, codigo1, turismo1);
            printf("Resultado: Empate!\n");
        }
        else if (turismo > turismo1){
            printf("\n");
            printf("Atributo Quantidade de pontos turísticos:\n");
            printf("Carta: %s%s Pontos turísticos: %d\n", estado, codigo, turismo);
            printf("Carta: %s%s Pontos turísticos: %d\n", estado1, codigo1, turismo1);
            printf("Resultado: Carta %s%s venceu!\n", estado, codigo);
        } else {
            printf("\n");
            printf("Atributo Quantidade de pontos turísticos:\n");
            printf("Carta: %s%s Pontos turísticos: %d\n", estado, codigo, turismo);
            printf("Carta: %s%s Pontos turísticos: %d\n", estado1, codigo1, turismo1);
            printf("Resultado: Carta %s%s venceu!\n", estado1, codigo1);
        };
    break;
    case 5:
        if(densidade == densidade1){
            printf("\n");
            printf("Atributo Densidade populacional:\n");
            printf("Carta: %s%s Densidade populacional: %.2f hab/km²\n", estado, codigo, densidade);
            printf("Carta: %s%s Densidade populacional: %.2f hab/km²\n", estado1, codigo1, densidade1);
            printf("Resultado: Empate!\n");
        } else if (densidade < densidade1){
            printf("\n");
            printf("Atributo Densidade populacional:\n");
            printf("Carta: %s%s Densidade populacional: %.2f hab/km²\n", estado, codigo, densidade);
            printf("Carta: %s%s Densidade populacional: %.2f hab/km²\n", estado1, codigo1, densidade1);
            printf("Resultado: Carta %s%s venceu!\n", estado, codigo);
        } else {
            printf("\n");
            printf("Atributo Densidade populacional:\n");
            printf("Carta: %s%s Densidade populacional: %.2f hab/km²\n", estado, codigo, densidade);
            printf("Carta: %s%s Densidade populacional: %.2f hab/km²\n", estado1, codigo1, densidade1);
            printf("Resultado: Carta %s%s venceu!\n", estado1, codigo1);
        };
    break;
    case 6:
        if( percapita == percapita1){
            printf("\n");
            printf("Atributo PIB per Capita:\n");
            printf("Carta: %s%s PIB per capita: %.2f Reais\n ", estado, codigo, percapita);
            printf("Carta: %s%s PIB per capita: %.2f Reais\n ", estado1, codigo1, percapita1);
            printf("Resultado: Empate!\n");
        } else if (percapita > percapita1){
            printf("\n");
            printf("Atributo PIB per Capita:\n");
            printf("Carta: %s%s PIB per capita: %.2f Reais\n ", estado, codigo, percapita);
            printf("Carta: %s%s PIB per capita: %.2f Reais\n ", estado1, codigo1, percapita1);
            printf("Resultado: Carta %s%s venceu!\n", estado, codigo);
        } else {
            printf("\n");
            printf("Atributo PIB per Capita:\n");
            printf("Carta: %s%s PIB per capita: %.2f Reais\n ", estado, codigo, percapita);
            printf("Carta: %s%s PIB per capita: %.2f Reais\n ", estado1, codigo1, percapita1);
            printf("Resultado: Carta %s%s venceu!\n", estado1, codigo1);
        };
    break;
    case 7:
        if( superpoder == superpoder1){
            printf("\n");
            printf("Atributo Superpoder:\n");
            printf("Carta: %s%s Superpoder: %2.f\n ", estado, codigo, superpoder);
            printf("Carta: %s%s Superpoder: %2.f\n ", estado1, codigo1, superpoder1);
            printf("Resultado: Empate!\n");
        } else if (superpoder > superpoder1){
            printf("\n");
            printf("Atributo Superpoder:\n");
            printf("Carta: %s%s Superpoder: %2.f\n ", estado, codigo, superpoder);
            printf("Carta: %s%s Superpoder: %.2f\n ", estado1, codigo1, superpoder1);
            printf("Resultado: Carta %s%s venceu!\n", estado, codigo);
        } else {
            printf("\n");
            printf("Atributo Superpoder:\n");
            printf("Carta: %s%s Superpoder: %.2f\n ", estado, codigo, superpoder);
            printf("Carta: %s%s Superpoder: %.2f\n ", estado1, codigo1, superpoder1);
            printf("Resultado: Carta %s%s venceu!\n", estado1, codigo1);
        };
    break;
    default:
        printf("\n");
        printf("Opção Incorreta!\n");
        break;
    }
    
    //switch referente a segunda escolha de atributo
    switch (jogador1){
    case 1:
        if(populacao == populacao1){
            printf("\n");
            printf("Atributo População:\n");
            printf("Carta: %s%s População: %d Habitantes\n", estado, codigo, populacao);
            printf("Carta: %s%s População: %d Habitantes\n", estado1, codigo1, populacao1);
            printf("Resultado: Empate!\n");
        } else if (populacao > populacao1){
            printf("\n");
            printf("Atributo População:\n");
            printf("Carta: %s%s População: %d Habitantes\n", estado, codigo, populacao);
            printf("Carta: %s%s População: %d Habitantes\n", estado1, codigo1, populacao1);
            printf("Resultado: Carta %s%s venceu!\n", estado, codigo);
        } else {
            printf("\n");
            printf("Atributo População:\n");
            printf("Carta: %s%s População: %d Habitantes\n", estado, codigo, populacao);
            printf("Carta: %s%s População: %d Habitantes\n", estado1, codigo1, populacao1);
            printf("Resultado: Carta %s%s venceu!\n", estado1, codigo1);
        };
    break;
    case 2:
        if(area == area1){
            printf("\n");
            printf("Atributo Área:\n");
            printf("Carta: %s%s Área: %.2f km²\n", estado, codigo, area);
            printf("Carta: %s%s Área: %.2f km²\n", estado1, codigo1, area1);
            printf("Resultado: Empate!\n");
        } else if (area > area1) {
            printf("\n");
            printf("Atributo Área:\n");
            printf("Carta: %s%s Área: %.2f km²\n", estado, codigo, area);
            printf("Carta: %s%s Área: %.2f km²\n", estado1, codigo1, area1);
            printf("Resultado: Carta %s%s venceu!\n", estado, codigo);
        } else {
            printf("\n");
            printf("Atributo Área:\n");
            printf("Carta: %s%s Área: %.2f km²\n", estado, codigo, area);
            printf("Carta: %s%s Área: %.2f km²\n", estado1, codigo1, area1);
            printf("Resultado: Carta %s%s venceu!\n", estado1, codigo1);
        };
    break;
    case 3:
        if(pib == pib1){
            printf("\n");
            printf("Atributo PIB:\n");
            printf("Carta: %s%s PIB: %.2f Bilhões de Reais\n", estado, codigo, pib);
            printf("Carta: %s%s PIB: %.2f Bilhões de Reais\n", estado1, codigo1, pib1);
            printf("Resultado: Empate!\n");
        } else if (pib > pib1) {
            printf("\n");
            printf("Atributo PIB:\n");
            printf("Carta: %s%s PIB: %.2f Bilhões de Reais\n", estado, codigo, pib);
            printf("Carta: %s%s PIB: %.2f Bilhões de Reais\n", estado1, codigo1, pib1);
            printf("Resultado: Carta %s%s venceu!\n", estado, codigo);
        } else {
            printf("\n");
            printf("Atributo PIB:\n");
            printf("Carta: %s%s PIB: %.2f Bilhões de Reais\n", estado, codigo, pib);
            printf("Carta: %s%s PIB: %.2f Bilhões de Reais\n", estado1, codigo1, pib1);
            printf("Resultado: Carta %s%s venceu!\n", estado1, codigo1);
        };
    break;
    case 4:
        if(turismo == turismo1){
            printf("\n");
            printf("Atributo Quantidade de pontos turísticos:\n");
            printf("Carta: %s%s Pontos turísticos: %d\n", estado, codigo, turismo);
            printf("Carta: %s%s Pontos turísticos: %d\n", estado1, codigo1, turismo1);
            printf("Resultado: Empate!\n");
        }
        else if (turismo > turismo1){
            printf("\n");
            printf("Atributo Quantidade de pontos turísticos:\n");
            printf("Carta: %s%s Pontos turísticos: %d\n", estado, codigo, turismo);
            printf("Carta: %s%s Pontos turísticos: %d\n", estado1, codigo1, turismo1);
            printf("Resultado: Carta %s%s venceu!\n", estado, codigo);
        } else {
            printf("\n");
            printf("Atributo Quantidade de pontos turísticos:\n");
            printf("Carta: %s%s Pontos turísticos: %d\n", estado, codigo, turismo);
            printf("Carta: %s%s Pontos turísticos: %d\n", estado1, codigo1, turismo1);
            printf("Resultado: Carta %s%s venceu!\n", estado1, codigo1);
        };
    break;
    case 5:
        if(densidade == densidade1){
            printf("\n");
            printf("Atributo Densidade populacional:\n");
            printf("Carta: %s%s Densidade populacional: %.2f hab/km²\n", estado, codigo, densidade);
            printf("Carta: %s%s Densidade populacional: %.2f hab/km²\n", estado1, codigo1, densidade1);
            printf("Resultado: Empate!\n");
        } else if (densidade < densidade1){
            printf("\n");
            printf("Atributo Densidade populacional:\n");
            printf("Carta: %s%s Densidade populacional: %.2f hab/km²\n", estado, codigo, densidade);
            printf("Carta: %s%s Densidade populacional: %.2f hab/km²\n", estado1, codigo1, densidade1);
            printf("Resultado: Carta %s%s venceu!\n", estado, codigo);
        } else {
            printf("\n");
            printf("Atributo Densidade populacional:\n");
            printf("Carta: %s%s Densidade populacional: %.2f hab/km²\n", estado, codigo, densidade);
            printf("Carta: %s%s Densidade populacional: %.2f hab/km²\n", estado1, codigo1, densidade1);
            printf("Resultado: Carta %s%s venceu!\n", estado1, codigo1);
        };
    break;
    case 6:
        if( percapita == percapita1){
            printf("\n");
            printf("Atributo PIB per Capita:\n");
            printf("Carta: %s%s PIB per capita: %.2f Reais\n ", estado, codigo, percapita);
            printf("Carta: %s%s PIB per capita: %.2f Reais\n ", estado1, codigo1, percapita1);
            printf("Resultado: Empate!\n");
        } else if (percapita > percapita1){
            printf("\n");
            printf("Atributo PIB per Capita:\n");
            printf("Carta: %s%s PIB per capita: %.2f Reais\n ", estado, codigo, percapita);
            printf("Carta: %s%s PIB per capita: %.2f Reais\n ", estado1, codigo1, percapita1);
            printf("Resultado: Carta %s%s venceu!\n", estado, codigo);
        } else {
            printf("\n");
            printf("Atributo PIB per Capita:\n");
            printf("Carta: %s%s PIB per capita: %.2f Reais\n ", estado, codigo, percapita);
            printf("Carta: %s%s PIB per capita: %.2f Reais\n ", estado1, codigo1, percapita1);
            printf("Resultado: Carta %s%s venceu!\n", estado1, codigo1);
        };
    break;
    case 7:
        if( superpoder == superpoder1){
            printf("\n");
            printf("Atributo Superpoder:\n");
            printf("Carta: %s%s Superpoder: %2.f\n ", estado, codigo, superpoder);
            printf("Carta: %s%s Superpoder: %2.f\n ", estado1, codigo1, superpoder1);
            printf("Resultado: Empate!\n");
        } else if (superpoder > superpoder1){
            printf("\n");
            printf("Atributo Superpoder:\n");
            printf("Carta: %s%s Superpoder: %2.f\n ", estado, codigo, superpoder);
            printf("Carta: %s%s Superpoder: %.2f\n ", estado1, codigo1, superpoder1);
            printf("Resultado: Carta %s%s venceu!\n", estado, codigo);
        } else {
            printf("\n");
            printf("Atributo Superpoder:\n");
            printf("Carta: %s%s Superpoder: %.2f\n ", estado, codigo, superpoder);
            printf("Carta: %s%s Superpoder: %.2f\n ", estado1, codigo1, superpoder1);
            printf("Resultado: Carta %s%s venceu!\n", estado1, codigo1);
        };
    break;
    default:
        printf("\n");
        printf("Opção Incorreta!\n");
        break;
    }


    // Tabela de verificações de possíveis escolhas de atributos 
    escolha = jogador == 1 && jogador1 == 2 || jogador == 2 && jogador1 == 1 ? 1 || 1 : 0 ;
    escolha1 = jogador == 1 && jogador1 == 3 || jogador == 3 && jogador1 == 1 ? 1 || 1 : 0 ;
    escolha2 = jogador == 1 && jogador1 == 4 || jogador == 4 && jogador1 == 1 ? 1 || 1 : 0 ;
    escolha3 = jogador == 1 && jogador1 == 5 || jogador == 5 && jogador1 == 1 ? 1 || 1 : 0 ;
    escolha4 = jogador == 1 && jogador1 == 6 || jogador == 6 && jogador1 == 1 ? 1 || 1 : 0 ;
    escolha5 = jogador == 1 && jogador1 == 7 || jogador == 7 && jogador1 == 1 ? 1 || 1 : 0 ;

    escolha6 = jogador == 2 && jogador1 == 3 || jogador == 3 && jogador1 == 2 ? 1 || 1 : 0 ;
    escolha7 = jogador == 2 && jogador1 == 4 || jogador == 4 && jogador1 == 2 ? 1 || 1 : 0 ;
    escolha8 = jogador == 2 && jogador1 == 5 || jogador == 5 && jogador1 == 2 ? 1 || 1 : 0 ;
    escolha9 = jogador == 2 && jogador1 == 6 || jogador == 6 && jogador1 == 2 ? 1 || 1 : 0 ;
    escolha10 = jogador == 2 && jogador1 == 7 || jogador == 7 && jogador1 == 2 ? 1 || 1 : 0 ;

    escolha11 = jogador == 3 && jogador1 == 4 || jogador == 4 && jogador1 == 3 ? 1 || 1 : 0 ;
    escolha12 = jogador == 3 && jogador1 == 5 || jogador == 5 && jogador1 == 3 ? 1 || 1 : 0 ;
    escolha13 = jogador == 3 && jogador1 == 6 || jogador == 6 && jogador1 == 3 ? 1 || 1 : 0 ;
    escolha14 = jogador == 3 && jogador1 == 7 || jogador == 7 && jogador1 == 3 ? 1 || 1 : 0 ;

    escolha15 = jogador == 4 && jogador1 == 5 || jogador == 5 && jogador1 == 4 ? 1 || 1 : 0 ;
    escolha16 = jogador == 4 && jogador1 == 6 || jogador == 6 && jogador1 == 4 ? 1 || 1 : 0 ;
    escolha17 = jogador == 4 && jogador1 == 7 || jogador == 7 && jogador1 == 4 ? 1 || 1 : 0 ;

    escolha18 = jogador == 5 && jogador1 == 6 || jogador == 6 && jogador1 == 5 ? 1 || 1 : 0 ;
    escolha19 = jogador == 5 && jogador1 == 7 || jogador == 7 && jogador1 == 5 ? 1 || 1 : 0 ;

    escolha20 = jogador == 6 && jogador1 == 7 || jogador == 7 && jogador1 == 6 ? 1 || 1 : 0 ;

    // Estrutura de decisão encadeado referente as escolhas dos dois atributos
    if (escolha){
            printf("\n");
            printf("Você escolheu os atributos População e Área\n");
        if((populacao + area) == (populacao1 + area1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (populacao + area));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (populacao1 + area1));
            printf("Resultado: Empate!");
        } else if ((populacao + area) > (populacao1 + area1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (populacao + area));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (populacao1 + area1));
            printf("Resultado: Carta %s%s venceu!", estado, codigo);
        } else {
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (populacao + area));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (populacao1 + area1));
            printf("Resultado: Carta %s%s venceu!", estado1, codigo1);
        };
    } else if (escolha1){
            printf("\n");
            printf("Você escolheu os atributos População e PIB\n");
        if((populacao + pib) == (populacao1 + pib1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (populacao + pib));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (populacao1 + pib1));
            printf("Resultado: Empate!");
        } else if ((populacao + pib) > (populacao1 + pib1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (populacao + pib));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (populacao1 + pib1));
            printf("Resultado: Carta %s%s venceu!", estado, codigo);
        } else {
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (populacao + pib));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (populacao1 + pib1));
            printf("Resultado: Carta %s%s venceu!", estado1, codigo1);
        };    
    } else if (escolha2){
            printf("\n");
            printf("Você escolheu os atributos População e Pontos Turísticos\n");
        if((populacao + turismo) == (populacao1 + turismo1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (populacao + turismo));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (populacao1 + turismo1));
            printf("Resultado: Empate!");
        } else if ((populacao + turismo) > (populacao1 + turismo1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (populacao + turismo));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (populacao1 + turismo1));
            printf("Resultado: Carta %s%s venceu!", estado, codigo);
        } else {
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (populacao + turismo));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (populacao1 + turismo1));
            printf("Resultado: Carta %s%s venceu!", estado1, codigo1);
        };  
    } else if (escolha3){
            printf("\n");
            printf("Você escolheu os atributos População e Densidade Populacional\n");
        if((populacao + densidade) == (populacao1 + densidade1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (populacao + densidade));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (populacao1 + densidade1));
            printf("Resultado: Empate!");
        } else if ((populacao + densidade) > (populacao1 + densidade1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (populacao + densidade));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (populacao1 + densidade1));
            printf("Resultado: Carta %s%s venceu!", estado, codigo);
        } else {
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (populacao + densidade));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (populacao1 + densidade1));
            printf("Resultado: Carta %s%s venceu!", estado1, codigo1);
        };  
    } else if (escolha4){
            printf("\n");
            printf("Você escolheu os atributos População e PIB per capita\n");
        if((populacao + percapita) == (populacao1 + percapita1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (populacao + percapita));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (populacao1 + percapita1));
            printf("Resultado: Empate!");
        } else if ((populacao + percapita) > (populacao1 + percapita1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (populacao + percapita));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (populacao1 + percapita1));
            printf("Resultado: Carta %s%s venceu!", estado, codigo);
        } else {
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (populacao + percapita));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (populacao1 + percapita1));
            printf("Resultado: Carta %s%s venceu!", estado1, codigo1);
        };  
    } else if (escolha5){
            printf("\n");    
            printf("Você escolheu os atributos População e Superpoder\n");
        if((populacao + superpoder) == (populacao1 + superpoder1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (populacao + superpoder));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (populacao1 + superpoder1));
            printf("Resultado: Empate!");
        } else if ((populacao + superpoder) > (populacao1 + superpoder1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (populacao + superpoder));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (populacao1 + superpoder1));
            printf("Resultado: Carta %s%s venceu!", estado, codigo);
        } else {
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (populacao + superpoder));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (populacao1 + superpoder1));
            printf("Resultado: Carta %s%s venceu!", estado1, codigo1);
        };  
    } else if (escolha6){
            printf("\n");
            printf("Você escolheu os atributos Área e PIB\n");
        if((area + pib) == (area1 + pib1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (area + pib));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (area1 + pib1));
            printf("Resultado: Empate!");
        } else if ((area + pib) > (area1 + pib1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (area + pib));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (area1 + pib1));
            printf("Resultado: Carta %s%s venceu!", estado, codigo);
        } else {
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (area + pib));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (area1 + pib1));
            printf("Resultado: Carta %s%s venceu!", estado1, codigo1);
        };  
    } else if (escolha7){
            printf("\n");
            printf("Você escolheu os atributos Área e Pontos turísticos\n");
        if((area + turismo) == (area1 + turismo1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (area + turismo));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (area1 + turismo1));
            printf("Resultado: Empate!");
        } else if ((area + turismo) > (area1 + turismo1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (area + turismo));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (area1 + turismo1));
            printf("Resultado: Carta %s%s venceu!", estado, codigo);
        } else {
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (area + turismo));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (area1 + turismo1));
            printf("Resultado: Carta %s%s venceu!", estado1, codigo1);
        };  
    } else if (escolha8){
            printf("\n");
            printf("Você escolheu os atributos Área e Densidade populacional\n");
        if((area + densidade) == (area1 + densidade1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (area + densidade));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (area1 + densidade1));
            printf("Resultado: Empate!");
        } else if ((area + densidade) > (area1 + densidade1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (area + densidade));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (area1 + densidade1));
            printf("Resultado: Carta %s%s venceu!", estado, codigo);
        } else {
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (area + densidade));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (area1 + densidade1));
            printf("Resultado: Carta %s%s venceu!", estado1, codigo1);
        };  
    } else if (escolha9){
            printf("\n");
            printf("Você escolheu os atributos Área e PIB per capita\n");
        if((area + percapita) == (area1 + percapita1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (area + percapita));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (area1 + percapita1));
            printf("Resultado: Empate!");
        } else if ((area + percapita) > (area1 + percapita1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (area + percapita));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (area1 + percapita1));
            printf("Resultado: Carta %s%s venceu!", estado, codigo);
        } else {
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (area + percapita));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (area1 + percapita1));
            printf("Resultado: Carta %s%s venceu!", estado1, codigo1);
        };  
    } else if (escolha10){
            printf("\n");
            printf("Você escolheu os atributos Área e Superpoder\n");
        if((area + superpoder) == (area1 + superpoder1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (area + superpoder));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (area1 + superpoder1));
            printf("Resultado: Empate!");
        } else if ((area + superpoder) > (area1 + superpoder1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (area + superpoder));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (area1 + superpoder1));
            printf("Resultado: Carta %s%s venceu!", estado, codigo);
        } else {
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (area + superpoder));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (area1 + superpoder1));
            printf("Resultado: Carta %s%s venceu!", estado1, codigo1);
        };
    } else if (escolha11){
            printf("\n");
            printf("Você escolheu os atributos PIB e Pontos turísticos\n");
        if((pib + turismo) == (pib1 + turismo1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (pib + turismo));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (pib1 + turismo1));
            printf("Resultado: Empate!");
        } else if ((pib + turismo) > (pib1 + turismo1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (pib + turismo));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (pib1 + turismo1));
            printf("Resultado: Carta %s%s venceu!", estado, codigo);
        } else {
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (pib + turismo));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (pib1 + turismo1));
            printf("Resultado: Carta %s%s venceu!", estado1, codigo1);
           
        };
    } else if (escolha12){
            printf("\n");
            printf("Você escolheu os atributos PIB e Densidade populacional\n");
        if((pib + densidade) == (pib1 + densidade1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (pib + densidade));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (pib1 + densidade1));
            printf("Resultado: Empate!");
        } else if ((pib + densidade) > (pib1 + densidade1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (pib + densidade));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (pib1 + densidade1));
            printf("Resultado: Carta %s%s venceu!", estado, codigo);
        } else {
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (pib + densidade));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (pib1 + densidade1));
            printf("Resultado: Carta %s%s venceu!", estado1, codigo1);
        };
    } else if (escolha13){
            printf("\n");
            printf("Você escolheu os atributos PIB e PIB per capita\n");
        if((pib + percapita) == (pib1 + percapita1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (pib + percapita));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (pib1 + percapita1));
            printf("Resultado: Empate!");
        } else if ((pib + percapita) > (pib1 + percapita1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (pib + percapita));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (pib1 + percapita1));
            printf("Resultado: Carta %s%s venceu!", estado, codigo);
        } else {
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (pib + percapita));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (pib1 + percapita1));
            printf("Resultado: Carta %s%s venceu!", estado1, codigo1);
        };
    } else if (escolha14){
            printf("\n");
            printf("Você escolheu os atributos PIB e Superpoder\n");
        if((pib + superpoder) == (pib1 + superpoder1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (pib + superpoder));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (pib1 + superpoder1));
            printf("Resultado: Empate!");
        } else if ((pib + superpoder) > (pib1 + superpoder1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (pib + superpoder));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (pib1 + superpoder1));
            printf("Resultado: Carta %s%s venceu!", estado, codigo);
        } else {
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (pib + superpoder));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (pib1 + superpoder1));
            printf("Resultado: Carta %s%s venceu!", estado1, codigo1);
        };
    } else if (escolha15){
            printf("\n");
            printf("Você escolheu os atributos Pontos turísticos e Densidade populacional\n");
        if((turismo + densidade) == (turismo1 + densidade1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (turismo + densidade));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (turismo1 + densidade1));
            printf("Resultado: Empate!");
        } else if ((turismo + densidade) > (turismo1 + densidade1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (pib + densidade));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (pib1 + densidade1));
            printf("Resultado: Carta %s%s venceu!", estado, codigo);
        } else {
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (pib + turismo));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (pib1 + turismo1));
            printf("Resultado: Carta %s%s venceu!", estado1, codigo1);
        };
    } else if (escolha16){
            printf("\n");
            printf("Você escolheu os atributos Pontos turísticos e PIB per capita\n");
        if((turismo + percapita) == (turismo1 + percapita1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (turismo + percapita));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (turismo1 + percapita1));
        } else if ((turismo + percapita) > (turismo1 + percapita1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (pib + percapita));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (pib1 + percapita1));
            printf("Resultado: Carta %s%s venceu!", estado, codigo);
        } else {
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (pib + turismo));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (pib1 + turismo1));
            printf("Resultado: Carta %s%s venceu!", estado1, codigo1);
        };
    } else if (escolha17){
            printf("\n");
            printf("Você escolheu os atributos Pontos turísticos e Superpoder\n");
        if((turismo + superpoder) == (turismo1 + superpoder1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (turismo + superpoder));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (turismo1 + superpoder1));
        } else if ((turismo + superpoder) > (turismo1 + superpoder1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (pib + superpoder));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (pib1 + superpoder1));
            printf("Resultado: Carta %s%s venceu!", estado, codigo);
        } else {
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (pib + superpoder));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (pib1 + superpoder1));
            printf("Resultado: Carta %s%s venceu!", estado1, codigo1);
        };
    } else if (escolha18){
            printf("\n");
            printf("Você escolheu os atributos Densidade populacional e PIB per capita\n");
        if((densidade + percapita) == (densidade1 + percapita1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (densidade + percapita));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (densidade1 + percapita1));
        } else if ((densidade + percapita) > (densidade1 + percapita1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (densidade + percapita));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (densidade1 + percapita1));
            printf("Resultado: Carta %s%s venceu!", estado, codigo);
        } else {
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (densidade + percapita));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (densidade1 + percapita1));
            printf("Resultado: Carta %s%s venceu!", estado1, codigo1);
        };
    } else if (escolha19){
            printf("\n");
            printf("Você escolheu os atributos Densidade populacional e Superpoder\n");
        if((densidade + superpoder) == (densidade1 + superpoder1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (densidade + superpoder));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (densidade1 + superpoder1));
        } else if ((densidade + superpoder) > (densidade1 + superpoder1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (densidade + superpoder));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (densidade1 + superpoder1));
            printf("Resultado: Carta %s%s venceu!", estado, codigo);
        } else {
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (densidade + superpoder));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (densidade1 + superpoder1));
            printf("Resultado: Carta %s%s venceu!", estado1, codigo1);
        };
    } else if (escolha20){
            printf("\n");
            printf("Você escolheu os atributos PIB per capita e Superpoder\n");
        if((percapita + superpoder) == (percapita1 + superpoder1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (percapita + superpoder));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (percapita1 + superpoder1));
        } else if ((percapita + superpoder) > (percapita1 + superpoder1)){
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (percapita + superpoder));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (percapita1 + superpoder1));
            printf("Resultado: Carta %s%s venceu!", estado, codigo);
        } else {
            printf("\n");
            printf("Soma dos Atributos\n");
            printf("Carta: %s%s Valor: %.2f\n", estado, codigo, (percapita + superpoder));
            printf("Carta: %s%s Valor: %.2f\n", estado1, codigo1, (percapita1 + superpoder1));
            printf("Resultado: Carta %s%s venceu!", estado1, codigo1);
        };


    }

    


      return 0;
}