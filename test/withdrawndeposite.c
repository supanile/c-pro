#include <stdio.h>
#include <string.h>
int main() {
    char username[10], password[10];
    int choice;
    printf("Enter Username: ");
    scanf("%s", &username);
    printf("Enter Password: ");
    scanf("%s", &password);
    if ( strcmp(username,"admin") == 0 && strcmp(password,"1234") == 0) {
        printf("Login Complete!\n");
        printf("Enter choice (1,2): ");
        scanf("%d", &choice);
        if (choice == 1){
            printf("withdraw!");
        }else if(choice == 2){
            printf("deposite!");
        }else{
            printf("Logout!");
        }
    }else{
        printf("Login Failed!");
    }
}