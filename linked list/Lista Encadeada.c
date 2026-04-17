#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodo {
    char id[10];
    char dados[200];
    struct nodo *prox;
} Nodo;

Nodo *inicio = NULL;

Nodo* criarNodo(char id[], char dados[]) {
    Nodo *novo = (Nodo*) malloc(sizeof(Nodo));
    if (novo == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }
    strcpy(novo->id, id);
    strcpy(novo->dados, dados);
    novo->prox = NULL;
    return novo;
}

void inserir() {
    char id[10];
    char dados[200];

    printf("\nDigite o ID: ");
    scanf(" %9s", id);

    printf("Digite os dados: ");
    scanf(" %199[^\n]", dados);

    Nodo *temp = inicio;
    while (temp != NULL) {
        if (strcmp(temp->id, id) == 0) {
            printf("\nID já existe!\n");
            return;
        }
        temp = temp->prox;
    }

    Nodo *novo = criarNodo(id, dados);
    if (inicio == NULL) inicio = novo;
    else {
        Nodo *temp = inicio;
        while (temp->prox != NULL)
            temp = temp->prox;
        temp->prox = novo;
    }
    printf("\nElemento inserido com sucesso!\n");
}

void exibir() {
    if (inicio == NULL) {
        printf("\nLista vazia!\n");
        return;
    }
    Nodo *temp = inicio;
    printf("\n--- LISTA DE ELEMENTOS ---\n");
    while (temp != NULL) {
        printf("ID: %s | \n", temp->id);
        temp = temp->prox;
    }
}

void consultar() {
    if (inicio == NULL) {
        printf("\nLista vazia!\n");
        return;
    }

    char id[10];
    printf("\nDigite o ID para consulta: ");
    scanf(" %9s", id);

    Nodo *temp = inicio;
    while (temp != NULL) {
        if (strcmp(temp->id, id) == 0) {
            printf("\nEncontrado: ID = %s | Dados = %s\n", temp->id, temp->dados);
            return;
        }
        temp = temp->prox;
    }
    printf("\nElemento não encontrado!\n");
}

void alterar() {
    if (inicio == NULL) {
        printf("\nLista vazia!\n");
        return;
    }

    char id[10];
    printf("\nDigite o ID do elemento que deseja alterar: ");
    scanf(" %9s", id);

    Nodo *temp = inicio;
    while (temp != NULL) {
        if (strcmp(temp->id, id) == 0) {
            printf("Digite os novos dados do elemento: ");
            scanf(" %199[^\n]", temp->dados);
            printf("\nElemento alterado com sucesso!\n");
            return;
        }
        temp = temp->prox;
    }
    printf("\nElemento não encontrado!\n");
}

void removerElemento() {
    if (inicio == NULL) {
        printf("\nLista vazia!\n");
        return;
    }

    char id[10];
    printf("\nDigite o ID do elemento a remover: ");
    scanf(" %9s", id);

    Nodo *temp = inicio, *anterior = NULL;
    while (temp != NULL && strcmp(temp->id, id) != 0) {
        anterior = temp;
        temp = temp->prox;
    }

    if (temp == NULL) {
        printf("\nElemento não encontrado!\n");
        return;
    }

    if (anterior == NULL) inicio = temp->prox;
    else anterior->prox = temp->prox;
    free(temp);

    printf("\nElemento removido com sucesso!\n");
}

void liberarLista() {
    Nodo *temp;
    while (inicio != NULL) {
        temp = inicio;
        inicio = inicio->prox;
        free(temp);
    }
}

int main() {
    int opcao;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Inserir elemento\n");
        printf("2. Exibir elementos\n");
        printf("3. Consultar elemento\n");
        printf("4. Alterar elemento\n");
        printf("5. Remover elemento\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: inserir(); break;
            case 2: exibir(); break;
            case 3: consultar(); break;
            case 4: alterar(); break;
            case 5: removerElemento(); break;
            case 0: 
                printf("\nSaindo...\n");
                liberarLista();
                break;
            default: printf("\nOpção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}