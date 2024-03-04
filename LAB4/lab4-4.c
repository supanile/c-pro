#include <stdio.h>
main (){
	int w1,w2,h;
	float Area;
	printf("Width1: ");
	scanf("%d",&w1);
	printf("Width2: ");
	scanf("%d",&w2);
	printf("Height: ");
	scanf("%d",&h);
	Area = 0.5*(w1+w2)*h;
	printf("Area of trapezoid is %.2f", Area);
}
