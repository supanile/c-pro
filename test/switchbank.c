#include <stdio.h>
int main () {
    int service;
    printf("Select service number (1-3): ");
    scanf("%d", &service);
    
    switch (service){
    case 1:
        printf("Create account!\n");
        break;
    case 2:
        printf("Withdraw!\n");
        break;
    case 3:
        printf("Deposite!\n");
        break;
    default:
        printf("Invalid!\n");
    }
}