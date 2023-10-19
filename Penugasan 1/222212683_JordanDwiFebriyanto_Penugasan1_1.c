#include <stdio.h>
#include <stdlib.h>

int main() {
    char nama [50], nim [10];
    char temp;
    float kuis, uts, uas, akhir;


    printf ("Masukkan Formulir Data Mahasiswa ini\n"); //input
    
    printf ("NIM : ");
    scanf ("%s", nim);
    
    printf("Nama : ");
    scanf ("%c", &temp);
    scanf ("%[^\n]s", nama);
    
    printf ("Nilai Kuis : ");
    scanf ("%f", &kuis);
    
    printf ("Nilai UTS : ");
    scanf ("%f", &uts);
    
    printf ("Nilai UAS : ");
    scanf ("%f", &uas);
    
    puts("");                  
    
    printf ("Berikut adalah data Anda\n"); //output
    printf ("NIM : %s\n",nim);
    printf ("Nama : %s\n",nama);
    printf ("Nilai Kuis : %.2f\n", kuis);
    printf ("Nilai UTS : %.2f\n", uts);
    printf ("Nilai UAS : %.2f\n", uas);
    akhir = (0.2*kuis)+(0.3*uts)+(0.5*uas);
    printf ("Nilai Akhir : %.2f", akhir);

return 0;
}