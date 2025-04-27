#include <stdio.h>

int main() {

    int i, opcao, lado, movimentoCompleto = 1;

    // Entrada para o usuario passa a escolha da peça
    printf("Escolha uma opção: \n1. Torre\n2. Bispo\n3. Rainha\n4. Cavalo\n");
    
    printf("Escolha: ");
    scanf("%d", &opcao);  

    // tratando a escolha da peça
    switch (opcao)
    {
    case 1:
        //Tratando a escolha da direção da peça Torre
        printf("Você escolheu Torre\nEscolha o lado\n1. Direita\n2. Esquerda\nEscolha: ");
        scanf("%d", &lado);

        switch (lado)
        {
        case 1:
            for (i = 0; i < 5; i++)
            {
                printf("Direita\n");
            }
            break;
        case 2:
            for (i = 0; i < 5; i++)
            {
                printf("Esquerda\n");
            }
            break;
        
        default:
            printf("Opção inválida\n");
            break;
        }
        break;
    case 2:
        //Resetando o valor de i
        i = 0;
        //Tratando a escolha da direção da peça Bispo
        printf("Você escolheu Bispo\nEscolha a diagonal\n1. Diagonal Direita\n2. Diagonal Esquerda\nEscolha: ");
        scanf("%d", &lado);

        switch (lado)
        {
        case 1:
            while (i < 5)
            {
                printf("Diagonal Direita\n");
                i++;
            }
            break;
        case 2:
            while (i < 5)
            {
                printf("Diagonal Esquerda\n");
                i++;
            }
            break;
        default:
            printf("Opção inválida\n");
            break;
        }
        break;
    case 3:
        //Resetando o valor de i
        i = 0;
        //Tratando a escolha da direção da peça Rainha
        printf("Você escolheu Rainha\nEscolha a direção\n1. cima\n2. baixo\n3. Direita\n4. Esquerda\nEscolha: ");
        scanf("%d", &lado);
        switch (lado)
        {
        case 1:
            do
            {
                printf("cima\n");
                i++;
            } while (i < 8);
            break;
        case 2:
            do
            {
                printf("baixo\n");
                i++;
            } while (i < 8);
            break;
        case 3:
            do
            {
                printf("Direita\n");
                i++;
            } while (i < 8);
            break;
        case 4:
            do
            {
                printf("Esquerda\n");
                i++;
            } while (i < 8);
            break;
        default:
            printf("Opção inválida");
            break;
        }
        break;
    case 4:
        //Tratando a escolha da direção da peça Cavalo
        printf("Você escolheu o Cavalo\nEscolha a direção\n1. Cima Direita\n2. Cima Esquerda\n3. Baixo Direita\n4. Baixo Esquerda\nEscolhar: ");
        scanf("%d", &lado);
        switch (lado)
        {
        case 1:
            while (movimentoCompleto--)
            {
                for ( i = 0; i < 2; i++)
                {
                    printf("Cima\n");
                }
                printf("Direita\n");
            }
            break;
        case 2:
            while (movimentoCompleto--)
            {
                for ( i = 0; i < 2; i++)
                {
                    printf("Cima\n");
                }
                printf("Esquerda\n");
            }
            break;
        case 3:
            while (movimentoCompleto--)
            {
                for ( i = 0; i < 2; i++)
                {
                    printf("Baixo\n");
                }
                printf("Direita\n");
            }
            break;
        case 4:
            while (movimentoCompleto--)
            {
                for ( i = 0; i < 2; i++)
                {
                    printf("Baixo\n");
                }
                printf("Esquerda\n");
            }
            break;
        default:
            printf("Opção inválida\n");
            break;
        }
        break;
    default:
        printf("Opção inválida\n");
        break;
    }

    return 0;
}