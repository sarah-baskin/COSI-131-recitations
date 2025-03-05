# include <stdio.h>

int main() {
    char c;
    c = getchar();

    int countNum[10];

    int count = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c < '9') {
            countNum[c-'0']++;
        }
    }

    for (int i=0; i < sizeof(countNum); i++) {
        printf("%d ", countNum[i]);
    }

    return count;
}