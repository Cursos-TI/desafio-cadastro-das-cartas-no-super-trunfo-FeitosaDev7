#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Declarando as variaveis

    int carta1, população, NúmeroDePontosTurísticos;
    double área, pib;
    char A;
    char codigo[20];
    char NomeDaCidade[50];

    // Entrada e saída de dados

    printf("Carta 1: \n");

    printf("Digite a letra que representa o estado: \n");
    scanf("%c", A);

    printf("Digite o código do estado: \n");
    scanf("%c", &codigo);

    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &NomeDaCidade);

    
    printf("Digite a população da cidade: \n");
    scanf("%d", &população);

    printf("Digite a área da cidade: \n");
    scanf("%f", &área);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &NúmeroDePontosTurísticos);

    // Exibição dos dados na tela do usuario

    printf("Carta 1: \n");
    printf("Estado: %c \n");
    printf("Código: %c \n");
    printf("Nome da Cidade: %s \n");
    printf("População: %d \n");
    printf("Área: %f \n");
    printf("PIB: %f \n");
    printf("Número de Pontos Turísticos: %d \n");

    return 0;
}
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


