#include<stdio.h>
#include<stdlib.h>
struct stakk{
char val;
struct stakk *next;
};
typedef char Data;
typedef struct stakk Node;
Data top(Node *top)
{
    if (isEmpty(top)) return INT_MIN;
    return top->val;
}

void push(Node**top, Data v)
{
    Node* newNode=(Node*)malloc(sizeof(Node));
    newNode->val=v;
    newNode->next=*top;
    *top=newNode;
}

Data pop(Node**top)
{
    if (isEmpty(*top)) return INT_MIN;
    Node *temp=(*top);
    Data aux=temp->val;
    *top=(*top)->next;
    free(temp);
    return aux;
}

int isEmpty(Node*top)
{
    return top=NULL;
}

void display(Node *top)
{
    while(top!=NULL)
    {
        printf("%c ",top->val);
        top=top->next;
    }
    printf("\n");
}

void deleteStack(Node**top)
{
    Node  *temp;
    while (!isEmpty(*top))
        temp=*top;
    *top=(*top)->next;
    free(temp);
}

