#include<stdio.h>

struct employee
{
	int eid;
	double sal;
	double comm;
	int age;
	double grosssal;

};
typedef struct employee empl;

double getgrosssal(empl);
void displaydata(empl);

double getgrosssal(empl e)
{
	double gross;
	gross = (e.sal + e.comm)*12;
	return gross;
}

void displaydata(empl e)
{
	printf("\nEmployee Details:\n");
	printf("========================\n");
	printf("Employee eid:%d\n",e.eid);
	printf("Employee sal:%lf\n",e.sal);
	printf("Employee comm:%lf\n",e.comm);
	printf("Employee age:%d\n",e.age);
	printf("Employee grosssal:%lf\n",e.grosssal);
}


int main()

{
	empl emp1,emp2,emp3;

	emp1.eid=101;
	emp1.sal=50000;
	emp1.comm=1500;
	emp1.age=35;
        emp1.grosssal = getgrosssal(emp1);

	printf("Enter emp2 details:eid,sal,comm,age\n");
	scanf("%d %lf %lf %d",&emp2.eid,&emp2.sal,&emp2.comm,&emp2.age);
        emp2.grosssal = getgrosssal(emp2);
	

	printf("Enter emp3 details:eid,sal,comm,age\n");
        scanf("%d %lf %lf %d",&emp3.eid,&emp3.sal,&emp3.comm,&emp3.age);
        emp3.grosssal = getgrosssal(emp3);
	
	
	
	displaydata(emp1);
	displaydata(emp2);
	displaydata(emp3);

	return 0;
}
