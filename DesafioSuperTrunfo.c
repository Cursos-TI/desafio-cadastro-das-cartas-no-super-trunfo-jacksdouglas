#include <stdio.h>

int main(){
     // Declaração de variáveis para a Carta 1
    char Estado1;
    char CodigoDaCarta1[20];
    char NomeDaCidade1[20];
    int População1;
    float Area1;
    float Pib1;
    int NumeroDePontosTuristicos1;

    // Declaração de variáveis para a Carta 2
    char Estado2;
    char CodigoDaCarta2[20];
    char NomeDaCidade2[20];
    int População2;
    float Area2;
    float Pib2; 
    int NumeroDePontosTuristicos2;
    
    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1\n");

    printf("Digite a letra do estado: \n");
    scanf("%c", &Estado1);

    printf("Digite o código do estado: \n");
    scanf("%s", &CodigoDaCarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &NomeDaCidade1);

    printf("Digite a quantidade de habitantes: \n");
    scanf("%d", &População1);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &Area1);

    printf("Digite o valor do pib: \n");
    scanf("%f", &Pib1);

    printf("Digite o número de pontos túristicos: \n");
    scanf("%d", &NumeroDePontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2\n");

    printf("Digite a letra do estado: \n");
    scanf(" %c", &Estado2);

    printf("Digite o código do estado: \n");
    scanf("%s", &CodigoDaCarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &NomeDaCidade2);

    printf("Digite a quantidade de habitantes: \n");
    scanf("%d", &População2);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &Area2);

    printf("Digite o valor do pib: \n");
    scanf("%f", &Pib2);

    printf("Digite o número de pontos túristicos: \n");
    scanf("%d", &NumeroDePontosTuristicos2);

    
    // Exibição das informações
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", CodigoDaCarta1);
    printf("Nome da cidade: %s\n", NomeDaCidade1);
    printf("Populção: %d\n", População1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reias\n", Pib1);
    printf("Número de Pontos Túristicos: %d\n", NumeroDePontosTuristicos1);

    printf("\n---Carta 2---\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", CodigoDaCarta2);
    printf("Nome da cidade: %s\n", NomeDaCidade2);
    printf("Populção: %d\n", População2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reias\n", Pib2);
    printf("Número de Pontos Túristicos: %d\n", NumeroDePontosTuristicos2);


    return 0;









}
