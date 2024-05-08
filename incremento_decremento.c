#include <stdio.h>

int incremento_decremento(){
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

    // Incrementando o ponteiro ptr
    ptr++; // Avança para o próximo elemento do array
    printf("Valor apos incremento de ptr: %d\n", *ptr); // Imprime o valor apontado por ptr (20)
    getchar();

    // Decrementando o ponteiro ptr
    ptr--; // Retrocede para o elemento anterior do array
    printf("Valor apos decremento de ptr: %d\n", *ptr); // Imprime o valor apontado por ptr (10) novamente
    getchar();

    // Realizando operações aritméticas com o ponteiro
    ptr += 2; // Avança dois elementos do array
    printf("Valor apos avancar 2 elementos: %d\n", *ptr); // Imprime o valor apontado por ptr (30)
    getchar();

    ptr -= 1; // Retrocede um elemento do array
    printf("Valor apos retroceder 1 elemento: %d\n", *ptr); // Imprime o valor apontado por ptr (20)
    printf("Encerrado!");
    getchar();


    return 0;
}