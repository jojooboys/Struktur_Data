/* Aturan Scope pada Bahasa C */
#include<stdio.h>

int main()
{ //(1)
    { //(2)
        int x = 10, y = 20; 
        {//(3)
            printf("x = %d, y = %d\n", x, y);
            {//(4)
                int y = 40;
                x++;
                y++;
                printf("x = %d, y = %d\n", x, y);
            }//(4)
            printf("x = %d, y = %d\n", x, y);
        } //(3)
    } //(2)
 return 0;
} //(1)