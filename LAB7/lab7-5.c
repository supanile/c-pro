#include <stdio.h>
int main() {
	int i, j;
	for (i = 2; i <= 12; i++){
		for (j = 1; j <= 12; j++)
			printf("%d*%d= %d\n",i,j,i*j);
			printf("*************\n");
	}
	return 0;
}
