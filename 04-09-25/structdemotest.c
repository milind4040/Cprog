#include<stdio.h>

struct Employee
{
	short int empno;
	short int age;
	double salary;
	double commision;
};

int main()
{
	struct Employee emp;
	struct Employee emp1 = {102, 35, 30000, 10000};
	struct Employee emp3;
	emp.empno = 101;
	emp.age = 30;
	emp.salary = 25000;
	emp.commision = 10000;

	printf("Enter empno age sal comm for a third employee\n");
	scanf("%hd %hd %lf %lf", &emp3.empno, &emp3.age, &emp3.salary, &emp3.commision);
	
	printf("%hd %hd %lf %lf\n", emp.empno, emp.age, emp.salary, emp.commision);
	printf("%hd %hd %lf %lf\n", emp1.empno, emp1.age, emp1.salary, emp1.commision);
	printf("%hd %hd %lf %lf\n", emp3.empno, emp3.age, emp3.salary, emp3.commision);


	

	return 0;
}
