#include<stdio.h>
#include<stdlib.h>

struct arv{
    int info;
    struct arv*esq;
    struct arv*dir;
};
typedef struct arv Arv;

int busca_maior(Arv*a){
    int maior;
    int cont=0;//flag para ver se esta na raiz da arvore como um todo
    if(vazia(a))
       return 0;
    else{
        if(cont==0){
           maior=a->info;
           cont=1;
        }
        else{
           if(maior<(a->info))
              maior=a->info;

           busca_maior(a->esq);
           busca_menor(a->dir);
        }
    }
    return maior;
}
