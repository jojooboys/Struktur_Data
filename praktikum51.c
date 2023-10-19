#include <stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    struct node *next;
    struct node *prev;
};
typedef struct node *ptrnode;

int main(){
    ptrnode head = NULL;
    ptrnode tail = NULL;
    head = (ptrnode)malloc(sizeof(struct node));
    tail = head;
    head->value = 10;
    head->next = NULL;
    head->prev = NULL;
}