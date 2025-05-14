# Estrutura de Dados – Aula 2: Ponteiros em Detalhe

**Professor:** Edson Orivaldo Lessa Junior
**Data:** 15/05/2025
**Centro Universitário de Maringá – Unicesumar**

---

## Objetivo

Explorar profundamente as propriedades e operações com ponteiros em linguagem C, compreendendo sua utilização prática e importância para estruturas de dados avançadas.

---

## Conteúdo Abordado

### Vetores e Matrizes

* Definição e utilização de vetores
* Declaração e manipulação de matrizes
* Exemplos práticos com arrays em C

### Registros

* Definição de registros (`struct`) em C
* Como acessar e modificar elementos dentro de registros
* Uso de registros para criar tipos de dados personalizados

### Ponteiros

* Conceito fundamental de ponteiros
* Declaração e inicialização de ponteiros
* Operações básicas com ponteiros (atribuição, deferenciação)

### Propriedades de Ponteiros

* Aritmética de ponteiros
* Ponteiros e arrays
* Ponteiros para funções e sua aplicação
* Exemplo completo em linguagem C demonstrando manipulação avançada com ponteiros

---

## Exemplo de Código

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor = 10;
    int *ponteiro = &valor;

    printf("Valor inicial: %d\n", valor);
    printf("Endereço da variável valor: %p\n", &valor);
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro);

    *ponteiro = 20;
    printf("Valor alterado através do ponteiro: %d\n", valor);

    return 0;
}
```

---

## Importância dos Ponteiros

Os ponteiros são fundamentais para realizar operações que envolvem alocação dinâmica de memória, navegação eficiente em arrays e criação de estruturas dinâmicas, como listas ligadas, árvores e grafos.

---

## Referência Bibliográfica

OLIVEIRA, Pietro Martins de; PEREIRA, Rogério de Leon. **Estrutura de dados I**. Maringá: Centro Universitário de Maringá – Unicesumar, 2019.

---

## Observações Finais

A compreensão aprofundada de ponteiros é essencial para o desenvolvimento eficiente em C e é uma base sólida para explorar conceitos avançados de estruturas de dados.

Para acompanhar esta aula, recomenda-se revisão constante e prática intensiva em laboratório.
