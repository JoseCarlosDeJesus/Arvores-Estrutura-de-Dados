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
       return a->info==c||busca(a->esq,c)||busca(a->dir,c);
}

int arvores_similar(Arv*a,Arv*b){
   if(vazia(a) && vazia(b))
      return 0;//são similares
   else{
      if(a->info==b->info)
         continue;
      else{
         return 1;
      }
      return arvore_similar(a->esq,b->esq)||arvore_similar(a->dir,b->dir);
   }
}
