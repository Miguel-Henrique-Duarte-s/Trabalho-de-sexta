#include <stdio.h>
#include "estruturaPilha.h"

struct Pilha pilha;

//inicializarPilha possui complexidade O(1)
void inicializarPilha() {
    pilha.topo = -1;
}

//empilhar possui complexidade O(1)
void empilhar()  {
    int i;
    int quant;
    if (pilha.topo == TAM - 1) {
        printf("Pilha cheia!\n");
        return;
    }

    printf("Quantos valores serão inseridos: ");
    scanf("%d", &quant);
    
    if(quant <= 0)
    {
    printf("Digite um valor válido!!");
    return;
    }
    
    if (quant > TAM - 1 - pilha.topo){
        printf("Espaço insuficiente na pilha!\n");
        return;
    }

    int valor[quant];

    for(i=0; i<quant; i++){
        printf("Digite um valor: ");
        scanf("%d", &valor[i]);
    }
    
    for ( i = 0; i < quant; i++)
    {
    pilha.topo++;
    pilha.dados[pilha.topo] = valor[i];
    }
    
}
//void desempilhar possui complexidade O(1)
void desempilhar() {
    if (pilha.topo == -1) {
        printf("Pilha vazia!\n");
    } else {
        pilha.topo--;
        printf("Elemento removido!\n");
    }
}
//void mostrarPilha possui complexidade O(n)
void mostrarPilha() {
    int i, cont = 0;

    if (pilha.topo == -1) {
        printf("Pilha vazia!\n");
    } else {
        for (i = pilha.topo; i >= 0; i--) {
            cont++;
            printf("%d\n", pilha.dados[i]);
        }
    }
    
    printf("A função de mostrar teve %d iterações", cont);

}
//void consultarTopo possui complexidade O(1)
void consultarTopo(){
    if(pilha.topo < 0)
    {
        printf("Não existem elementos na pilha!");
        return;
    }

    printf("O elemento do topo é: %d", pilha.dados[pilha.topo]);
}
//void pilhaVazia possui complexidade O(1)
void pilhaVazia(){
    if(pilha.topo <= -1)
    printf("1");
    else
    printf("0");
}
//void limparPilha possui complexidade O(n)
void limparPilha(){

    int p = pilha.topo;
    if(pilha.topo <= -1){
        printf("Pilha ja está vazia...");
        return;
    }
    else{
    for(int i = 0; i <= p; i++){
        pilha.topo--;
    }
    }
    printf("Lista Limpa");
}
//void possui complexidade O(1)
void contarElementos(){
    printf("A pilha possui %d elementos", pilha.topo + 1);
}
//void possui complexidade O(n)
void somarElementos(){
    int cont;
    for(int i = 0; i <= pilha.topo; i++){
        cont = cont + pilha.dados[i];
    }
    printf("A soma de todos os valores da pilha é %d", cont);

}
//void possui complexidade O(n)
void procurarElemento(){

    int valor, cont = 0;
    

    if(pilha.topo <= -1){
        printf("Pilha vazia");
    }
    else{
    printf("Qual valor quer encontar: ");
    scanf("%d", &valor);
    for (int i = 0; i <= pilha.topo; i++)
    {
        if (valor == pilha.dados[i])
        {
            printf("Valor encontrado na posição %d\n", i+1);
            cont++;
        }
    } 
    if (cont == 0)
    {
        printf("Não existem valores iguais a esse");
    }
    
    }
    

}