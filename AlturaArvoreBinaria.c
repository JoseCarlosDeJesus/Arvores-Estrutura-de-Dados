#include<stdio.h>
#include<stdlib.h>

struct arv{
    int info;
    struct arv* dir;
    struct arv*esq;
};
typedef struct arv Arv;

int altura_binaria(Arv*a){
    int i, j;
    if (a == NULL) return -1;
    i = altura_binaria(a->esq);
    j = altura_binaria(a->dir);
    if (i > j) return i+1;
    else return j+1;
}
