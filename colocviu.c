#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node 
{
    char instructiune[15];
    struct node * next;
};

typedef struct node node;

node* createNode( char * comanda)
{
   node *aux;
   aux=(node*)malloc(sizeof(node));
   strcpy(aux->instructiune, comanda);
   aux->next=NULL;
   return aux;
}

node* deleteNode(node *head, node *prev)
{
    node *aux;
  
    if(head==NULL)
    return NULL;
  
    if(head==prev)
    {
        aux=head;
        head=head->next;
        free(aux);
        return head;
    }
  
    node *p;
    p=head;

    while(p->next!=NULL)
    {
        if(p->next==prev)
        {
            aux=prev;
            p->next=p->next->next;
            free(aux);
            return head;
        }
        else p=p->next;
    }
}

int main()
{
    node *head, *p;
    int n, k=2;
    char aux[15];
    printf("Optiunea 1/2:");
  
    int opt;
    scanf("%d",&opt);
  
    if(opt==1)
    {
        printf("Comanda 1:");
        scanf("%s", aux);
        p=createNode(aux);
        head=p;
      
        while(strcmp(aux, "executa")!=0)
        {
            printf("Comanda %d:", k);
            scanf("%s", aux);
            p->next=createNode(aux);
            k++;
            p=p->next;
        }
      
        node *q;
        q=head;
      
        while(q!=NULL)
        {
            printf("%s\n", q->instructiune);
            q=q->next;
        }
    }

    if(opt==2)
    {
        printf("Comanda 1:");
        scanf("%s", aux);
        p=createNode(aux);
        head=p;
      
        while(strcmp(aux, "executa")!=0)
        {
            printf("Comanda %d:", k);
            scanf("%s", aux);
            p->next=createNode(aux);
            k++;
            p=p->next;
        }
      
        node *q, *prev1, *prev2;
        q=head;
        prev1=q;
        prev2=q;
      
        while(q!=NULL)
        {
            if(strcmp(prev1->instructiune, "sterge")==0)
            {
                head=deleteNode(head, prev1);
                head=deleteNode(head, prev2);
            }
      
            prev2=prev1;
            prev1=q;
            q=q->next;
        }
      
        q=head;
      
        while(q!=NULL)
        {
            printf("%s\n",q->instructiune);
            q=q->next;
        }
    }
}
