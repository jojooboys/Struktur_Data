#include <stdio.h>
int main(int argc, char const *argv[])
{ 
    printf("%u byte\n", sizeof(char)); 
    printf("%u byte\n", sizeof(int)); 
    printf("%u byte\n", sizeof(float)); 
    printf("%u byte", sizeof(double)); 
 return 0;
}