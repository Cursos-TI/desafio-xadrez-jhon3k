#include <stdio.h>

// Funções de movimentação
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);  
    }
}

void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima\nDireita\n");
        moverBispo(casas - 1);  
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);  
    }
}

void moverCavalo(int repeticoes) {
    if (repeticoes > 0) {
        printf("Cima\nCima\nDireita\n");
        moverCavalo(repeticoes - 1);  
    }
}

// Função auxiliar para ler o número de passos e validar se está no intervalo permitido
int lerPassos(int min, int max) {
    int passos;
    scanf("%d", &passos);

    if (passos >= min && passos <= max) {
        return passos;  
    } else {
        printf("Valor inválido. Deve estar entre %d e %d.\n", min, max);
        return -1;  
    }
}

int main() {
    int opcao, passos;

    // Exibe menu de escolha para o usuário
    printf("Escolha uma peça para mover:\n");
    printf("1. Torre\n2. Bispo\n3. Rainha\n4. Cavalo\n");
    printf("Escolha: ");
    scanf("%d", &opcao); 

    // Trata cada peça com sua lógica específica
    switch (opcao) {
    case 1:
        // Torre: movimenta entre 1 e 5 casas para a direita
        printf("\nVocê escolheu Torre.\nEscolha o número de casas para a direita (1 a 5): ");
        passos = lerPassos(1, 5);  // usa função auxiliar para validar
        if (passos != -1) {
            printf("Vai andar %d casa(s):\n", passos);
            moverTorre(passos);  // chama a função de movimento
        }
        break;

    case 2:
        // Bispo: movimenta entre 1 e 5 casas na diagonal superior direita
        printf("\nVocê escolheu Bispo.\nEscolha o número de casas na diagonal superior direita (1 a 5): ");
        passos = lerPassos(1, 5);
        if (passos != -1) {
            printf("Vai andar %d casa(s):\n", passos);
            moverBispo(passos);
        }
        break;

    case 3:
        // Rainha: movimenta entre 1 e 8 casas para a esquerda
        printf("\nVocê escolheu Rainha.\nEscolha o número de casas para a esquerda (1 a 8): ");
        passos = lerPassos(1, 8);
        if (passos != -1) {
            printf("Vai andar %d casa(s):\n", passos);
            moverRainha(passos);
        }
        break;

    case 4:
        // Cavalo: faz 1 movimento fixo em L
        printf("\nVocê escolheu o Cavalo.\nVai realizar 1 movimento em L (cima-cima-direita):\n");
        moverCavalo(1);
        break;

    default:
        printf("\nOpção inválida.\n");
        break;
    }

    printf("\nFim do programa.\n");
    return 0;
}