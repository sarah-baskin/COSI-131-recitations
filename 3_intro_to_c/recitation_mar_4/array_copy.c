# include <stdio.h>

void array_copy(int src[], int size) {

    int copy[size];

    for (int i=0; i < size; i++) {
        copy[i] = src[i];
    }

    for (int i=0; i < size; i++) {
        printf("%d, ", copy[i]);
    } 
}

int main() {
    int src[5] = {1, 2, 3, 4, 5};
    array_copy(src, 5);
}