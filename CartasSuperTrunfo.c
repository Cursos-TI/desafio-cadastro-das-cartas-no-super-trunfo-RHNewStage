#include <stdio.h>

int main () {

//Legenda: númerei as cartas conforme posição delas por ordem alfabética, o código da carta é conforme o grupo da carta na letra alfabética, exemplo (Paraná é o terceiro estado da ordem alfabetica com a letra P)
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
   
return 0;

}
