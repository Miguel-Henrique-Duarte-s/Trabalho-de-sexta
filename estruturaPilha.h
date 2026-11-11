#define TAM 5

struct Pilha {
    int dados[TAM];
    int topo;
};

void inicializarPilha();
void empilhar();
void desempilhar();
void mostrarPilha();
void consultarTopo();
void pilhaVazia();
void limparPilha();
void contarElementos();
void somarElementos();
void procurarElemento();