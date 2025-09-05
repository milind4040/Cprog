#include<stdio.h>

int main()
{
	int marks[5] = {33, 44, 55, 66, 77};

	int *p = marks; //The name of array give us a starting address

	/*for(int i=0; i<5; i++)
	{
		printf("The value at index: %d is %d \n", i, marks[i]);
	}*/

	for(int i=0; i<5; i++)
	{
		printf("The value at index: %d is %d \n", i, *(p++));
		//printf("The value at index: %d is %d \n", i, *(marks++)); Not allowed as marks is a constant address cannot be use in assignment
	}





	/*printf("The value for first element of an array is: %d\n", *p);
	p++;
	printf("The value of array element: %d\n", *(p++));
	printf("The value for first element of an array is: %d\n", *p);
	*/

	return 0;
}
