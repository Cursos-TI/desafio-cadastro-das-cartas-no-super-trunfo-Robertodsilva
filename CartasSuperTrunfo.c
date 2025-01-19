#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int codigo_da_cidade;
    char nome_cidade[20];
    int area;
    int populacao;    
    float PIB;
    int pontos_turisticos;
    
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o nome da cidade: ");
    scanf("%s",&nome_cidade);

    printf("Digite o codigo da cidade: ");
    scanf("%d",&codigo_da_cidade);

    printf("Digite a area da cidade: ");
    scanf("%d",&area);

    printf("Digite a população da cidade: ");
    scanf("%d",&populacao);    

    printf("Digite PIB da cidade: ");
    scanf("%f",&PIB);

    printf("Quantidade de pontos turisticos da cidade: ");
    scanf("%d",&pontos_turisticos);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
   
   printf("CIDADE: %s\n ",nome_cidade);

   printf("CODIGO DA CIDADE: %d\n ",codigo_da_cidade);

   printf("AREA DA CIDADE: %d\n ",area);

   printf("POPULACAO: %d\n ",populacao);

   printf("PIB DA CIDADE: %.2f\n ",PIB);

   printf("PONTOS TURÍSTICOS: %d\n ",pontos_turisticos);
    


    return 0;
}
