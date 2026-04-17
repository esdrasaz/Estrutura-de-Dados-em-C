#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *esq;
    struct No *dir;
} No;

No* novoNo(int valor) {
    No* temp = (No*) malloc(sizeof(No));
    temp->valor = valor;
    temp->esq = temp->dir = NULL;
    return temp;
}

No* inserir(No* raiz, int valor) {
    if (raiz == NULL)
        return novoNo(valor);

    if (valor < raiz->valor)
        raiz->esq = inserir(raiz->esq, valor);
    else if (valor > raiz->valor)
        raiz->dir = inserir(raiz->dir, valor);

    return raiz;
}

No* menorValor(No* raiz) {
    No* atual = raiz;
    while (atual && atual->esq != NULL)
        atual = atual->esq;
    return atual;
}

No* remover(No* raiz, int valor) {
    if (raiz == NULL)
        return raiz;

    if (valor < raiz->valor)
        raiz->esq = remover(raiz->esq, valor);

    else if (valor > raiz->valor)
        raiz->dir = remover(raiz->dir, valor);

    else {
        if (raiz->esq == NULL) {
            No* temp = raiz->dir;
            free(raiz);
            return temp;
        }
        else if (raiz->dir == NULL) {
            No* temp = raiz->esq;
            free(raiz);
            return temp;
        }
        No* temp = menorValor(raiz->dir);
        raiz->valor = temp->valor;
        raiz->dir = remover(raiz->dir, temp->valor);
    }
    return raiz;
}

void preOrdem(No* raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->valor);
        preOrdem(raiz->esq);
        preOrdem(raiz->dir);
    }
}

void emOrdem(No* raiz) {
    if (raiz != NULL) {
        emOrdem(raiz->esq);
        printf("%d ", raiz->valor);
        emOrdem(raiz->dir);
    }
}

void posOrdem(No* raiz) {
    if (raiz != NULL) {
        posOrdem(raiz->esq);
        posOrdem(raiz->dir);
        printf("%d ", raiz->valor);
    }
}

// MENU
int main() {
    No* raiz = NULL;
    int opcao, valor;

    do {
        printf("\n\n*** MENU DE OPCOES ***\n");
        printf("1 - Incluir no\n");
        printf("2 - Remover no\n");
        printf("3 - Buscar pre-ordem\n");
        printf("4 - Buscar em ordem\n");
        printf("5 - Buscar pos-ordem\n");
        printf("0 - Encerrar\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor para inserir: ");
                scanf("%d", &valor);
                raiz = inserir(raiz, valor);
                break;

            case 2:
                printf("Digite o valor para remover: ");
                scanf("%d", &valor);
                raiz = remover(raiz, valor);
                break;

            case 3:
                printf("Pre-ordem: ");
                preOrdem(raiz);
                printf("\n");
                break;

            case 4:
                printf("Em ordem: ");
                emOrdem(raiz);
                printf("\n");
                break;

            case 5:
                printf("Pos-ordem: ");
                posOrdem(raiz);
                printf("\n");
                break;

            case 0:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}