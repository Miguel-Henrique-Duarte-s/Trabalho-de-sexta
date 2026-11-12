#define TAM 5

struct Pilha {
    int dados[TAM];
    int topo;
};

struct Fila {
    int dados[TAM];
    int ponta;
};

void inicializarPilha();
void inicializarFila();
void empilhar();
void desempilhar();
void mostrarPilha();
void consultarTopo();
void pilhaVazia();
void limparPilha();
void contarElementos();
void somarElementos();
void procurarElemento();
void transferirParaFila();
void mostrarFila();
void enfileirar();
void desenfileirar();