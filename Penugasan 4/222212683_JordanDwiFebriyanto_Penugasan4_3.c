/*  Buat program untuk menyimpan data students berisi int nim, char nama[50] secara dinamis!    */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktur untuk merepresentasikan data mahasiswa
struct Student {
    int nim;
    char nama[50];
    struct Student* next;
};

// Fungsi untuk membuat node baru
struct Student* createStudent(int nim, const char* nama) {
    struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));
    if (newStudent == NULL) {
        perror("Alokasi memory Error");
        exit(EXIT_FAILURE);
    }

    newStudent->nim = nim;
    strncpy(newStudent->nama, nama, sizeof(newStudent->nama));
    newStudent->next = NULL;

    return newStudent;
}

// Fungsi untuk menambahkan mahasiswa baru ke linked list
void addStudent(struct Student** head, int nim, const char* nama) {
    struct Student* newStudent = createStudent(nim, nama);

    if (*head == NULL) {
        *head = newStudent;
    } else {
        struct Student* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newStudent;
    }
}

// Fungsi untuk mencetak data mahasiswa dari linked list
void printStudents(struct Student* head) {
    struct Student* current = head;
    printf("Daftar Mahasiswa:\n");
    while (current != NULL) {
        printf("NIM: %d, Nama: %s\n", current->nim, current->nama);
        current = current->next;
    }
}

// Fungsi untuk membebaskan memori yang digunakan oleh linked list
void freeStudents(struct Student* head) {
    struct Student* current = head;
    while (current != NULL) {
        struct Student* temp = current;
        current = current->next;
        free(temp);
    }
}

int main() {
    printf("\033[2J");

    int banyak_mahasiswa; // Jumlah mahasiswa
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &banyak_mahasiswa);
    getchar(); // Untuk mengonsumsi karakter newline ('\n') yang tersisa

    struct Student* head = NULL;

    // Menambahkan data mahasiswa ke linked list
    for (int i = 0; i < banyak_mahasiswa; i++) {
        int nim;
        char nama[50];

        printf("Masukkan NIM mahasiswa %d: ", i + 1);
        scanf("%d", &nim);

        printf("Masukkan nama mahasiswa %d: ", i + 1);
        scanf(" %[^\n]", nama);

        printf("\n");

        addStudent(&head, nim, nama);
    }

    // Mencetak data mahasiswa
    printStudents(head);

    // Membebaskan memori yang digunakan oleh linked list
    freeStudents(head);

    return 0;
}