#include<stdio.h>
#include<stdlib.h>

struct arv{
    int info;
    struct arv*esq;
    struct arv*dir;
};
typedef struct arv Arv;

Arv*inicializa(){
    return NULL;
}

Arv*cria(int c,Arv*sae,Arv*sad){
    Arv*p=(Arv*)malloc(sizeof(Arv));
    p->info=c;
    p->esq=sae;
    p->dir=sad;
    return p;
}

int vazia(Arv*a){
    return a==NULL;
}

void imprime(Arv*a){
    if(!vazia(a)){
       printf("%c", a->info);//mostra raiz
       imprime(a->esq);//mostra sae
       imprime(a->dir);//mostra sad
    }
}

Arv* libera(Arv*a){
    if(!vazia(a)){
        libera(a->esq);//libera sae
        libera(a->dir);//libera sad
        free(a);//libera raiz
    }
    return NULL;
}

int busca(Arv*a,int c){
    if(vazia(a))
       return 0;//arvore vazia nao encontrou
    else
       return a->info==c||busca(a->esq,c)||busca(a->dir,c);
}
