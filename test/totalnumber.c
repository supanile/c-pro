#include <stdio.h>

int main () {
    int number, total = 0;
    for (int count = 1; count <= 5; count++) {
        printf("Input Number %d: ",count);
        scanf("%d", &number);
        total += number;
    }
    printf("Reuslt = %d", total);
}