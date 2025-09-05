#include<stdio.h>

struct Employee
{
	short int empno;
	short int age;
	double salary;
	double commision;
};

typedef struct Employee Emp;

void InputEmployee(Emp*);
void PrintEmployee(const Emp*);

void PrintEmployee(const Emp* e)
{
	printf("Printing Employee data\n");
	printf("----------------------\n");
	printf("Employee no: %hd\n", (*e).empno);
	printf("Employee age: %hd\n", e->age);
	printf("Employee salary: %lf\n", e->salary);
	printf("Employee commission: %lf\n", e->commision);
	//e->commision = 0;
}

void InputEmployee(Emp* e)
{
	printf("Enter Employee data(empno,age,sal,comm)\n");
	scanf("%hd %hd %lf %lf", &e->empno, &e->age, &e->salary, &e->commision);
}

int main()
{
	Emp e;
	InputEmployee(&e);
	PrintEmployee(&e);

	return 0;
}
