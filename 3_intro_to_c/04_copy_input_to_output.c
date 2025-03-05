# include <stdio.h>

int main() {
    char c;
    c = getchar();

    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}