#include <stdio.h>
#define ROW 3
#define COL 4

int main(void)
{
int Matriks_A[ROW][COL];
printf ("Masukkan data Matriks A:\n");
for(int i = 0; i < ROW; i++)    //Input
{
    for(int j = 0; j < COL; j++)
    {
        scanf("%d", &Matriks_A[i][j]);
    }
}

printf("Matriks_A adalah : \n"); //Output
for(int i = 0; i < ROW; i++)
{
    for(int j = 0; j < COL; j++)
    {
        printf("%d ", Matriks_A[i][j]);
    }
    printf("\n");
}
return 0;
}

hehe