#include <stdio.h>

void celsiusToFahrenheitAndKelvin(double celsius)
{
  double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
  double kelvin = celsius + 273.15;
  printf("\n%.2f °C = %.2f °F = %.2f K\n", celsius, fahrenheit, kelvin);
}

void fahrenheitToCelsiusAndKelvin(double fahrenheit)
{
  double celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
  double kelvin = celsius + 273.15;
  printf("\n%.2f °F = %.2f °C = %.2f K\n", fahrenheit, celsius, kelvin);
}

void kelvinToCelsiusAndFahrenheit(double kelvin)
{
  double celsius = kelvin - 273.15;
  double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
  printf("\n%.2f K = %.2f °C = %.2f °F\n", kelvin, celsius, fahrenheit);
}

int main()
{
  int choice;
  double temperature;

  printf("Conversor de Temperatura\n");
  printf("1. Celsius para Fahrenheit e Kelvin\n");
  printf("2. Fahrenheit para Celsius e Kelvin\n");
  printf("3. Kelvin para Celsius e Fahrenheit\n");
  printf("Escolha uma opção (1-3): ");
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    printf("\nDigite a temperatura em Celsius: ");
    scanf("%lf", &temperature);
    celsiusToFahrenheitAndKelvin(temperature);
    break;
  case 2:
    printf("\nDigite a temperatura em Fahrenheit: ");
    scanf("%lf", &temperature);
    fahrenheitToCelsiusAndKelvin(temperature);
    break;
  case 3:
    printf("\nDigite a temperatura em Kelvin: ");
    scanf("%lf", &temperature);
    kelvinToCelsiusAndFahrenheit(temperature);
    break;
  default:
    printf("\nOpção inválida!\n");
    break;
  }

  return 0;
}
