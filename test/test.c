#include <stdio.h>
int main () {
    int score[100] = {10,20,30};
    for(int i=0;i< 5;i++){
        printf("%d. %d \n",i+1,score[i]);
    }
}