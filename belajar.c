#include <stdio.h>
#include <conio.h>
kurang (int *c, int *d);  //prototype fungsi kurang

main()
{
int a, b;
a = 4;
b = 7;

printf("Nilai sebelum pemanggilan fungsi \n");
printf("a = %d , b = %d \n\n", a, b);
tambah(&a, &b);  //parameter actual
printf("Nilai setelah pemangilan fungsi \n");
printf("a = %d , b = %d \n\n", a, b);
getchar();
}

kurang(int *c, int *d)   //parameter formal
{
*c = *c - 2;
*d = *d - 4;

printf("Nilai fungsi  kurang \n");
printf("c = %d , d = %d \n\n", *c, *d);
}