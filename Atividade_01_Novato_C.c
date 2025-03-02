#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída para usar funções como printf e scanf.

int main() { // Função principal do programa, ponto de entrada da execução
    // Declaração das variáveis para a Carta 01.
    char estado01;           // Variável para armazenar a letra do estado da Carta 1 (A a H), tipo char
    char codigo1[4];        // Array para o código da Carta 1 (ex.: "A01"), 3 caracteres + '\0'
    char nome1[50];         // Array para o nome da cidade da Carta 1, até 49 caracteres + '\0'
    int populacao1;         // Variável para a população da Carta 1, tipo int
    float area1;            // Variável para a área da Carta 1 em km², tipo float
    float pib1;             // Variável para o PIB da Carta 1 em bilhões de reais, tipo float
    int pontos_turisticos1; // Variável para o número de pontos turísticos da Carta 1, tipo int

    // Declaração das variáveis para a Carta 02.
    char estado02;           // Variável para armazenar a letra do estado da Carta 2 (A a H), tipo char
    char codigo2[4];        // Array para o código da Carta 2 (ex.: "B02"), 3 caracteres + '\0'
    char nome2[50];         // Array para o nome da cidade da Carta 2, até 49 caracteres + '\0'
    int populacao2;         // Variável para a população da Carta 2, tipo int
    float area2;            // Variável para a área da Carta 2 em km², tipo float
    float pib2;             // Variável para o PIB da Carta 2 em bilhões de reais, tipo float
    int pontos_turisticos2; // Variável para o número de pontos turísticos da Carta 2, tipo int

    // Registro da Carta 01.
    printf("\n===| ST - REGISTRANDO CARTA 01 - ST |===\n"); // Exibe um cabeçalho para o registro da Carta 1
    printf("Digite o estado (A a H): "); // Solicita a letra do estado para a Carta 1
    scanf(" %c", &estado01); // Lê um caractere do teclado e armazena na variável estado01
                            // O espaço antes de %c consome quebras de linha ou espaços residuais
    printf("Digite o código da carta (ex.: %c01 a %c04): ", estado01, estado01); // Solicita o código da Carta 1, mostrando o estado inserido
    scanf("%3s", codigo1); // Lê uma string de até 3 caracteres e armazena no array codigo1
    printf("Digite o nome da cidade: "); // Solicita o nome da cidade para a Carta 1
    scanf(" %[^\n]s", nome1); // Lê uma string até o Enter e armazena no array nome1
                              // %[^\n]s permite nomes com espaços, como "São Paulo"
    printf("Digite a população (em habitantes): "); // Solicita a população da Carta 1
    scanf("%d", &populacao1); // Lê um número inteiro e armazena na variável populacao1
    printf("Digite a área (em km²): "); // Solicita a área da Carta 1
    scanf("%f", &area1); // Lê um número de ponto flutuante e armazena na variável area1
    printf("Digite o PIB (em bilhões de reais): "); // Solicita o PIB da Carta 1
    scanf("%f", &pib1); // Lê um número de ponto flutuante e armazena na variável pib1
    printf("Digite o número de pontos turísticos: "); // Solicita o número de pontos turísticos da Carta 1
    scanf("%d", &pontos_turisticos1); // Lê um inteiro e armazena na variável pontos_turisticos1

    // Registro da Carta 02.
    printf("\n===| ST - REGISTRANDO CARTA 02 - ST |===\n"); // Exibe um cabeçalho para o registro da Carta 2
    printf("Digite o estado (A a H): "); // Solicita a letra do estado para a Carta 2
    scanf(" %c", &estado02); // Lê um caractere do teclado e armazena na variável estado2
    printf("Digite o código da carta (ex.: %c01 a %c04): ", estado02, estado02); // Solicita o código da Carta 2, mostrando o estado inserido
    scanf("%3s", codigo2); // Lê uma string de até 3 caracteres e armazena no array codigo2
    printf("Digite o nome da cidade: "); // Solicita o nome da cidade para a Carta 2
    scanf(" %[^\n]s", nome2); // Lê uma string até o Enter e armazena no array nome2
    printf("Digite a população (em habitantes): "); // Solicita a população da Carta 2
    scanf("%d", &populacao2); // Lê um número inteiro e armazena na variável populacao2
    printf("Digite a área (em km²): "); // Solicita a área da Carta 2
    scanf("%f", &area2); // Lê um número de ponto flutuante e armazena na variável area2
    printf("Digite o PIB (em bilhões de reais): "); // Solicita o PIB da Carta 2
    scanf("%f", &pib2); // Lê um número de ponto flutuante e armazena na variável pib2
    printf("Digite o número de pontos turísticos: "); // Solicita o número de pontos turísticos da Carta 2
    scanf("%d", &pontos_turisticos2); // Lê um inteiro e armazena na variável pontos_turisticos2

    // Exibição da Carta 01.
    printf("\n===|Carta 01:|===\n"); // Exibe um cabeçalho para os dados da Carta 1
    printf("Estado: %c\n", estado01); // Exibe o estado da Carta 1, usando %c para caractere
    printf("Código: %s\n", codigo1); // Exibe o código da Carta 1, usando %s para string
    printf("Nome da Cidade: %s\n", nome1); // Exibe o nome da cidade da Carta 1, usando %s para string
    printf("População: %d\n", populacao1); // Exibe a população da Carta 1, usando %d para inteiro
    printf("Área: %.2f km²\n", area1); // Exibe a área da Carta 1, com 2 casas decimais usando %.2f
    printf("PIB: %.2f bilhões de reais\n", pib1); // Exibe o PIB da Carta 1, com 2 casas decimais usando %.2f
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1); // Exibe os pontos turísticos da Carta 1, usando %d

    // Exibição da Carta 02.
    printf("\n===|Carta 02:|===\n"); // Exibe um cabeçalho para os dados da Carta 2
    printf("Estado: %c\n", estado02); // Exibe o estado da Carta 2, usando %c para caractere
    printf("Código: %s\n", codigo2); // Exibe o código da Carta 2, usando %s para string
    printf("Nome da Cidade: %s\n", nome2); // Exibe o nome da cidade da Carta 2, usando %s para string
    printf("População: %d\n", populacao2); // Exibe a população da Carta 2, usando %d para inteiro
    printf("Área: %.2f km²\n", area2); // Exibe a área da Carta 2, com 2 casas decimais usando %.2f
    printf("PIB: %.2f bilhões de reais\n", pib2); // Exibe o PIB da Carta 2, com 2 casas decimais usando %.2f
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2); // Exibe os pontos turísticos da Carta 2, usando %d

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}