#include <stdio.h>

#define MAX_ITEM 50

typedef struct
{
    int item[MAX_ITEM];
    int jml_item;
} stack;

// Menyiapkan tumpukan kosong
void initializeStack(stack *s)
{
    s->jml_item = 0;
}

// Jika tumpukan kosong maka nilai fungsi ini 1 (true),
// jika tidak 0 (false)
int isEmpty(stack *s)
{
    return (s->jml_item == 0);
}

// Jika tumpukan sudah penuh (dalam deklarasi stack, field item
// adalah array dengan jumlah elemen sebanyak 50) maka nilai
// nilai fungsi ini 1, jika tidak 0
int isFull(stack *s)
{
    return (s->jml_item == MAX_ITEM);
}

void push(int x, stack *s)
{
    if (isFull(s))
        printf("Bilangan terlalu besar !\n");
    else
    {
        s->item[s->jml_item] = x;
        ++(s->jml_item);
    }
}

int pop(stack *s)
{
    if (isEmpty(s))
        return (0);
    else
    {
        --(s->jml_item);
        return (s->item[s->jml_item]);
    }
}

int main()
{
    stack tumpukan;
    int bil_desimal;
    int sisa_bagi;

    printf("Program konversi Desimal ke Biner\n\n");
    initializeStack(&tumpukan);
    printf("Masukkan bilangan desimal = ");
    scanf("%d", &bil_desimal);

    if (bil_desimal == 0)
        printf("Hasil konversi ke biner = 0");
    else
    {
        int n;
        for (n = bil_desimal; n > 0; n = n / 2)
        {
            sisa_bagi = n % 2;
            push(sisa_bagi, &tumpukan);
        }

        int i;
        printf("Hasil konversi ke biner = ");
        for (i = tumpukan.jml_item; i > 0; i--)
        {
            printf("%d", pop(&tumpukan));
        }
    }

    return 0;
}
