#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}
*first=NULL;

void create(int B[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=B[0];
    first->next=NULL;
    last=first;
    
    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=B[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    
}

void display(struct Node *p){
    while(p!=0)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

int count(struct Node *p)
{
    int c=0;
    while(p)
    {
        c++;
        p=p->next;
    }
    return c;
    
}


int main(){
    int B[]={1,2,3,4,5,6,7,8,9};
    create(B,9);
    display(first);
    printf("\nLength of the linked list is %d",count(first));
    return 0;
}

