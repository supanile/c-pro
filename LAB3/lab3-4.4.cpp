#include <stdio.h>
main(){
	double c, f;
	printf("Enter the temperature in Celsius: ");
	scanf("%lf", &c);
	printf("----------------------------------------\n");
	
	printf("The Celsius temperature is %.1f\n",c);
	f = 32 + (c*(180.0/100.0)); 
	printf("The Fahrenheit temperature is %.1f\n",f);

}

