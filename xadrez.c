#include <stdio.h>




void moverCavalo() {
    for (int casaAtual = 0, casaFinal = 2; casaAtual <= casaFinal; casaAtual++) {
        if (casaAtual == casaFinal)
            printf("Cavalo: Direita\n");
        else
            printf("Cavalo: Cima\n");
    }
}

void moverRecursivamente(int casas, char *mensagem) {
    if (casas > 0) {
        puts(mensagem);
        moverRecursivamente(casas - 1, mensagem);
    }
}


void moverBispo() {
    const int DIREITA = 0;
    int casaAtual = 0;
    int casaFinal = 5;

    while (casaAtual < casaFinal) {
        printf("Bispo: ");
        for (int direcao = 0; direcao < 2; direcao++) {
            if (direcao == DIREITA)
                printf("Direita,");
            else
                puts("Cima");
        }

        casaAtual++;
    }

}

void quebrarLinha() {
    puts("");
}

int main() {

    moverCavalo();
    quebrarLinha();
    moverRecursivamente(5, "Torre: Direita");
    quebrarLinha();
    moverRecursivamente(8, "Rainha: Esquerda");
    quebrarLinha();
    moverBispo();



    return 0;
}
