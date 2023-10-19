#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node * item;
item top;

void initialize()
{
    top = NULL;
}

void push (int value)
{
item new_node;
new_node = (item) malloc(sizeof(struct node));
new_node->data = value;
new_node->next = top;
top = new_node;
}

void pop()
{
    item tmp;
    tmp = top;
    top = top ->next;
    free(tmp);
}

void display (item top)
{
    if (top == NULL)
    {
        printf ("head kosong\n");
    }
    else
    {
        printf ("%d\n", top->data);
        if (top->next != NULL) 
        {
            display (top->next);
        }
    }
}

int DisplayTop()
{
    return top->data;
}

int main()
{
    initialize();
    int choice = 0;
    do
    {
        printf("Masukan Pilihan:\n 1: Display\n 2: Tambah (PUSH)\n 3: Hapus (POP)\n 4: Display TOP\n 5: Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                display (top);
                break;
            case 2:
                printf("Masukan Item untuk Ditambahkan :");
                int ITEM = 0;
                scanf("%d", &ITEM);
                push (ITEM);
                break;
            case 3:
                pop ();
                break;
            case 4:
                printf("Top dari head adalah %d\n\n", DisplayTop());
            case 5:
                printf("\nKELUAR ");
                break;
            default:
                printf("\nPilihan Tidak Valid.\n");
        }
    }
while (choice != 5);
return 0;
}