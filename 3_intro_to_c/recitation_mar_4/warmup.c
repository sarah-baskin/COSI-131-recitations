#include <stdio.h>

void collatz(int n) {
    while (n > 1) {
        if (n % 2 == 0) {
            n = n/2;
            printf("%d ", n);
        }
        else {
            n = 3 * n + 1;
            printf("%d ", n);
        }
        printf("\n");
    }
}


int main() {
    collatz(12);
}