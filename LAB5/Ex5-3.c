#include <stdio.h>
#include <math.h>

main () {
	int choice;
	double num1,num2;
	
	printf("1. Plus\n");
	printf("2. Minus\n");
	printf("3. Multiply\n");
	printf("4. Divide\n");
	printf("5. Power\n");
	printf("\n\t Select: ");
	scanf("%d", &choice)
	printf("1. Plus\n");
	scanf("%d", &num1)
	printf("1. Plus\n");
	scanf("%d", &num2)
	
	swtich (choice){
		case 1:
		printf("%4.2lf + %4.2lf = %4.2lf\n, num1, num2, num1+num2");
		break;
		case 2:
		printf("%4.2lf - %4.2lf = %4.2lf\n, num1, num2, num1-num2");
		break;
		case 3:
		printf("%4.2lf * %4.2lf = %4.2lf\n, num1, num2, num1*num2");
		break;
		case 4:
		printf("%4.2lf / %4.2lf = %4.2lf\n, num1, num2, num1/num2");
		break;
		case 5:
		printf("%4.2lf power %4.2lf = %4.2lf\n, num1, num2, pow(num1,num2)");
		break;
		default:
		printf("Please select choice 1-5 only \n");
}
