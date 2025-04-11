#include <stdio.h> // Inclui a biblioteca padrão para funções como printf

int main() {
    // Carta 1: Informações sobre a cidade Rio de Janeiro
    int pontos_turisticos1 = 58; // Número de pontos turísticos na cidade
    float habitantes1 = 6.7; // População estimada em milhões
    float quilometros_quadrados1 = 1200.329; // Área total em km²
    float pib1 = 359.0; // Produto Interno Bruto (PIB) em bilhões de reais

    char inicial1 = 'A'; // Inicial do nome da cidade
    char estado1[] = "Rio de Janeiro"; // Nome do estado
    char nome_cidade1[] = "Rio de Janeiro"; // Nome da cidade
    char codigo1[] = "B03"; // Código de identificação da cidade

    // Exibindo informações da Carta 1
    printf("----- SUPER TRUNFO -----\n"); // Cabeçalho do jogo
    printf("Nome da Cidade: %s\n", nome_cidade1); // Nome da cidade
    printf("Código: %s\n", codigo1); // Código da cidade
    printf("Estado: %s\n", estado1); // Estado ao qual a cidade pertence
    printf("Letra inicial: %c\n", inicial1); // Letra inicial do nome da cidade
    printf("Pontos Turísticos: %d\n", pontos_turisticos1); // Quantidade de pontos turísticos
    printf("Habitantes (em milhões): %.2f\n", habitantes1); // População da cidade
    printf("Área (km²): %.3f\n", quilometros_quadrados1); // Área total da cidade
    printf("PIB (em bilhões R$): %.6f\n", pib1); // PIB da cidade
    printf("------------------------\n"); // Linha divisória

    // Carta 2: Informações sobre a cidade Guarulhos
    int pontos_turisticos2 = 10; // Número de pontos turísticos na cidade
    int numero_habitantes2 = 1200000; // População da cidade em números absolutos
    float quilometros_quadrados2 = 318.0; // Área total em km²
    float pib2 = 77.0; // Produto Interno Bruto (PIB) em bilhões de reais

    char inicial2 = 'G'; // Inicial do nome da cidade
    char estado2[] = "São Paulo"; // Nome do estado
    char nome_cidade2[] = "Guarulhos"; // Nome da cidade
    char codigo_cidade2[] = "A01"; // Código de identificação da cidade

    // Exibindo informações da Carta 2
    printf("Carta Super Trunfo:\n"); // Título da segunda carta
    printf("Nome da cidade: %s\n", nome_cidade2); // Nome da cidade
    printf("Código: %s\n", codigo_cidade2); // Código da cidade
    printf("Estado: %s\n", estado2); // Estado ao qual a cidade pertence
    printf("Inicial: %c\n", inicial2); // Letra inicial do nome da cidade
    printf("Pontos Turísticos: %d\n", pontos_turisticos2); // Quantidade de pontos turísticos
    printf("Número de Habitantes: %d\n", numero_habitantes2); // População da cidade
    printf("Área em km²: %.1f\n", quilometros_quadrados2); // Área total da cidade
    printf("PIB (em bilhões): %.1f\n", pib2); // PIB da cidade

    return 0; // Finaliza a execução do programa
}

