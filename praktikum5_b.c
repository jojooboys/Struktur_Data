/*Buat sebuah program untuk menampilkan output di bawah ini menggunakan double linked list!

Input the number of nodes : 3
Input data for node 1 : 2
Input data for node 2 : 5
Input data for node 3 : 8

Data entered in the list are :
node 1 : 2
node 2 : 5
node 3 : 8
Input data for the first node : 1

After insertion the new list are : 
node 1 : 1
node 2 : 2
node 3 : 5
node 4 : 8*/

#include <stdio.h>
#include <stdlib.h>

// Structure untuk mewakili node dalam double linked list
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Fungsi untuk membuat sebuah node
struct Node* BuatNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Alokasi memori gagal.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function untuk menambahkan node di akhir double linked list
void TambahNodeAkhir(struct Node** head, int data) {
    struct Node* newNode = BuatNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
}

// Function untuk menambahkan node di awal double linked list
void TambahNodeAwal(struct Node** head, int data) {
    struct Node* newNode = BuatNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
}

// Function untuk menampilkan output dari double linked list
void display(struct Node* head) {
    struct Node* current = head;
    int i = 1;
    while (current != NULL) {
        printf("node %d : %d\n", i, current->data);
        current = current->next;
        i++;
    }
}

int main() {
    int num_nodes, data;
    struct Node* head = NULL;

    printf("Input the number of nodes: ");
    scanf("%d", &num_nodes);

    for (int i = 1; i <= num_nodes; i++) {
        printf("Input data for node %d : ", i);
        scanf("%d", &data);
        TambahNodeAkhir(&head, data);
    }

    printf("\nData entered in the list are :\n");
    display(head);

    printf("\nInput data for the first node : ");
    scanf("%d", &data);
    TambahNodeAwal(&head, data);

    printf("\nAfter insertion the new list are :\n");
    display(head);

    return 0;
}