#include <stdio.h>
#include <string.h>

#define MAX_LIVROS 10

typedef struct {
    char titulo[50];
    char autor[50];
    int ano;
    int disponivel; // 1 = disponivel, 0 = emprestado
} Livro;

int cadastrarLivro(Livro v[], int n);
void listarLivros(Livro v[], int n);
int buscarPorTitulo(Livro v[], int n, char titulo[]);
void buscarLivro(Livro v[], int n);
void emprestarLivro(Livro v[], int n);
void devolverLivro(Livro v[], int n);

int main() {
    Livro biblioteca[MAX_LIVROS];
    int quantidade = 0, opcao;

    do {
        printf("\n===== MINI BIBLIOTECA =====\n");
        printf("1 - Cadastrar livro\n");
        printf("2 - Listar todos\n");
        printf("3 - Buscar por titulo\n");
        printf("4 - Emprestar\n");
        printf("5 - Devolver\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: quantidade = cadastrarLivro(biblioteca, quantidade); break;
            case 2: listarLivros(biblioteca, quantidade); break;
            case 3: buscarLivro(biblioteca, quantidade); break;
            case 4: emprestarLivro(biblioteca, quantidade); break;
            case 5: devolverLivro(biblioteca, quantidade); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opcao invalida.\n");
        }
    } while (opcao != 0);

    return 0;
}

// Devolve a nova quantidade de livros cadastrados.
int cadastrarLivro(Livro v[], int n) {
    if (n == MAX_LIVROS) {
        printf("Biblioteca cheia. Nao e possivel cadastrar mais livros.\n");
        return n;
    }

    printf("Titulo: ");
    scanf(" %49[^\n]", v[n].titulo);

    printf("Autor: ");
    scanf(" %49[^\n]", v[n].autor);

    printf("Ano: ");
    scanf("%d", &v[n].ano);

    v[n].disponivel = 1;

    printf("Livro cadastrado com sucesso.\n");

    return n + 1;
}

void listarLivros(Livro v[], int n) {
    int i;

    if (n == 0) {
        printf("Nenhum livro cadastrado.\n");
        return;
    }

    for (i = 0; i < n; i++) {
        printf("%d. %s - %s (%d) [%s]\n", i + 1, v[i].titulo, v[i].autor, v[i].ano,
               v[i].disponivel ? "disponivel" : "emprestado");
    }
}

// Devolve a posicao do livro com o titulo informado, ou -1 se nao existir.
int buscarPorTitulo(Livro v[], int n, char titulo[]) {
    int i;

    for (i = 0; i < n; i++) {
        if (strcmp(v[i].titulo, titulo) == 0) {
            return i;
        }
    }

    return -1;
}

void buscarLivro(Livro v[], int n) {
    char titulo[50];
    int pos;

    printf("Titulo para buscar: ");
    scanf(" %49[^\n]", titulo);

    pos = buscarPorTitulo(v, n, titulo);

    if (pos == -1) {
        printf("Livro nao encontrado.\n");
    } else {
        printf("Encontrado: %s - %s (%d) [%s]\n", v[pos].titulo, v[pos].autor, v[pos].ano,
               v[pos].disponivel ? "disponivel" : "emprestado");
    }
}

void emprestarLivro(Livro v[], int n) {
    char titulo[50];
    int pos;

    printf("Titulo do livro a emprestar: ");
    scanf(" %49[^\n]", titulo);

    pos = buscarPorTitulo(v, n, titulo);

    if (pos == -1) {
        printf("Livro nao encontrado.\n");
    } else if (v[pos].disponivel == 0) {
        printf("Este livro ja esta emprestado.\n");
    } else {
        v[pos].disponivel = 0;
        printf("Emprestimo registrado.\n");
    }
}

void devolverLivro(Livro v[], int n) {
    char titulo[50];
    int pos;

    printf("Titulo do livro a devolver: ");
    scanf(" %49[^\n]", titulo);

    pos = buscarPorTitulo(v, n, titulo);

    if (pos == -1) {
        printf("Livro nao encontrado.\n");
    } else if (v[pos].disponivel == 1) {
        printf("Este livro nao estava emprestado.\n");
    } else {
        v[pos].disponivel = 1;
        printf("Devolucao registrada.\n");
    }
}
