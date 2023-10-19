#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct note
{
    int data;
    struct node* next;
};
typedef struct node* item;

struct queue
{
    int count;
    item front;
    item rear;
};
typedef struct queue* antrian;

void initialize(antrian q)
{
    q->count = 0;
    q->front = NULL;
    q->rear = NULL;
}

bool isempty(antrian q)
{
    return (q->rear == NULL);
}