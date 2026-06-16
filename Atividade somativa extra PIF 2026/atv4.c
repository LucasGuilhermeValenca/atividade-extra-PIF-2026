#include <stdio.h>

typedef struct {
    int id;
    float preco;
} Produto;

void aplicar_desconto(Produto *produto, float desconto){
    produto->preco *= (1 - desconto / 100);
}

void aplicar_desconto_todos(Produto *produtos, int qtd, float desconto){
    for(int i = 0; i < qtd; i++){
        aplicar_desconto(produtos + i, desconto);
    }
}

void imprimir_produtos(Produto *produtos, int qtd){
    printf("\n========== PRODUTOS ==========\n");

    for(int i = 0; i < qtd; i++){
        printf("ID: %d | Preco: R$ %.2f\n",
               (produtos + i)->id,
               (produtos + i)->preco);
    }

    printf("==============================\n");
}

int main(void){

    Produto produtos[3] = {
        {10, 70.0},
        {20, 90.0},
        {33, 80.0}
    };

    printf("Antes do desconto:\n");
    imprimir_produtos(produtos, 3);

    aplicar_desconto_todos(produtos, 3, 10);

    printf("\nDepois do desconto de 10%%:\n");
    imprimir_produtos(produtos, 3);

    return 0;
}