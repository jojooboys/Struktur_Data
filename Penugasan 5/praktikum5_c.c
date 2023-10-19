/*Bagaimana untuk membalik nilai-nilai dalam double linked list (tail ke head)?*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Alokasi Memori Gagal.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void TambahNodeAkhir(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
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

void output(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void BalikList(struct Node** head) {
    struct Node* current = *head;
    struct Node* temp = NULL;
    
    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != NULL) {
        *head = temp->prev;
    }
}

int main() {
    struct Node* head = NULL;
    int num_nodes, data;

    printf("Input the number of nodes: ");
    scanf("%d", &num_nodes);

    for (int i = 1; i <= num_nodes; i++) {
        printf("Input data for node %d : ", i);
        scanf("%d", &data);
        TambahNodeAkhir(&head, data);
    }

    printf("\nList data asli:\n");
    output(head);

    BalikList(&head);

    printf("\nList data yang telah dibalik (tail ke head):\n");
    output(head);

    return 0;
}
