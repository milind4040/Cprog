#include<stdio.h>
#include<stdlib.h>
#define n 10
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

void displaydata(empl*);
void inputdata(empl*);

double getgrosssal(empl e)
{
        double gross;
        gross = (e.sal + e.comm)*12;
        return gross;
}

void inputdata(empl* e)
{

        printf("Enter Employee details:eid,sal,comm,age\n");
	for(int i=1;i<=n;i++)
        scanf("%d %lf %lf %d",&e[i].eid,&e[i].sal,&e[i].comm,&e[i].age);

}


void displaydata(empl* e)
{
        printf("\nEmployee Details:\n");
        printf("========================\n");
        printf("Employee eid:%d\n",e->eid);
        printf("Employee sal:%lf\n",e->sal);
        printf("Employee comm:%lf\n",e->comm);
        printf("Employee age:%d\n",e->age);
        printf("Employee grosssal:%lf\n",e->grosssal);
}


int main()
{       
	empl emp[n];
	
	char choice;

	printf("Would you like to add Employee:(Y/N)");
	scanf("%c",&choice);
	
	switch(choice)
	{
		case Y:
			for(int i=1;i<=n;i++)
			 inputdata(&emp[i]);
		case N:
			exit;
	}
	for(int i=1;i<=n;i++)
	emp[i].grosssal = getgrosssal(emp[i]);

	for(int i=1;i<=n;i++)
        displaydata(emp[i]);

        return 0;
}
