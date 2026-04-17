# Binary Search Tree (BST) in C / Árvore Binária de Busca em C

## 🇬🇧 English

### 📋 Description
A complete implementation of a **Binary Search Tree (BST)** data structure in C, featuring insertion, removal, and three tree traversal methods (pre-order, in-order, post-order). Developed as an academic project for data structures course.

### ✨ Features
- ✅ **Insert Node**: Add new values maintaining BST property
- ✅ **Remove Node**: Delete nodes handling all cases (leaf, one child, two children)
- ✅ **Pre-order Traversal**: Root → Left → Right
- ✅ **In-order Traversal**: Left → Root → Right (sorted output)
- ✅ **Post-order Traversal**: Left → Right → Root
- ✅ **Recursive Implementation**: Clean and efficient code

### 🏗️ Data Structure
```c
typedef struct No {
    int valor;         // Node value
    struct No *esq;    // Pointer to left child
    struct No *dir;    // Pointer to right child
} No;
```

### 📊 BST Property
- **Left subtree**: all values < node value
- **Right subtree**: all values > node value
- **Duplicate values**: not allowed (ignored on insertion)

### 🚀 How to Compile and Run

#### Compilation
```bash
gcc "Árvore Binária.c" -o arvore_binaria
```

#### Execution
```bash
./arvore_binaria
```

On Windows:
```bash
arvore_binaria.exe
```

### 📖 Usage

When you run the program, a menu will appear:

```
*** MENU DE OPCOES ***
1 - Include node
2 - Remove node
3 - Pre-order traversal
4 - In-order traversal
5 - Post-order traversal
0 - Exit
```

#### Example Usage Flow:

**Building a tree:**
```
Insert: 50, 30, 70, 20, 40, 60, 80

Tree structure:
        50
       /  \
      30   70
     / \   / \
    20 40 60 80
```

**Traversal Results:**
- **Pre-order** (Root→Left→Right): `50 30 20 40 70 60 80`
- **In-order** (Left→Root→Right): `20 30 40 50 60 70 80` ← **Sorted!**
- **Post-order** (Left→Right→Root): `20 40 30 60 80 70 50`

### 🔍 Operations Explained

#### 1. **Insertion**
- Starts at root
- Goes left if value < current node
- Goes right if value > current node
- Creates new node when NULL position found

#### 2. **Removal** (3 cases)
- **Leaf node** (no children): Simply remove
- **One child**: Replace node with its child
- **Two children**: Replace with successor (smallest from right subtree)

#### 3. **Traversals**
- **Pre-order**: Used for copying trees
- **In-order**: Produces sorted sequence
- **Post-order**: Used for deleting trees

### ⚡ Time Complexity

| Operation | Average | Worst Case |
|-----------|---------|------------|
| Search    | O(log n) | O(n) |
| Insert    | O(log n) | O(n) |
| Delete    | O(log n) | O(n) |
| Traversal | O(n)     | O(n) |

*Worst case occurs when tree becomes skewed (unbalanced)*

### 📁 Project Structure
```
.
├── Árvore Binária.c    # Main source code
└── README.md           # This file
```

### 🔧 Requirements
- GCC Compiler (or any C compiler)
- C Standard Library

### 👨‍💻 Author
Academic project for Data Structures course

### 📄 License
Educational use

---

## 🇧🇷 Português

### 📋 Descrição
Implementação completa de uma estrutura de dados **Árvore Binária de Busca (ABB)** em C, com inserção, remoção e três métodos de percurso (pré-ordem, em ordem, pós-ordem). Desenvolvido como projeto acadêmico para disciplina de estrutura de dados.

### ✨ Funcionalidades
- ✅ **Incluir Nó**: Adicionar novos valores mantendo propriedade ABB
- ✅ **Remover Nó**: Deletar nós tratando todos os casos (folha, um filho, dois filhos)
- ✅ **Percurso Pré-ordem**: Raiz → Esquerda → Direita
- ✅ **Percurso Em Ordem**: Esquerda → Raiz → Direita (saída ordenada)
- ✅ **Percurso Pós-ordem**: Esquerda → Direita → Raiz
- ✅ **Implementação Recursiva**: Código limpo e eficiente

### 🏗️ Estrutura de Dados
```c
typedef struct No {
    int valor;         // Valor do nó
    struct No *esq;    // Ponteiro para filho esquerdo
    struct No *dir;    // Ponteiro para filho direito
} No;
```

### 📊 Propriedade da ABB
- **Subárvore esquerda**: todos valores < valor do nó
- **Subárvore direita**: todos valores > valor do nó
- **Valores duplicados**: não permitidos (ignorados na inserção)

### 🚀 Como Compilar e Executar

#### Compilação
```bash
gcc "Árvore Binária.c" -o arvore_binaria
```

#### Execução
```bash
./arvore_binaria
```

No Windows:
```bash
arvore_binaria.exe
```

### 📖 Como Usar

Ao executar o programa, um menu será exibido:

```
*** MENU DE OPCOES ***
1 - Incluir nó
2 - Remover nó
3 - Buscar pré-ordem
4 - Buscar em ordem
5 - Buscar pós-ordem
0 - Encerrar
```

#### Exemplo de Fluxo de Uso:

**Construindo uma árvore:**
```
Inserir: 50, 30, 70, 20, 40, 60, 80

Estrutura da árvore:
        50
       /  \
      30   70
     / \   / \
    20 40 60 80
```

**Resultados dos Percursos:**
- **Pré-ordem** (Raiz→Esq→Dir): `50 30 20 40 70 60 80`
- **Em ordem** (Esq→Raiz→Dir): `20 30 40 50 60 70 80` ← **Ordenado!**
- **Pós-ordem** (Esq→Dir→Raiz): `20 40 30 60 80 70 50`

### 🔍 Operações Explicadas

#### 1. **Inserção**
- Começa na raiz
- Vai para esquerda se valor < nó atual
- Vai para direita se valor > nó atual
- Cria novo nó quando encontra posição NULL

#### 2. **Remoção** (3 casos)
- **Nó folha** (sem filhos): Simplesmente remove
- **Um filho**: Substitui nó pelo seu filho
- **Dois filhos**: Substitui pelo sucessor (menor da subárvore direita)

#### 3. **Percursos**
- **Pré-ordem**: Usado para copiar árvores
- **Em ordem**: Produz sequência ordenada
- **Pós-ordem**: Usado para deletar árvores

### ⚡ Complexidade de Tempo

| Operação  | Média    | Pior Caso |
|-----------|----------|-----------|
| Buscar    | O(log n) | O(n)      |
| Inserir   | O(log n) | O(n)      |
| Remover   | O(log n) | O(n)      |
| Percorrer | O(n)     | O(n)      |

*Pior caso ocorre quando árvore fica desbalanceada*

### 📁 Estrutura do Projeto
```
.
├── Árvore Binária.c    # Código fonte principal
└── README.md           # Este arquivo
```

### 🔧 Requisitos
- Compilador GCC (ou qualquer compilador C)
- Biblioteca Padrão C

### 👨‍💻 Autor
Projeto acadêmico para disciplina de Estrutura de Dados

### 📄 Licença
Uso educacional