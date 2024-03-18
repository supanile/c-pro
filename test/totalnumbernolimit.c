#include <stdio.h>

int main () {
    int number, total = 0;
    while (1) {
        printf("Input Number: ");
        scanf("%d", &number);
        if ( number <= 0) {
            break;
        }
        total += number;
    }
    printf("Result = %d", total);
}