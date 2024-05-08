#include <stdio.h>

int comparacao_ponteiro(){
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr1 = arr; // Ponteiro ptr1 aponta para o primeiro elemento do array
    int *ptr2 = arr + 2; // Ponteiro ptr2 aponta para o terceiro elemento do array

    // Comparando os ponteiros
    if (ptr1 < ptr2) {
        printf("ptr1 aponta para um endereco anterior a ptr2\n");
    } else if (ptr1 > ptr2) {
        printf("ptr1 aponta para um endereco posterior a ptr2\n");
    } else {
        printf("ptr1 e ptr2 apontam para o mesmo endereco\n");
    }
    printf("Encerrado!\n");
    getchar();
    getchar();
    return 0;
}
