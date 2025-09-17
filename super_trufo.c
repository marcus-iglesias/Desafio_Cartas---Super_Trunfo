/* Introdução à programação - Nível Novato 
Construção de um jogo - Super Trunfo de Países.
Sistem para cadastrar as cartas com as informações sobre as cidades.*/

#include <stdio.h>

//Início da função 
int main() {
   
    // Variáveis carta 1 
    char estado_1 [20]; // Nome do Estado   
    char codigo_1 [3]; // Código da carta
    char cidade_1 [20]; // Nome da cidade
    int populacao_1; // População da cidade 
    float area_1; // Área por km² 
    float pib_1; // PIB do local 
    int turiscos_1; // Número de ponto turísticos.


    // Variáveis carta 2 
    char estado_2 [20]; // Nome do Estado
    char codigo_2 [3]; // Código da carta
    char cidade_2 [20]; // Nome da cidade
    int populacao_2; // População da cidade
    float area_2; // Área por km²
    float pib_2; // PIB do local
    int turiscos_2; // Número de ponto turísticos.


    // Preenchimento do dados da 1ª carta 
    printf ("Cadastro da Carta 1 \n");

    // solicitação nome do estado 
    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado_1);

    // solicitação do código da carta
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo_1);

    // solicitação do nome da cidade
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade_1);

    // solicitação da quantidade populacional da cidade
    printf("Digite a quantidade populacional da cidade: \n");
    scanf("%d", &populacao_1);

    // solicitação de área em km²
    printf("Digite o tamanho da cidade em KM²: \n");
    scanf("%f", &area_1);

    // solicitação do pib da cidade
    printf("Digite o valor do PIB da cidade: \n");
    scanf("%F", &pib_1);

    // solicitação de quantidade de números turisticos
    printf("Digite a quantidade de pontos turísticos que a cidade possui: \n");
    scanf("%d", &turiscos_1);


     //exibir dados da 1ª carta 
    printf("\nCarta 1 \n");
    printf("Estado: %s\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("None da Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.3f KM²\n", area_1);
    printf("PIB: %.2f\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", turiscos_1);


    // Preenchimento do dados da 2ª carta 
    printf ("Cadastro da Carta 2 \n");

    // solicitação nome do estado 
    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado_2);

     // solicitação do código da carta
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo_2);

    // solicitação do nome da cidade
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade_2);

    // solicitação da quantidade populacional da cidade
    printf("Digite a quantidade populacional da cidade: \n");
    scanf("%d", &populacao_2);

    // solicitação de área em km²
    printf("Digite o tamanho da cidade em KM²: \n");
    scanf("%f", &area_2);

    // solicitação do pib da cidade
    printf("Digite o valor do PIB da cidade: \n");
    scanf("%F", &pib_2);

    // solicitação de quantidade de números turisticos
    printf("Digite a quantidade de pontos turísticos que a cidade possui: \n");
    scanf("%d", &turiscos_2);
   

    //exibir dados da 2ª carta
    printf("\nCarta 2 \n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("None da Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.3f KM²\n", area_2);
    printf("PIB: %.2f\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", turiscos_2);

    return 0;

} 



