#include<stdio.h>
#include<stdlib.h>

struct lista 
{
      int conteudo; 
      struct lista *prox;
};

typedef struct lista Lista;

Lista *insere (int x, Lista *l)
{
   Lista *novo;
   novo = (Lista *)malloc (sizeof (Lista));
   novo->conteudo = x;
   novo->prox = l;
   return novo;
}

void imprime (Lista *li) 
{
    Lista *p;
    int i;
    for (p = li; p != NULL; p = p->prox)
        printf("%d -> ", p->conteudo);
    printf("fim.\n");
}

Lista *consulta(int y, Lista *lis)
{
    Lista *q;
    for(q = lis; q != NULL; q = q->prox)   
        if(y == q->conteudo)
            break;
    return q;
}

Lista *remover(int z, Lista *listt)
{
    Lista *ant,*atual;
    ant = NULL;
    atual = listt;
    while (atual != NULL && atual->conteudo != z) 
    {   
        ant = atual;
        atual = atual->prox;
    }
        /* verifica se achou elemento */
    if (atual == NULL)
        return listt; /* não achou: retorna lista original */
        /* retira elemento */
    if (ant == NULL) 
    {
         /* retira elemento do inicio */
        listt = atual->prox;
    }
    else 
    {
        /* retira elemento do meio da lista */
        ant->prox = atual->prox;
    }
    free(atual);
    return listt;
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
    Lista *list = NULL,*pont_cons=NULL,*pont_rem;    
    int opcao=1,valor,valor_cons,valor_rem;    
    while(opcao != 0)
    { 
        printf("------------------------------------------------\n");        
        printf("Informe a opcao:\n");
        printf("1 - inserir elemento na lista.\n");
        printf("2 - fazer uma consulta na lista.\n");
        printf("3 - remover um elemento da lista.\n");
        printf("4 - imprimir lista.\n");
        printf("0 - sair do programa.\n");  
        printf("opcao:");        
        scanf("%d",&opcao);
        switch(opcao)
        {
            case 1:
                printf("informe o valor a ser inserido:");
                scanf("%d",&valor);                
                list=insere(valor,list);
            break;
            case 2:
                printf("informe o valor a ser consultado:");
                scanf("%d",&valor_cons);
                pont_cons=consulta(valor_cons,list);
                if(pont_cons != NULL)
                    printf("Conteudo: %d esta armazenado em %p.\n",pont_cons->conteudo,pont_cons);
                else
                    printf("Valor nao encontrado!\n");
            break;
            case 3:
                printf("informe o valor a ser removido:");
                scanf("%d",&valor_rem);
                pont_rem=consulta(valor_rem,list);
                if(pont_rem != NULL)
                {        
                    list=remover(valor_rem,list);
                }
                else
                    printf("Valor nao encontrado!\n");
            break;
            case 4:      
                imprime(list);
            break;
            case 0:
            break;
            default:
                printf("opcao invalida! digite novamente!\n");
        }
                printf("------------------------------------------------\n");
     }
    libera(list);
    return 0;
}
