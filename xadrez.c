#include <stdio.h>

/*
  Simulação de movimentos no xadrez:
  - Torre: movimento horizontal/vertical (for)
  - Bispo: movimento diagonal (while)
  - Rainha: qualquer direção (do-while)

  Requisitos:
  - Quantidade de casas definida no código (sem entrada do usuário)
  - Imprimir a direção a cada casa percorrida
  - Usar for / while / do-while (uma estrutura para cada peça)
*/

int main() {
    /* ---------- Configurações (nº de casas) ---------- */
    const int passosTorre  = 5;  /* Torre: 5 casas à Direita */
    const int passosBispo  = 5;  /* Bispo: 5 casas na diagonal Cima Direita */
    const int passosRainha = 8;  /* Rainha: 8 casas à Esquerda */

    /* Strings de direção (somente strings e inteiros) */
    const char* CIMA           = "Cima";
    const char* BAIXO          = "Baixo";
    const char* ESQUERDA       = "Esquerda";
    const char* DIREITA        = "Direita";
    const char* CIMA_DIREITA   = "Cima Direita";
    /* const char* CIMA_ESQUERDA = "Cima Esquerda";  // exemplo extra, não usado aqui */

    /* ========= TORRE (for) =========
       Regra: Torre move em linha reta. Aqui: 5 casas para a Direita.
       A cada iteração, imprimimos "Direita".
    */
    printf("Movimento da Torre (%d casas para a Direita):\n", passosTorre);
    for (int i = 0; i < passosTorre; i++) {
        printf("%s\n", DIREITA);
    }
    printf("\n");

    /* ========= BISPO (while) =========
       Regra: Bispo move em diagonal. Aqui: 5 casas para Cima Direita.
       A cada iteração, imprimimos "Cima Direita".
    */
    printf("Movimento do Bispo (%d casas na diagonal Cima Direita):\n", passosBispo);
    int j = 0;
    while (j < passosBispo) {
        printf("%s\n", CIMA_DIREITA);
        j++;
    }
    printf("\n");

    /* ========= RAINHA (do-while) =========
       Regra: Rainha move em todas as direções. Aqui: 8 casas para a Esquerda.
       Usamos do-while para garantir ao menos uma impressão.
    */
    printf("Movimento da Rainha (%d casas para a Esquerda):\n", passosRainha);
    int k = 0;
    do {
        printf("%s\n", ESQUERDA);
        k++;
    } while (k < passosRainha);

    return 0;
}
