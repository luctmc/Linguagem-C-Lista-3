/*Enunciado: Q3
Ler um valor numérico inteiro que seja na faixa de valores de 1 até 9. O programa deve apresentar a
mensagem “O valor está na faixa permitida!”, caso o valor esteja fora da faixa deverá exibir a
mensagem “O valor informado não é permitido pois não está na faixa de 1 a 9”.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int valor;

    // Solicitar ao usuário que insira um valor inteiro
    printf("Digite um valor inteiro na faixa de 1 a 9: ");
    scanf("%d", &valor);

    // Verificar se o valor está na faixa permitida
    if (valor >= 1 && valor <= 9) {
        printf("O valor está na faixa permitida!\n");
    } else {
        printf("O valor informado não é permitido pois não está na faixa de 1 a 9.\n");
    }

    return 0;
}
