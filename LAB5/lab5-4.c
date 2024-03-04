#include <stdio.h>
main (){
	int no,cost;
	printf("The number of membership years: ");
	scanf("%d", &no);
	if (no >= 3) 
		cost = 300;
		else if (no >= 2) 
			cost = 200;
			else 
				cost = 100;
	printf("The cost is %d", cost);
}
