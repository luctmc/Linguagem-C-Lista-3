/*Enunciado:1) PAR/ÍMPAR: Crie um programa que solicite do usuário um determinado valor inteiro, o programa
deverá verificar se o valor fornecido é um valor par ou ímpar (pesquise sobre como identificar se
um valor é par ou ímpar).
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;

    // Solicitar ao usuário que insira cinco valores
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &num3);

    printf("Digite o quarto valor: ");
    scanf("%d", &num4);

    printf("Digite o quinto valor: ");
    scanf("%d", &num5);

    // Inicialize as variáveis para manter o controle do maior e do menor valor
    int maior = num1;
    int menor = num1;

    // Verificar se os outros valores são maiores ou menores
    if (num2 > maior) {
        maior = num2;
    }
    if (num2 < menor) {
        menor = num2;
    }

    if (num3 > maior) {
        maior = num3;
    }
    if (num3 < menor) {
        menor = num3;
    }

    if (num4 > maior) {
        maior = num4;
    }
    if (num4 < menor) {
        menor = num4;
    }

    if (num5 > maior) {
        maior = num5;
    }
    if (num5 < menor) {
        menor = num5;
    }

    // Exibir o maior e o menor valor
    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);

    return 0;
}
