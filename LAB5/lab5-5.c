#include <stdio.h>
main (){
	int units;
	float cost;
	printf("Please enter the number of units :");
	scanf("%d", &units);
	switch(units){
		case 1:
			cost = units*100;
			break;
		case 2: case 3:
			cost = units*95;
			break;
		case 4: case 5:
			cost = units*90;
			break;
		default:
			cost = units*80;
	}
	printf("The total cost is $ %.2f", cost);
}
