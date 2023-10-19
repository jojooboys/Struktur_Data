#include <stdio.h>
#define ROW 3
#define COL 4

int main(void)
{
int Matriks_A[ROW][COL];
printf ("Masukkan data Matriks A:\n");
for(int i = 0; i < ROW; i++)    //Input
{
    printf ("Masukkan baris ke-%i Matriks A:\n",i+1);
    for(int j = 0; j < COL; j++)
    {
        printf ("Kolom ke-%i: ",j+1);
        scanf("%d", &Matriks_A[i][j]);
    }
}

printf("\nMatriks A adalah : \n"); //Output
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