#include<stdio.h>
#include<stdlib.h>
struct stakk{
char val;
struct stakk *next;
};
typedef char Data;
typedef struct stakk Node;
Data top(Node *top);
void push(Node**top, Data v);
Data pop(Node**top);
int isEmpty(Node*top);
void deleteStack(Node**top);
void display(Node *top);

