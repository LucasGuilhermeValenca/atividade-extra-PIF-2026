#include <stdio.h>

int main(void){

    float preco = 100.0;
    float *ptr = &preco;

    printf("Valor original: R$%.2f\n", preco);

    *ptr *= 1.1;

    printf("Valor com desconto: R$%.2f\n", preco);
    return 0;
}