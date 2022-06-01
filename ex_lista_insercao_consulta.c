#include<stdio.h>
#include<stdlib.h>

struct lista 
{
      int conteudo; 
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

Lista *consulta(int y, Lista *q)
{
    Lista *aux;
    for(aux = q; aux != NULL; aux = aux->prox)   
        if(y == aux->conteudo)
            break;
    return aux;
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
    Lista *p = NULL,*pont_cons=NULL;
    char op='s';
    int valor,valor_cons;    
    while(op == 's')
    {
        printf("informe o valor a ser inserido:");
        scanf("%d",&valor);                
        p=insere(valor,p);
        printf("deseja inserir um elemento na lista?");
        scanf(" %c",&op);
    }
    imprime(p);
    printf("deseja fazer uma consulta?");
    scanf(" %c",&op);
    while(op == 's')
    {
        printf("informe o valor a ser consultado:");
        scanf("%d",&valor_cons);
        pont_cons=consulta(valor_cons,p);
        if(pont_cons != NULL)
            printf("Conteudo: %d esta armazenado em %p.\n",pont_cons->conteudo,pont_cons);
        else
            printf("Valor nao encontrado!\n");
        printf("deseja fazer nova consulta?");
        scanf(" %c",&op);
    }
    libera(p);
    return 0;
}
