#include <stdio.h>
int a = 1;
float b = 2;
float count (int c){
	float d = 3.3;
	d = d + c + b + a;
	return d;
}
main(){
	float e;
	e = count(b);
	printf("count result = %f\n", e);
}
