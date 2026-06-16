#include <stdio.h>

void colocar_desconto(float *preco, float desconto){
    *preco *= 1 - (desconto / 100);
}

int main(void){

    float preco = 120.0;

    printf("Valor original: R$%.2f\n", preco);

    colocar_desconto(&preco, 10);

    printf("Valor com desconto: R$%.2f\n", preco);

    return 0;
}