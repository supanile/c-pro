#include <stdio.h>

int main () {
    //input
    int count;
    printf("Input Count = ");
    scanf("%d", &count);

    int number[count];
    float sum, avg;
    for(int i = 0; i < count; i++){
        printf("Enter Number %d: ",i+1);
        scanf("%d", &number[i]);
    }

    //process
    for(int j = 0; j < count; j++) {
        sum += number[j];
    }
    avg = sum/count;

    //output
    printf("Average = %.2f\n", avg);
}