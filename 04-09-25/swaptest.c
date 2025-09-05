#include<stdio.h>

/*void swap(int, int);

void swap(int n1, int n2)
{
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}
*/

void swap(int*, int*);

void swap(int* n1, int* n2)
{
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
int main()
{
	int num1, num2;
	printf("Enter values for num1 & num2\n");
	scanf("%d %d", &num1, &num2);
	printf("Values before swapping :%d/%d\n", num1, num2);

	swap(&num1, &num2);
	printf("Values after swapping :%d/%d\n", num1, num2);

	return 0;
}
