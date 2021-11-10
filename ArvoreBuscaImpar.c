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

int busca(Arv*a,int c){
    if(vazia(a))
       return 0;//arvore vazia nao encontrou
    else
       return a->info%2!=0||busca(a->esq,c)||busca(a->dir,c);
}
