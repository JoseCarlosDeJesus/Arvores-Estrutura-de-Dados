#include<stdio.h>
#include<stdlib.h>

struct arv{
    int info;
    struct arv*esq;
    struct arv*dir;
};
typedef struct arv Arv;

int vazia(Arv*a){
    return a==NULL;
}

Arv* libera(Arv*a){
    if(!vazia(a) && a->info%2==0){
        libera(a->esq);//libera sae
        libera(a->dir);//libera sad
        free(a);//libera raiz
    }
    return NULL;
}
