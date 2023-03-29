#include<stdio.h>
#include<stdlib.h>
typedef int Data ;
struct Elem{
Data val;
struct Elem * next ;
};
typedef struct Elem Node ;
struct Q{
Node *front ,*rear ;
};
typedef struct Q Queue ;
Queue* createQueue();
void enQueue(Queue*q, Data v);
Data deQueue(Queue*q);
int isEmpty(Queue*q);
void deleteQueue(Queue*q);
