#include<stdio.h>

int main()
{
	int num1 = 100;
	int* ptr;
	double num2 = 300.0;

	ptr = &num1;
	printf("Value of num1: %d\n", num1);
	printf("Value of num1 referring through pointer: %d\n", *ptr);
	*ptr = 200;
	printf("Value of num1 referring through pointer: %d\n", *ptr);
	//ptr = &num2; 
	printf("Address of num1: %p\n", ptr);

	return 0;
}
