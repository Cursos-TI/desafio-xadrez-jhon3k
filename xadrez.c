#include <stdio.h>

int main() {

    int i, opcao, lado;
    // Entrada para o usuario passa a escolhar da peça
    printf("Escolhar uma opção: \n1. Torre\n2. Bispo\n3. Rainha\n");
    
    printf("Escolhar: ");
    scanf("%d", &opcao);  

    // tratando a escolhar da peça
    switch (opcao)
    {
    case 1:
        //Tratando a escolhar da direção da peça
        printf("Você escolheu Torre\nEscolhar o lado\n1. Direita\n2. Esquerda\nEscolhar: ");
        scanf("%d", &lado);

        switch (lado)
        {
        case 1:
            for (int i = 0; i < 5; i++)
            {
                printf("Direita\n");
            }
            break;
        case 2:
            for (int i = 0; i < 5; i++)
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
        //Tratando a escolhar da direção da peça
        printf("Você escolheu Bispo\nEscolhar a diagonal\n1. Diagonal Direita\n2. Diagonal Esquerda\nEscolhar: ");
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
        printf("Você escolheu Rainha\nEscolhar a direção\n1. cima\n2. baixo\n3. Direita\n4. Esquerda\nEscolhar: ");
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
    default:
        printf("Opção inválida\n");
        break;
    }

    return 0;
}