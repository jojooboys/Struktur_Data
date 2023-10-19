#include <stdio.h>
#include <stdlib.h>

    float keliling (float p, float l){
        float K;
        K = 2*(p+l);

        return K;
    }

    float luas (float p, float l){
        float L;
        L = p * l;

        return L;
    }

void main (){
    float panjang, lebar;
    printf ("Program menghitung Keliling dan Luas Persegi Panjang\n");  //input
    printf ("Panjang Persegi Panjang = "); scanf ("%f", &panjang);
    printf ("Lebar Persegi Panjang = "); scanf ("%f", &lebar);
    puts("");
    printf ("Keliling = %.2f\n", keliling(panjang, lebar)); //output
    printf ("Luas = %.2f\n",luas(panjang, lebar));

}