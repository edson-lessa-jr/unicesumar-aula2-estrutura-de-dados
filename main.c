#include <stdio.h>
#include <locale.h>

int incremento_decremento();
int aritimetica();
int acesso_memoria();

int main(void) {
    // Define a codificação de caracteres para UTF-8
    setlocale(LC_ALL, "en_US.UTF-8");

    int opcao;

    printf("Iniciando o programa\n");

    do {
        // Exibindo o menu de opções
        printf("\nMenu:\n");
        printf("1. Funcao Incremento e decremento\n");
        printf("2. Funcao Aritimetica\n");
        printf("3. Funcao Acesso invalido de memoria\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Verificando a opção escolhida e chamando a função correspondente
        switch (opcao) {
            case 1:
                incremento_decremento();
                break;
            case 2:
                aritimetica();
                break;
            case 3:
                acesso_memoria();
                break;
            case 0:
                printf("Saindo do programa. Obrigado!\n");
                break;
            default:
                printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
        }
    } while (opcao != 0);

    return 0;
}