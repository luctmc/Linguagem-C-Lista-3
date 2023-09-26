/*Enunciado: Q2
Ler um valor inteiro e apresentar uma mensagem informando se o valor é um número par ou ímpar.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int numero;

    // Solicitar ao usuário que insira um valor inteiro
    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    // Verificar se o número é par ou ímpar usando o operador de módulo (%)
    if (numero % 2 == 0) {
        printf("O valor %d é um número par.\n", numero);
    } else {
        printf("O valor %d é um número ímpar.\n", numero);
    }

    return 0;
}
