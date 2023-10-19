#include <stdio.h>
struct student{
    char nama [50];
    int umur;
};

void main () {
    struct data a[5]; 
    for (int i=0; i<2;i++){
        printf ("Nama: "); scanf ("%[^\n]s",&a[i].nama);
        printf ("Umur: "); scanf ("%d", &a[i].age);
    }

}