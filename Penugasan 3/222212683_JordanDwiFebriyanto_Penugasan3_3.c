//Buatlah contoh program sederhana yang memuat sebuah structure dengan elemen pointer di dalamnya.

#include <stdio.h>

struct data {
    char nama[50], kelas [5], nim[20];
};

int main() {
    char temp;
    struct data mahasiswa;
    struct data *pointer_mahasiswa; //pointer yang menunjuk sebuah structure

    printf("~~ Masukkan Data ~~\n");
    printf("Masukkan nama mahasiswa : "); scanf ("%[^\n]s",&mahasiswa.nama);
    scanf ("%c", &temp);
    printf("Masukkan kelas mahasiswa : "); scanf ("%[^\n]s",&mahasiswa.kelas);
    scanf ("%c", &temp);
    printf("Masukkan NIM mahasiswa : "); scanf ("%[^\n]s",&mahasiswa.nim);

    pointer_mahasiswa = &mahasiswa;

    printf("\n~~ Hasil Input Data ~~\n");
    printf("Nama : %s\n", pointer_mahasiswa->nama);
    printf("Kelas : %s\n", pointer_mahasiswa->kelas);
    printf("NIM : %s\n", pointer_mahasiswa->nim);

    return 0;
}
