#include <stdio.h>

// Função para conversão de comprimento
void converterComprimento()
{
    float valor;
    int escolha;

    printf("\n=== Conversão de Comprimento ===\n");
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("\nEscolha a conversão:\n");
    printf("1. Metro para Centímetro\n");
    printf("2. Metro para Milímetro\n");
    printf("3. Centímetro para Metro\n");
    printf("4. Centímetro para Milímetro\n");
    printf("5. Milímetro para Metro\n");
    printf("6. Milímetro para Centímetro\n");
    printf("Opção: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("%.2f metros = %.2f centímetros\n", valor, valor * 100);
        break;
    case 2:
        printf("%.2f metros = %.2f milímetros\n", valor, valor * 1000);
        break;
    case 3:
        printf("%.2f centímetros = %.2f metros\n", valor, valor / 100);
        break;
    case 4:
        printf("%.2f centímetros = %.2f milímetros\n", valor, valor * 10);
        break;
    case 5:
        printf("%.2f milímetros = %.2f metros\n", valor, valor / 1000);
        break;
    case 6:
        printf("%.2f milímetros = %.2f centímetros\n", valor, valor / 10);
        break;
    default:
        printf("Opção inválida!\n");
    }
}

// Função para conversão de área
void converterArea()
{
    float valor;
    int escolha;

    printf("\n=== Conversão de Área ===\n");
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("\nEscolha a conversão:\n");
    printf("1. Metro quadrado para Centímetro quadrado\n");
    printf("2. Centímetro quadrado para Metro quadrado\n");
    printf("Opção: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("%.2f metros quadrados = %.2f centímetros quadrados\n", valor, valor * 10000);
        break;
    case 2:
        printf("%.2f centímetros quadrados = %.2f metros quadrados\n", valor, valor / 10000);
        break;
    default:
        printf("Opção inválida!\n");
    }
}
