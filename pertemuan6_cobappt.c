#include <stdio.h>
#include <stdlib.h>

#define N 10
int STACK [N], TOP;

void display (int stack[])
{
    if (TOP >= 0) {
        printf("Isi STACK: \n");
        for (int i = TOP; i >=0;i--)
        {
            printf("\n%d", stack[i]);
        }
    }
    else{
        printf("STACK kosong .\n");
    }

    printf("\n\n");
}

void push(int stack[], int item)
{
    if (TOP == N-1) {
        printf("\nSTACK penuh, tidak dapat ditambahkan item baxy\n");
    }
    else{
        TOP++;
        stack [TOP]=item;
    }
}

void pop(int stack[])
{
    if(TOP == -1) {
        printf("STACK sudah kosong.\n");
    }
    else{
        int deletedItem = stack [TOP];
        TOP--;
        printf("%d telah terhapus\n", deletedItem);
    }
}

int main()
{
    TOP = -1;
    int choice = 0;
    do
    {
        printf("Masukan Pilihan:\n 1: Display\n 2: Tambah (PUSH)\n 3: Hapus (POP)\n 4: Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                display (STACK);
                break;
            case 2:
                printf("Masukan Item untuk Ditambahkan :");
                int ITEM = 0;
                scanf("%d", &ITEM);
                push (STACK, ITEM);
                break;
            case 3:
                pop (STACK);
                break;
            case 4:
                printf("\nKELUAR ");
                break;
            default:
                printf("\nPilihan Tidak Valid.");
        }
    }
while (choice != 4);
return 0;
}