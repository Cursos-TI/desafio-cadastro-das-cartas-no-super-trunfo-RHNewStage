#include <stdio.h>

int main () {

//aqui é a carta 18
//O nome da variável não deve ter acento!
    int Carta18; //Paraná é 18 Santa Catarina é 23
    char Estado_18[20]; //Parana
    char Codigo_18[20]; //P03
    char Nome_da_Cidade_18[20]; //Curitiba
    int Populacao_18; //1773718
    float Area_18; //em km^2 435.04
    float Pib_18; //98.00 bilhôes
    int Pontos_Turisticos_18; //39

        printf ("Carta 18 \n");

        printf ("Digite o Estado: \n");
        scanf ("%s", Estado_18);

        printf ("Digite o Codigo da carta: \n");
        scanf ("%s", Codigo_18);

        printf ("Digite o nome da cidade: \n");
        scanf ("%s", Nome_da_Cidade_18);

        printf ("Digite o número da população da cidade: \n");
        scanf ("%i", &Populacao_18);

        printf ("Digite a Area em Km^2: \n");
        scanf ("%f", &Area_18);

        printf ("Digite o Pib bruto: \n");
        scanf ("%f", &Pib_18);

        printf ("Digite a quantidade de Pontos Turisticos: \n");
        scanf ("%i", &Pontos_Turisticos_18);
     
        printf("\n"); //quero apenas pular uma linha da digitação final para o inicio da apresentação.

//aqui é a carta 23
    int Carta23; // Santa Catarina é 23
    char Estado_23[20]; // SantaCatarina
    char Codigo_23[20]; // S01
    char Nome_da_Cidade_23[20]; // Florianopolis
    int Populacao_23; //537211
    float Area_23; //em km^2 675.41
    float Pib_23; //23.55
    int Pontos_Turisticos_23; //73

        printf ("Carta 23 \n");

        printf ("Digite o Estado: \n");
        scanf ("%s", Estado_23);

        printf ("Digite o Codigo da carta: \n");
        scanf ("%s", Codigo_23);

        printf ("Digite o nome da cidade: \n");
        scanf ("%s", Nome_da_Cidade_23);

        printf ("Digite o número da população da cidade: \n");
        scanf ("%i", &Populacao_23);

        printf ("Digite a Area em Km^2: \n");
        scanf ("%f", &Area_23);

        printf ("Digite o Pib bruto: \n");
        scanf ("%f", &Pib_23);

        printf ("Digite a quantidade de Pontos Turisticos:\n");
        scanf ("%i", &Pontos_Turisticos_23);

        printf("\n");
     
//abaixo quero apresentar os dados recolhidos para carta 18.

        printf ("Nome do Estado: %s \n", Estado_18);
        printf ("Codigo da Carta: %s \n", Codigo_18);
        printf ("Nome da Cidade: %s \n", Nome_da_Cidade_18);
        printf ("Quantidade da População: %i \n", Populacao_18);
        printf ("Tamanho da Área em Km^2: %.2f \n", Area_18);
        printf ("PIB Bruto: %.2f Bilhoes \n", Pib_18);
        printf ("Quantidade de Pontos Turisticos: %i \n\n\n", Pontos_Turisticos_18);

//abaixo quero apresentar os dados recolhidos para a carta 23.

        printf ("Nome do Estado: %s \n", Estado_23);
        printf ("Codigo da Carta: %s \n", Codigo_23);
        printf ("Nome da Cidade: %s \n", Nome_da_Cidade_23);
        printf ("Quantidade da População: %i \n", Populacao_23);
        printf ("Tamanho da Área em Km^2: %.2f \n", Area_23);
        printf ("PIB Bruto: %.2f Bilhoes \n", Pib_23);
        printf ("Quantidade de Pontos Turisticos: %i \n\n", Pontos_Turisticos_23);
   
        printf("\n");

//abaixo ficará a comparação para densidade e pib 
    float DensPopulacional_18;
    float PIBpCapita_18;
    float DensPopulacional_23;
    float PIBpCapita_23;

// Calcula os valores para a Carta 18
// Adicionei a conversão para float para evitar divisao de inteiros (população = int, area = float, assim da conflito)
// Ajustei a escala do PIB para o valor real (PIB estava em bilhões e população nos milhões)
    DensPopulacional_18 = (float)Populacao_18 / Area_18;
    PIBpCapita_18 = (Pib_18 * 1000000000.0) / (float)Populacao_18;

// Calcula os valores para a Carta 23
// Fiz a mesma coisa aqui
    DensPopulacional_23 = (float)Populacao_23 / Area_23;
    PIBpCapita_23 = (Pib_23 * 1000000000.0) / (float)Populacao_23;

        printf("--- Comparacao de Dados ---\n\n");
        printf("Densidade Populacional da Carta 18: %.2f habitantes/km^2\n", DensPopulacional_18);
        printf("Densidade Populacional da Carta 23: %.2f habitantes/km^2\n\n", DensPopulacional_23);
    
        printf("PIB per Capita da Carta 18: R$%.2f/habitantes\n", PIBpCapita_18);
        printf("PIB per Capita da Carta 23: R$%.2f/habitantes\n\n", PIBpCapita_23);

        printf("Resultado da comparação do PIB per Capita:\n\n");

// Comparações
    if (PIBpCapita_18 > PIBpCapita_23) {
        printf ("Carta 18 VENCEU!\n\n");
    } else {
    if (PIBpCapita_18 == PIBpCapita_23) {
        printf ("Carta 18 e Carta 23 EMPATARAM.\n\n");
    } else {
        printf ("Carta 23 Venceu\n\n");
    }
}

return 0;
 
}
