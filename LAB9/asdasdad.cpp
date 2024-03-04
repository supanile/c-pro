#include <stdio.h>
int main() {
	char c;
	do {
		printf("Enter character:");
		c = getchar();
		putchar(c);
	}
	while(c != 'E');
}
