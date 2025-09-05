#include<stdio.h>
#include<malloc.h>

int main()
{
	int num = 100;
	int* p = malloc(sizeof(int)); //malloc will dynamically allocate 4 bytes
								 // 4 bytes on heap memory segment
	*p = 100;
	*p = *p + 500;
	printf("Allocated value: %d\n", *p);

	free(p);
	p = NULL;
	printf("value: %d\n", num);

	return 0;
}
