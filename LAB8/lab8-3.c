#include <stdio.h>
void main () {
	int num;
	int sum = 0;
	printf("enter number: ");
	scanf("%d", &num);
	while(num > 0){
		sum += num;
		printf("enter number: ");
		scanf("%d", &num);
	}
	printf("summation is %d", sum);
}
