# include <stdio.h>

void array_reverse(int target[], int size) {
    
    for (int i=0; i < size/2; i++) {
        int temp = target[i];
        target[i] = target[size - 1 - i];
        target[size - 1 - i] = temp;
    }

    for (int i=0; i < size; i++) {
        printf("%d, ", target[i]);
    } 

}


int main() {
    int target[5] = {0, 1, 2, 3, 4};
    array_reverse(target, 5);
}