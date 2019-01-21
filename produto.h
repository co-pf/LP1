#include "main.h"

typedef struct {
    char nome[STRSIZE];
    int cod;
    double valor;
} produto;

void adcProduto(char n[], int c, double v, produto lista[]);

int procurarNome(char n[], produto buffer[], produto lista[]);

produto getProduto(int cod, produto lista[]);
