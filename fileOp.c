#include "fileOp.h"

double lerDec(FILE *file){
    double n;
    fread((void*) (&n), sizeof(n), 1, file);
    return n;
}
void escreverDec(double n, FILE *file){
    fwrite((void*) (&n), sizeof(n), 1, file);
}

int lerInt(FILE *file){
    int n;
    fread((void*) (&n), sizeof(n), 1, file);
    return n;
}
void escreverInt(int n, FILE *file){
    fwrite((void*) (&n), sizeof(n), 1, file);
}

char *lerString(FILE *file){

    static char n[STRSIZE];
    fread(n, STRSIZE, 1, file);
    return n; 
}
void escreverString(char n[], FILE *file){
    fwrite(n,STRSIZE, 1, file);
}