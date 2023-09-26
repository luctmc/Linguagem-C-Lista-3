/*Enunciado:Q4
Ler um valor numérico inteiro qualquer e fazer a sua apresentação caso o valor não seja maior que
TRES. Utilize apenas o .não. (da tabela de operadores lógicos) para a solução do problema. Atenção
para esse problema não deve ser utilizado os operadores relacionais.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int valor;

    // Solicitar ao usuário que insira um valor inteiro
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    // Verificar se o valor não é maior que três usando o operador "não" (!)
    if (!(valor > 3)) {
        printf("O valor é: %d\n", valor);
    }

    return 0;
}
