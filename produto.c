#include "produto.h"

void adcProduto(char n[], int c, double v, produto lista[]){
    produto prod;
    strcpy(prod.nome, n);
    prod.cod = c;
    prod.valor = v;
    PROD_ATUAL++;
    lista[PROD_ATUAL] = prod;
}

int procurarNome(char n[], produto buffer[], produto lista[]){
    if(PROD_ATUAL < 1){
        printf("[Erro] Nao ha produtos registrado para procurar!\n");
        return 0;
    }
    int i = 0;
    int x = 0;
    for(i; i<PROD_ATUAL; i++){
        if(strstr(lista[i].nome, n)){
            buffer[x] = lista[i];
            x++;
        }
    }
    return x;
}

produto getProduto(int cod, produto lista[]){
    int i = 0;
    produto prod;
    prod.cod = 0;
    for(i; i<PROD_ATUAL; i++){
        if(lista[i].cod == cod) return lista[i];
    }
    return prod;
}
