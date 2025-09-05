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
	Emp emp;
	Emp emp1 = {102, 35, 30000, 10000};
	Emp emp3;

	emp.empno = 101;
	emp.age = 30;
	emp.salary = 25000;
	emp.commision = 10000;

	printf("Enter empno age sal comm for a third employee\n");
	scanf("%hd %hd %lf %lf", &emp3.empno, &emp3.age, &emp3.salary, &emp3.commision);
	
	//printf("%hd %hd %lf %lf\n", emp.empno, emp.age, emp.salary, emp.commision);
	//printf("%hd %hd %lf %lf\n", emp1.empno, emp1.age, emp1.salary, emp1.commision);
	//printf("%hd %hd %lf %lf\n", emp3.empno, emp3.age, emp3.salary, emp3.commision);

	PrintEmployee(emp);
	PrintEmployee(emp1);
	PrintEmployee(emp3);
	

	return 0;
}
