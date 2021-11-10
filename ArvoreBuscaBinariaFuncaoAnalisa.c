#include<stdio.h>
#include<stdlib.h>

struct arv{
     int info;
     struct*arv esq;
     struct*arv dir;
};
typedef struct arv Arv;

int vazia(Arv*a){
    return a==NULL;
}

int abb(Arv*a){
    int p,b;
    if((a->esq->info) > (a->dir->info)){
       return 0;//nao é uma arvore binaria de busca
    }
    else{
       p=abb(a->esq);
       b=abb(a->dir);
       if(p>b)
         return 0;
       else
         continue;
    }
    return 1;
}
