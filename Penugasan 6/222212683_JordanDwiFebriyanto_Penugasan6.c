#include <stdio.h>
#include <stdlib.h>

// Definisi node untuk linked list
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// Struktur untuk stack yang menggunakan linked list
typedef struct
{
    Node *top;
} Stack;

// Inisialisasi tumpukan kosong
void initializeStack(Stack *s)
{
    s->top = NULL;
}

// Cek apakah tumpukan kosong
int isEmpty(Stack *s)
{
    return (s->top == NULL);
}

// Push data ke dalam tumpukan
void push(Stack *s, int x)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        printf("Memori tidak cukup\n");
        exit(1);
    }

    newNode->data = x;
    newNode->next = s->top;
    s->top = newNode;
}

// Pop data dari tumpukan
int pop(Stack *s)
{
    if (isEmpty(s))
    {
        printf("Tumpukan kosong\n");
        exit(1);
    }

    Node *temp = s->top;
    int data = temp->data;
    s->top = temp->next;
    free(temp);
    return data;
}

// Fungsi untuk mengkonversi bilangan desimal ke biner atau oktal
void convertDecimal(int bil_desimal, int base)
{
    Stack s;
    initializeStack(&s);

    if (bil_desimal == 0)
    {
        printf("Hasil konversi ke ");
        if (base == 2)
            printf("biner = 0");
        else if (base == 8)
            printf("oktal = 0");
    }
    else
    {
        int n = abs(bil_desimal); // Menggunakan nilai absolut untuk menghindari masalah dengan bilangan negatif
        while (n > 0)
        {
            int remainder = n % base;
            push(&s, remainder);
            n /= base;
        }

        printf("Hasil konversi ke ");
        if (base == 2)
            printf("biner = ");
        else if (base == 8)
            printf("oktal = ");

        while (!isEmpty(&s))
        {
            printf("%d", pop(&s));
        }
    }
}

int main()
{
    int bil_desimal;
    int base;

    printf("Program konversi Desimal ke Biner atau Oktal\n\n");
    printf("Masukkan bilangan desimal = ");
    scanf("%d", &bil_desimal);

    int choice;
    printf("Masukkan pilihan\n1: Biner\n2: Octal\n=> ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        base = 2;
        convertDecimal(bil_desimal, base);
        break;

    case 2:
        base = 8;
        convertDecimal(bil_desimal, base);
        break;

    default:
        printf("Pilihan salah");
        break;
    }
    
    return 0;
}
