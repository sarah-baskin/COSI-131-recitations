# include <stdio.h>

int main() {
    char str[] = "Hello\n";
    int length = 0;
    for (; str[length] != 0; length++) {
        printf("length=%d\n", length);
    }
}