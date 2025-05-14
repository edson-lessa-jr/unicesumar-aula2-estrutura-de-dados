#include <stdio.h>


int ponteiro() {
    int x = 10; // Declaração de uma variável inteira x
    int *ptr;   // Declaração de um ponteiro para inteiro

    ptr = &x;   // Atribuição do endereço de x ao ponteiro ptr

    // Exibindo o valor de x e o valor apontado por ptr
    printf("Valor de x: %d\n", x);
    printf("Valor apontado por ptr: %d\n", *ptr);
    getchar();
    getchar();

    // Alterando o valor de x através do ponteiro
    *ptr = 20;

    // Exibindo o novo valor de x e o valor apontado por ptr
    printf("Novo valor de x: %d\n", x);
    printf("Novo valor apontado por ptr: %d\n", *ptr);
    printf("Encerrado!");
    getchar();
    return 0;

}