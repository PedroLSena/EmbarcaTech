#include <stdio.h>
#include <stdlib.h>

// Protótipos das funções na branch
void converterComprimento();
void converterArea();

// Função para exibir o menu
void menu()
{
    printf("\n       Digite um Número Para Escolher a Opção\n");
    printf("\n************************************************************************************\n");
    printf("| 1. Unidades de comprimento (metro, centímetro, milímetro)\n");
    printf("| 2. Unidades de massa (quilograma, grama, tonelada)\n");
    printf("| 3. Unidades de volume (litro, mililitro, metros cúbicos)\n");
    printf("| 4. Unidades de temperatura (Celsius, Fahrenheit, Kelvin)\n");
    printf("| 5. Unidades de velocidade (km/h, m/s, mph)\n");
    printf("| 6. Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp)\n");
    printf("| 7. Unidades de área (metro quadrado, centímetro quadrado)\n");
    printf("| 8. Unidades de tempo (segundos, minutos, horas)\n");
    printf("| 9. Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB)\n");
    printf("| 0. Sair\n");
    printf("\n*************************************************************************************\n");
}

// Função para tratar a opção escolhida
int opcaoMenu(int opcao)
{
    switch (opcao)
    {
    case 1:
        converterComprimento(); // Chamando função da branch
        break;

    case 2:
        printf("Conversor de massa ainda não implementado.\n");
        break;

    case 3:
        printf("Conversor de volume ainda não implementado.\n");
        break;

    case 4:
        printf("Conversor de temperatura ainda não implementado.\n");
        break;

    case 5:
        printf("Conversor de velocidade ainda não implementado.\n");
        break;

    case 6:
        printf("Conversor de potência ainda não implementado.\n");
        break;

    case 7:
        converterArea(); // Chamando função da branch
        break;

    case 8:
        printf("Conversor de tempo ainda não implementado.\n");
        break;

    case 9:
        printf("Conversor de dados ainda não implementado.\n");
        break;

    case 0:
        system("clear || cls"); // Limpa o terminal
        printf("\n******************\n");
        printf("\nFim do Programa\n");
        printf("\n******************\n");
        break;

    default:
        printf("\nOpção inválida\n");
        break;
    }
}

// Função para validar a entrada do usuário
void validarNumero()
{
    int opcao = 0; // Escolher menu
    int valido = 0;

    printf("\n--> ");
    do
    {
        while (scanf("%d", &opcao) != 1) // Verificar se é um número inteiro
        {
            system("clear || cls"); // Limpa o terminal
            menu();
            printf("Erro!! \nDigite um número\n--> ");
            while (getchar() != '\n'); // Limpar buffer do teclado
        }

        if (opcao < 0 || opcao > 9)
        {
            system("clear || cls"); // Limpa o terminal
            menu();                 // Mostra o menu novamente
            printf("Opção inválida. Digite outro número.\n");
        }
        else
            valido = 1;

    } while (valido != 1);

    opcaoMenu(opcao); // Escolha da função do menu
}

// Função principal
int main(int argc, char const *argv[])
{
    menu();          // Mostrar menu
    validarNumero(); // Validar entrada do usuário
    return 0;
}
