#include <stdio.h>
#include <stdlib.h>

// Função para converter unidades de comprimento
void converterComprimento() {
    double valor;
    int opcao;
    printf("\nUnidades de Comprimento:\n");
    printf("1. Metro para Centímetro\n2. Metro para Milímetro\n3. Centímetro para Metro\n4. Milímetro para Metro\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf metros = %.2lf centímetros\n", valor, valor * 100); break;
        case 2: printf("%.2lf metros = %.2lf milímetros\n", valor, valor * 1000); break;
        case 3: printf("%.2lf centímetros = %.2lf metros\n", valor, valor / 100); break;
        case 4: printf("%.2lf milímetros = %.2lf metros\n", valor, valor / 1000); break;
        default: printf("Opção inválida!\n");
    }
}

// Função para converter unidades de massa
void converterMassa() {
    double valor;
    int opcao;
    printf("\nUnidades de Massa:\n");
    printf("1. Quilograma para Grama\n2. Quilograma para Tonelada\n3. Grama para Quilograma\n4. Tonelada para Quilograma\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf quilogramas = %.2lf gramas\n", valor, valor * 1000); break;
        case 2: printf("%.2lf quilogramas = %.2lf toneladas\n", valor, valor / 1000); break;
        case 3: printf("%.2lf gramas = %.2lf quilogramas\n", valor, valor / 1000); break;
        case 4: printf("%.2lf toneladas = %.2lf quilogramas\n", valor, valor * 1000); break;
        default: printf("Opção inválida!\n");
    }
}

// Função para converter unidades de volume
void converterVolume() {
    double valor;
    int opcao;
    printf("\nUnidades de Volume:\n");
    printf("1. Litro para Mililitro\n2. Litro para Metros Cúbicos\n3. Mililitro para Litro\n4. Metros Cúbicos para Litro\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf litros = %.2lf mililitros\n", valor, valor * 1000); break;
        case 2: printf("%.2lf litros = %.2lf metros cúbicos\n", valor, valor / 1000); break;
        case 3: printf("%.2lf mililitros = %.2lf litros\n", valor, valor / 1000); break;
        case 4: printf("%.2lf metros cúbicos = %.2lf litros\n", valor, valor * 1000); break;
        default: printf("Opção inválida!\n");
    }
}

// Função para converter unidades de temperatura
void converterTemperatura() {
    double valor;
    int opcao;
    printf("\nUnidades de Temperatura:\n");
    printf("1. Celsius para Fahrenheit\n2. Celsius para Kelvin\n3. Fahrenheit para Celsius\n4. Kelvin para Celsius\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf °C = %.2lf °F\n", valor, (valor * 9/5) + 32); break;
        case 2: printf("%.2lf °C = %.2lf K\n", valor, valor + 273.15); break;
        case 3: printf("%.2lf °F = %.2lf °C\n", valor, (valor - 32) * 5/9); break;
        case 4: printf("%.2lf K = %.2lf °C\n", valor, valor - 273.15); break;
        default: printf("Opção inválida!\n");
    }
}

// Função para converter unidades de velocidade
void converterVelocidade() {
    double valor;
    int opcao;
    printf("\nUnidades de Velocidade:\n");
    printf("1. Km/h para m/s\n2. Km/h para mph\n3. m/s para Km/h\n4. mph para Km/h\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf km/h = %.2lf m/s\n", valor, valor / 3.6); break;
        case 2: printf("%.2lf km/h = %.2lf mph\n", valor, valor / 1.609); break;
        case 3: printf("%.2lf m/s = %.2lf km/h\n", valor, valor * 3.6); break;
        case 4: printf("%.2lf mph = %.2lf km/h\n", valor, valor * 1.609); break;
        default: printf("Opção inválida!\n");
    }
}

// Função para converter unidades de potência
void converterPotencia() {
    double valor;
    int opcao;
    printf("\nUnidades de Potência:\n");
    printf("1. Watts para Quilowatts\n2. Watts para Cavalos-vapor\n3. Quilowatts para Watts\n4. Cavalos-vapor para Watts\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf W = %.2lf kW\n", valor, valor / 1000); break;
        case 2: printf("%.2lf W = %.2lf cv\n", valor, valor / 735.5); break;
        case 3: printf("%.2lf kW = %.2lf W\n", valor, valor * 1000); break;
        case 4: printf("%.2lf cv = %.2lf W\n", valor, valor * 735.5); break;
        default: printf("Opção inválida!\n");
    }
}

// Função para converter unidades de área
void converterArea() {
    double valor;
    int opcao;
    printf("\nUnidades de Área:\n");
    printf("1. Metro quadrado para Centímetro quadrado\n2. Centímetro quadrado para Metro quadrado\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf m^2 = %.2lf cm^2\n", valor, valor * 10000); break;
        case 2: printf("%.2lf cm^2 = %.2lf m^2\n", valor, valor / 10000); break;
        default: printf("Opção inválida!\n");
    }
}

// Função para converter unidades de tempo
void converterTempo() {
    double valor;
    int opcao;
    printf("\nUnidades de Tempo:\n");
    printf("1. Segundos para Minutos\n2. Minutos para Horas\n3. Horas para Segundos\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf segundos = %.2lf minutos\n", valor, valor / 60); break;
        case 2: printf("%.2lf minutos = %.2lf horas\n", valor, valor / 60); break;
        case 3: printf("%.2lf horas = %.2lf segundos\n", valor, valor * 3600); break;
        default: printf("Opção inválida!\n");
    }
}

// Função para converter unidades de dados
void converterDados() {
    double valor;
    int opcao;
    printf("\nUnidades de Dados:\n");
    printf("1. Bits para Bytes\n2. Bytes para Kilobytes\n3. Kilobytes para Megabytes\n4. Megabytes para Gigabytes\n5. Gigabytes para Terabytes\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf bits = %.2lf bytes\n", valor, valor / 8); break;
        case 2: printf("%.2lf bytes = %.2lf KB\n", valor, valor / 1024); break;
        case 3: printf("%.2lf KB = %.2lf MB\n", valor, valor / 1024); break;
        case 4: printf("%.2lf MB = %.2lf GB\n", valor, valor / 1024); break;
        case 5: printf("%.2lf GB = %.2lf TB\n", valor, valor / 1024); break;
        default: printf("Opção inválida!\n");
    }
}

// Menu principal
int main() {
    int opcao;
    do {
        printf("\nConversor de Unidades\n");
        printf("1. Comprimento\n2. Massa\n3. Volume\n4. Temperatura\n5. Velocidade\n6. Potência\n7. Área\n8. Tempo\n9. Dados\n10. Sair\n");
        printf("Escolha uma categoria: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: converterComprimento(); break;
            case 2: converterMassa(); break;
            case 3: converterVolume(); break;
            case 4: converterTemperatura(); break;
            case 5: converterVelocidade(); break;
            case 6: converterPotencia(); break;
            case 7: converterArea(); break;
            case 8: converterTempo(); break;
            case 9: converterDados(); break;
            case 10: printf("Saindo...\n"); break;
            default: printf("Opção inválida!\n");
        }
    } while (opcao != 10);

    return 0;
}
