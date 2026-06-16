#include <stdio.h>

typedef struct {
    int id;
    float preco;
} Produto;

void aplicar_desconto(Produto *produto, float desconto){
    produto->preco *= 1 + ( desconto / 100 );
}

int main(void){

    Produto calca;
    calca.id = 1;
    calca.preco = 40.0;

    printf("Valor 1: R$%.2f\n", calca.preco);

    aplicar_desconto(&calca, 10);

    printf("Valor 2: R$%.2f\n", calca.preco);
    return 0;
}