/*  Buatlah fungsi untuk membalik nilai dari head ke tail!
Contoh: 5->4->3->2->1 menjadi 1->2->3->4->5
Hint:
• hanya nilai saja, memory address (pointer node) tetap sama
• buat temporary pointer node sebagai bantuan: prev, current, next dan loop dari head ke tail   */
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

// Fungsi untuk mencetak linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Fungsi untuk membalik nilai dalam linked list
void reverseList(struct Node** head) {
    struct Node *prev = NULL, *current = *head, *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    // Update head agar menunjuk ke node terakhir yang sekarang adalah prev
    *head = prev;
}

int main() {
    // Inisialisasi linked list
    struct Node* head = createNode(5);
    struct Node* second = createNode(4);
    struct Node* third = createNode(3);
    struct Node* fourth = createNode(2);
    struct Node* fifth = createNode(1);

    // Menghubungkan node-node menjadi linked list
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    printf("Linked list awal: ");
    printList(head);

    // Memanggil fungsi untuk membalik nilai dalam linked list
    reverseList(&head);

    printf("Linked list setelah dibalik: ");
    printList(head);

    // Dealokasi memori yang digunakan oleh linked list
    free(head);
    free(second);
    free(third);
    free(fourth);
    free(fifth);

    return 0;
}
