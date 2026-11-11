#include <stdio.h>
#include "estruturaPilha.h"

int main() {
    int opcao;

    inicializarPilha();

    do {
        printf("\n1 - Empilhar");
        printf("\n2 - Desempilhar");
        printf("\n3 - Mostrar pilha");
        printf("\n4 - Sair");
        printf("\n5 - Consultar Topo");
        printf("\n6 - Verificar pilha");
        printf("\n7 - Limpar pilha");
        printf("\n8 - Contar elementos");
        printf("\n9 - Somar elementos");
        printf("\n10 - Procurar elemento");
        printf("\nOpcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: empilhar(); break;
            case 2: desempilhar(); break;
            case 3: mostrarPilha(); break;
            case 4: printf("Saindo...\n"); break;
            case 5: consultarTopo(); break;
            case 6: pilhaVazia(); break;
            case 7: limparPilha(); break;
            case 8: contarElementos(); break;
            case 9: somarElementos(); break;
            case 10: procurarElemento(); break;
            default: printf("Opcao invalida!\n");
        }

    } while (opcao != 4);

    return 0;
}

