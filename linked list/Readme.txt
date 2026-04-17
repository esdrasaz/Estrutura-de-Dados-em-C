# Singly Linked List in C / Lista Simplesmente Encadeada em C

## 🇬🇧 English

### 📋 Description
A complete implementation of a **singly linked list** data structure in C, featuring all elementary operations: insertion, query, modification, and removal of elements. Developed as an academic project for Renalf Mega Data.

### ✨ Features
- ✅ **Insert**: Add new elements to the end of the list
- ✅ **Display**: Show all stored elements
- ✅ **Query**: Search for specific elements by ID
- ✅ **Modify**: Update data of existing elements
- ✅ **Remove**: Delete elements from the list
- ✅ **Memory Management**: Proper allocation and deallocation

### 🏗️ Data Structure
```c
typedef struct nodo {
    char id[10];        // Unique identifier
    char dados[200];    // Element data
    struct nodo *prox;  // Pointer to next node
} Nodo;
```

### 🚀 How to Compile and Run

#### Compilation
```bash
gcc "Lista Encadeada.c" -o lista_encadeada
```

#### Execution
```bash
./lista_encadeada
```

On Windows:
```bash
lista_encadeada.exe
```

### 📖 Usage

When you run the program, a menu will appear:

```
===== MENU =====
1. Insert element
2. Display elements
3. Query element
4. Modify element
5. Remove element
0. Exit
```

#### Example Usage Flow:

1. **Insert an element**:
   - Choose option `1`
   - Enter ID: `001`
   - Enter data: `John Smith - Developer`

2. **Display all elements**:
   - Choose option `2`
   - View all stored records

3. **Query specific element**:
   - Choose option `3`
   - Enter the ID to search

4. **Modify element**:
   - Choose option `4`
   - Enter ID and new data

5. **Remove element**:
   - Choose option `5`
   - Enter ID to delete

### 🛡️ Security Features
- Duplicate ID validation
- Empty list verification
- Memory allocation error handling
- Automatic memory cleanup on exit
- Input buffer overflow protection

### 📁 Project Structure
```
.
├── Lista Encadeada.c    # Main source code
└── README.md            # This file
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
Implementação completa de uma estrutura de dados **lista simplesmente encadeada** em C, com todas as operações elementares: inclusão, consulta, alteração e remoção de elementos. Desenvolvido como projeto acadêmico para a empresa Renalf Mega Data.

### ✨ Funcionalidades
- ✅ **Inserir**: Adicionar novos elementos ao final da lista
- ✅ **Exibir**: Mostrar todos os elementos armazenados
- ✅ **Consultar**: Buscar elementos específicos por ID
- ✅ **Alterar**: Atualizar dados de elementos existentes
- ✅ **Remover**: Excluir elementos da lista
- ✅ **Gerenciamento de Memória**: Alocação e liberação adequadas

### 🏗️ Estrutura de Dados
```c
typedef struct nodo {
    char id[10];        // Identificador único
    char dados[200];    // Dados do elemento
    struct nodo *prox;  // Ponteiro para próximo nó
} Nodo;
```

### 🚀 Como Compilar e Executar

#### Compilação
```bash
gcc "Lista Encadeada.c" -o lista_encadeada
```

#### Execução
```bash
./lista_encadeada
```

No Windows:
```bash
lista_encadeada.exe
```

### 📖 Como Usar

Ao executar o programa, um menu será exibido:

```
===== MENU =====
1. Inserir elemento
2. Exibir elementos
3. Consultar elemento
4. Alterar elemento
5. Remover elemento
0. Sair
```

#### Exemplo de Fluxo de Uso:

1. **Inserir um elemento**:
   - Escolha a opção `1`
   - Digite o ID: `001`
   - Digite os dados: `João Silva - Desenvolvedor`

2. **Exibir todos elementos**:
   - Escolha a opção `2`
   - Visualize todos os registros armazenados

3. **Consultar elemento específico**:
   - Escolha a opção `3`
   - Digite o ID para buscar

4. **Alterar elemento**:
   - Escolha a opção `4`
   - Digite o ID e os novos dados

5. **Remover elemento**:
   - Escolha a opção `5`
   - Digite o ID para deletar

### 🛡️ Recursos de Segurança
- Validação de IDs duplicados
- Verificação de lista vazia
- Tratamento de erros de alocação de memória
- Limpeza automática de memória ao sair
- Proteção contra overflow de buffer de entrada

### 📁 Estrutura do Projeto
```
.
├── Lista Encadeada.c    # Código fonte principal
└── README.md            # Este arquivo
```

### 🔧 Requisitos
- Compilador GCC (ou qualquer compilador C)
- Biblioteca Padrão C

### 👨‍💻 Autor
Projeto acadêmico para disciplina de Estrutura de Dados

### 📄 Licença
Uso educacional