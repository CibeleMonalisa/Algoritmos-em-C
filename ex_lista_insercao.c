#include<stdio.h>
#include<stdlib.h>

struct lista {
      int         conteudo; 
      struct lista *prox;
   };

typedef struct lista Lista;

Lista *insere (int x, Lista *p)
{
   Lista *novo;
   novo = (Lista *)malloc (sizeof (Lista));
   novo->conteudo = x;
   novo->prox = p;
   return novo;
}

void imprime (Lista *le) 
{
    Lista *q;
    int i;
    for (q = le; q != NULL; q = q->prox)
        printf("%d -> ", q->conteudo);
    printf("fim.\n");
}

void libera (Lista* listtt)
{
    Lista* r = listtt;
    while (r != NULL) 
    {
        Lista* s = r->prox; /* guarda referência para o próximo elemento*/
        free(r); /* libera a memória apontada por r */
        r = s; /* faz r apontar para o próximo */
    }
}

int main(){
    Lista *p = NULL;
    char op='s';
    int valor;    
    while(op == 's'){
        printf("informe o valor a ser inserido:");
        scanf("%d",&valor);                
        p=insere(valor,p);
        printf("deseja inserir um elemento na lista?");
        scanf(" %c",&op);
    }
    imprime(p);
    libera(p);
    return 0;
}
