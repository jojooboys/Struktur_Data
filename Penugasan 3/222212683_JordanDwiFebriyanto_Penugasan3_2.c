// Buatlah contoh program sederhana yang memuat sebuah structure dengan elemen pointer di dalamnya!

#include <stdio.h>

struct data {
    int *pointer; // sebuah structure dengan elemen pointer di dalamnya
};

int main() {
    struct data value;
    int x = 23;

    value.pointer = &x; //variabel value.pointer diberi nilai variabel x dengan menunjuk variabel x
    printf("Angka yang disimpan dalam struktur : %d\n", *value.pointer);
    printf("Alamat yang ditunjuk oleh pointer: %d\n\n", value.pointer);

    *value.pointer = 76; //variabel value.pointer dengan alamat memori yang sama tetapi menunjuk nilai yang berbeda
    printf("Angka setelah diubah melalui struktur : %d\n", *value.pointer);
    printf("Alamat yang ditunjuk oleh pointer: %d\n", value.pointer);

    return 0;
} 