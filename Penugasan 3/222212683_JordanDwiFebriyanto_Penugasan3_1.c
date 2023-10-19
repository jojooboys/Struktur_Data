//Buatlah contoh program sederhana yang memuat elemen array di dalam structure DAN sekaligus memuat structure di dalam array.
#include <stdio.h>

struct database {
    char nama[50], kelas[50], nim [20];
    float nilai[7]; //index 0: Nilai StrukDat; 1: Nilai BasDat; 2: Nilai Metstat 2; 3: Nilai PPKN; 4: Nilai MPS; 5: Nilai Statmath 2; 6: Nilai SIG
};

int main() {
    int jumlah_mahasiswa;
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlah_mahasiswa);

    struct database mahasiswa[jumlah_mahasiswa]; /* array dalam structure --> mahasiswa[1,2,...,n] merupakan array dari structure database
    sekaligus structure dalam array --> setiap elemen dari array mahasiswa adalah struktur yang memiliki nama, nim, dan kelas */

    for (int i = 0; i < jumlah_mahasiswa; i++)
    {
        printf("Mahasiswa ke-%d: \n", i + 1);
        printf("NIM: ");
        scanf(" %[^\n]s", &mahasiswa[i].nim);
        printf("Nama: ");
        scanf(" %[^\n]s", mahasiswa[i].nama);
        printf("Kelas: ");
        scanf(" %[^\n]s", mahasiswa[i].kelas);
        printf("1. Nilai Strukdat: ");
        scanf("%f", &mahasiswa[i].nilai[0]);
        printf("2. Nilai BasDat: ");
        scanf("%f", &mahasiswa[i].nilai[1]);
        printf("3. Nilai Metstat 2: ");
        scanf("%f", &mahasiswa[i].nilai[2]);
        printf("4. Nilai PPKN: ");
        scanf("%f", &mahasiswa[i].nilai[3]);
        printf("5. Nilai MPS: ");
        scanf("%f", &mahasiswa[i].nilai[4]);
        printf("6. Nilai Statmath 2: ");
        scanf("%f", &mahasiswa[i].nilai[5]);
        printf("7. Nilai SIG: ");
        scanf("%f", &mahasiswa[i].nilai[6]);

        printf("\n");
    }

    printf("\n ~~~ HASIL PENGOLAHAN NILAI Indeks Prestasi Semester ~~~\n\n"); //Output
        for (int i = 0; i < jumlah_mahasiswa; i++)
        {
            printf("%d. Nama: %s\n NIM: %s \n Kelas: %s\n", i + 1, mahasiswa[i].nama, mahasiswa[i].nim, mahasiswa[i].kelas);
            printf("IP Semester 3: %.2f\n\n", (mahasiswa[i].nilai[0] + mahasiswa[i].nilai[1] + mahasiswa[i].nilai[2] + mahasiswa[i].nilai[3] + mahasiswa[i].nilai[4] + mahasiswa[i].nilai[5] + mahasiswa[i].nilai[6])*4/700);
        }

        return 0;
    }