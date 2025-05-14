#include <stdio.h>

int aritimetica() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Inicializando o ponteiro ptr para apontar para o primeiro elemento do array
    printf("Elementos do array {");
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d ", *(ptr + i)); // Imprime o valor apontado por ptr + i
    }
    printf("}\n");
    printf("Valor inicial de ptr: %d\n", *ptr); // Imprime o valor apontado por ptr (10)
    getchar();
    getchar();

    // Operações aritméticas com ponteiros
    int offset = 2; // Deslocamento
    int indice = 1; // Índice

    // Avançando o ponteiro ptr em offset posições
    ptr += offset;
    printf("Valor apos avancar %d posicoes: %d\n", offset, *ptr); // Imprime o valor apontado por ptr (30)
    getchar();

    // Retrocedendo o ponteiro ptr em offset posições
    ptr -= offset;
    printf("Valor apos retroceder %d posicoes: %d\n", offset, *ptr); // Imprime o valor apontado por ptr (10) novamente
    getchar();

    // Acessando um elemento específico do array usando aritmética de ponteiro
    ptr = arr + indice;
    printf("Valor no indice %d: %d\n", indice, *ptr); // Imprime o valor apontado por ptr (20)
    getchar();

    return 0;
}