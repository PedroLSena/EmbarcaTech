#include <stdio.h>
#include <stdlib.h>

void menu()
{
    printf("\n       Digite um Número Para Escolher a Opção\n");
    printf("\n************************************************************************************\n");
    printf("| 1. Unidades de comprimento (metro, centímetro, milímetro)\n");
    printf("| 2. Unidades de massa (quilograma, grama, tonelada\n");
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


int opcaoMenu(int opcao) // escolha da função
{
    switch (opcao)
    {
    case 1:
        break;
    
    case 2:
        break;
    
    case 3:
        break;
    
    case 4:
        break;

     case 5:
        break;

    case 6:
        break;
    
    case 7:
        break;

    case 8:
        break;
    
    case 9:
        break;
    
    case 0:

        system("clear || cls");// Exclui tudo acima
        printf("\n******************\n");
        printf("\nFim do Programa\n");
        printf("\n******************\n");
        break;
    
    default:
        printf("\nInvalido\n");
        break;
    }
}

void validarNumero()
{
    int opcao = 0; //escolher menu
    int maior = 0;

    printf("\n--> ");
    do
    {
        while (scanf("%d", &opcao) != 1)    // verificar se é um número inteiro;
        {
            system("clear || cls");// Exclui tudo acima
            menu();
            printf("Erro!! \nDigite um número\n--> ");
            while(getchar() != '\n');//buffet do teclado 
        }

        if(opcao < 0 || opcao > 9)
        {
            system("clear || cls");// Exclui tudo acimas
            menu();// printar menu
            printf("Não existe na lista\nDigite Outro Número\n");
        }
        else
            maior = 1;

    } while (maior != 1);

    opcaoMenu(opcao);// Escolha dafunção do menu

}
int main(int argc, char const *argv[])
{
    menu();// printar menu
    validarNumero();// verificar se é um número
    return 0;
}
