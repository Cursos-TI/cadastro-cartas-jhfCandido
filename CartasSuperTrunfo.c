#include <stdio.h>

int main() {
    //Declaracao das variaveis
    char estado;
    char Cidade[50];
    char codigo[4];
    int populaçao;
    float area, pib;
    int pontosTuristicos;

    //Cadastro da Carta
    printf("---Cadastro de Cartas: Super Trunfo---\n");

    printf("Digite a letra do estado (A-H): \n");
    scanf ("%c", &estado);

    printf("Digite o codigo da carta (3 letras): \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Cidade);

    printf("Digite a população: \n");
    scanf("%d", &populaçao);

    printf("Digite a área (km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

    //Exibição dos dados cadastrados
printf("\n---Carta Cadastrada---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("População: %d\n", populaçao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}
