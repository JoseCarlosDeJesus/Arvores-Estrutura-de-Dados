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

int numero_nos(Arv* a){
    int cont=0;
    if(vazia(a))
       return 0;
    return numero_nos(a->esq)+numero_nos(a->dir)+1;
}
