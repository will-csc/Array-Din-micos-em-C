# Implementação de Vetor Dinâmico em C

Este repositório contém uma implementação de um vetor dinâmico em C, já que a linguagem não possui suporte nativo para vetores (Array dinâmicos). O código cria um tipo de dado chamado Vector, que simula o comportamento de um vetor dinâmico, permitindo adicionar elementos e gerenciar a capacidade de memória de forma eficiente.

<hr>

## Funções e Objetivo

Este código implementa um vetor dinâmico simples que é capaz de:

- Adicionar elementos ao vetor.
- Aumentar automaticamente a capacidade quando o vetor atinge o limite de elementos.
- Imprimir o conteúdo do vetor.

## Como funciona?
Em C, a linguagem oferece os recursos necessários (como ponteiros e funções de alocação de memória, como realloc utilizada no código) para implementar um vetor dinâmico de forma eficiente. O código segue as seguintes etapas:

- Criação do Vetor (new_Vector): Um vetor é criado com capacidade inicial para armazenar 1 elemento.
- Aumento de Capacidade (increase_capacity): Quando a quantidade de elementos no vetor atinge a capacidade, a função increase_capacity dobra a capacidade e realoca a memória necessária.
- Adição de Elementos (push): Novos elementos são adicionados ao vetor, e a capacidade é aumentada automaticamente quando necessário.
- Impressão do Vetor (print_array): O vetor é impresso no formato de uma lista, com os elementos separados por vírgulas.

## Como utilizar

Para utilizar em seus códigos, pode-se renomear e redigir o arquivo para que seja acessado pelo pré-processador, utilizando, por exemplo o arquivo renomeado para `vector.h`

Clone o repositório:
```bash
git clone https://github.com/will-csc/Array-Din-micos-em-C
```

Compile o código:
```bash
gcc -o vetor vetor.c
```

Execute o programa:
```bash
./vetor
```
