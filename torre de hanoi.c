#include <stdio.h>
#include <stdlib.h>

#define pin1 1
#define pin2 2
#define pin3 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	a = pin1;
	b = pin2;
	c = pin3;
	
	a=6;
	b=0;
	c=0;
	
	printf("--------------------------------\n");
	printf("///|A = %d | B = %d | C = %d|///\n", a, b, c);
	a = a-pin1; 
	c = c+pin1;
	printf("///|A = %d | B = %d | C = %d|///\n", a, b, c);
	a = a-pin2;
	c = pin1+pin2;
	printf("///|A = %d | B = %d | C = %d|///\n", a, b, c);	
	a = a-pin3;
	b = b+pin3;
	printf("///|A = %d | B = %d | C = %d|///\n", a, b, c);
	c = c-pin2;
    b = b+pin2;
	printf("///|A = %d | B = %d | C = %d|///\n", a, b, c);
	c = c-pin1;
    b = b+pin1;
	printf("///|A = %d | B = %d | C = %d|///\n", a, b, c);
	return 0;
}
