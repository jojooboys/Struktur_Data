#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 5

typedef struct {
    char nama[20];
    int alpro;
    int kalkulus;
} Mahasiswa;

int count = 0;

void enqueue(Mahasiswa students[], char n[], int alp, int kal)
{
    Mahasiswa temp;
    strcpy(temp.nama, n);
    temp.alpro = alp;
    temp.kalkulus = kal;

    if (count < MAX_STUDENTS) {
        students[count] = temp;
        count++;
    } else {
        // Cari mahasiswa terburuk
        int index_worst = 0;
        for (int i = 1; i < MAX_STUDENTS; i++) {
            if (students[i].alpro < students[index_worst].alpro ||
                (students[i].alpro == students[index_worst].alpro && students[i].kalkulus < students[index_worst].kalkulus)) {
                index_worst = i;
            }
        }

        // Ganti mahasiswa terburuk jika ada mahasiswa baru dengan prioritas yang lebih tinggi
        if (temp.alpro > students[index_worst].alpro ||
            (temp.alpro == students[index_worst].alpro && temp.kalkulus > students[index_worst].kalkulus)) {
            students[index_worst] = temp;
        }
    }
}

void display(Mahasiswa students[])
{
    if (count == 0)
    {
        printf("Belum ada yang daftar\n");
    }
    else
    {
        printf("Daftar 5 Mahasiswa Terbaik (urutan dari nilai terbaik):\n");
        for (int i = 0; i < count; i++) {
            printf("Nama:%s Alpro: %d Kalkulus: %d\n", students[i].nama, students[i].alpro, students[i].kalkulus);
        }
    }
}

int main()
{
    Mahasiswa wakil[MAX_STUDENTS];
    enqueue(wakil, "Eko", 50, 20);
    enqueue(wakil, "Budi", 50, 20);

    enqueue(wakil, "bambang", 60, 20);
    enqueue(wakil, "Eka", 60, 20);
    enqueue(wakil, "wawo", 60, 20);

    enqueue(wakil, "Ame", 60, 30);

    display(wakil);

    return 0;
}
