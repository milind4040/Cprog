#include<stdio.h>

struct Employee
{
	short int empno;
	short int age;
	double salary;
	double commision;
};

typedef struct Employee Emp;

void PrintEmployee(Emp);

void PrintEmployee(Emp e)
{
	printf("Printing Employee data\n");
	printf("----------------------\n");
	printf("Employee no: %hd\n", e.empno);
	printf("Employee age: %hd\n", e.age);
	printf("Employee salary: %lf\n", e.salary);
	printf("Employee commission: %lf\n", e.commision);
}

int main()
{
	int marks[5];
	Emp emp[3];
	for(int i=0; i<3; i++)
	{
		printf("Enter the data for Employee: %d(empno/age/sal/comm)\n", i+1);
		scanf("%hd %hd %lf %lf", &emp[i].empno, &emp[i].age, &emp[i].salary, &emp[i].commision);
	}
	for(int i=0; i<3; i++)
	{
	PrintEmployee(emp[i]);
	}
	return 0;
}
