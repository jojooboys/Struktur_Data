#include <stdio.h>

void add_score(int *score1) {
    *score1 = *score1 + 5;
    printf("Score diubah ke %d\n", *score1);
}

void main() {
    int score = 0;
    
    printf("score sebelum diubah: %d\n", score);
    add_score(&score);
    printf("score setelah diubah: %d\n", score);
}