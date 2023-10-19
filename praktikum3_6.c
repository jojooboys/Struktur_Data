#include <stdio.h>

struct complex {
    int imag;
    float real;
};

struct number {
    struct complex comp;
    int integers;
} num1, num2;

int main() {
    num1.integers = 12;
    num1.comp.real = 44.12;
    num2.comp.imag = 11;

    printf("\nNum 1 integers : %d", num1.integers);
    printf("\nNum 1 decimal : %.2f", num1.comp.real);
    printf("\nNum 2 integers : %d", num2.comp.imag);
    
    return 0;
}