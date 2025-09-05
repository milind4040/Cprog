#include<stdio.h>

int main()
{
	int x = 200;
	int *p;
	p = &x;
	printf("Value of x: %d\n", x);
	printf("Value of x through p: %d\n", *p);
	return 0;
}
