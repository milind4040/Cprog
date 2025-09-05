#include<stdio.h>

struct StudentType
{
	short int rno;
	short int age;
	short int marks1;
	short int marks2;
};

typedef struct StudentType Student;

void InitializeStudent(Student*);

void InitializeStudent(Student* s)
{
	printf("Entering student data \n");
	printf("Enter student details(rno/age/marks1/marks2)\n");
	scanf("%hd %hd %hd %hd", &s->rno, &s->age, &s->marks1, &s->marks2);
}

/*void DisplayStudentDetails(Student);

void DisplayStudentDetails(Student stud)
{
	printf("Displaying student details(rno/age/marks1/marks2)\n");
	printf("%hd \t %hd \t %hd \t %hd\n", stud.rno, stud.age, stud.marks1, stud.marks2);
	
}*/

void DisplayStudentDetails(const Student*);

void DisplayStudentDetails(const Student* stud)
{
	printf("Displaying student details(rno/age/marks1/marks2)\n");
	//stud->marks2=stud->marks2+10;
	printf("%hd \t %hd \t %hd \t %hd\n", stud->rno, stud->age, stud->marks1, stud->marks2);
}


int main()
{
	//Student stud[3];
	Student* stud[3];
	InitializeStudent(&stud[0]);
	InitializeStudent(&stud[1]);
	InitializeStudent(&stud[2]);
	printf("Displaying student data\n");
	for(int i=0; i<3; i++)
	{
		DisplayStudentDetails(&stud[i]);
	}


	return 0;
}
