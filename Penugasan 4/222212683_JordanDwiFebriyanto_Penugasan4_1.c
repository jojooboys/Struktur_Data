/*  Buatlah fungsi untuk menghitung jumlah node dalam sebuah linked list! (looping sama seperti pada saat menampilkan nilai dari linked list).  */
#include <stdio.h>
#include <stdlib.h>

// Struktur untuk merepresentasikan node dalam linked list
struct Node {
    int data;
    struct Node* next;
};

// Fungsi untuk membuat node baru
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Fungsi untuk menghitung jumlah node dalam linked list
int countNodes(struct Node* head) {
    int count = 0;
    struct Node* current = head;

    // Loop melalui linked list dan menghitung setiap node
    while (current != NULL) {
        count++;
        current = current->next;
    }

    return count;
}

int main() {
    // Inisialisasi linked list
    struct Node* head = createNode(1);
    struct Node* second = createNode(2);
    struct Node* third = createNode(3);
    struct Node* forth = createNode(4);

    // Menghubungkan node-node menjadi linked list
    head->next = second;
    second->next = third;
    third->next = forth;

    // Menghitung jumlah node dalam linked list
    int nodeCount = countNodes(head);
    printf("Jumlah node dalam linked list: %d\n", nodeCount);

    // Dealokasi memori yang digunakan oleh linked list
    free(head);
    free(second);
    free(third);
    free(forth);

    return 0;
}
