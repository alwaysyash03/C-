#include<stdio.h>
union student
{
	char name[10];
	int roll;
	float marks;

}s;
int main()
{
	printf("Enter the unionure information\n");
	printf("Enter your name: ");
	scanf("%s",&s.name);
	printf("Enter your roll no.: ");
	scanf("%d",&s.roll);
	printf("Enter your marks: ");
	scanf("%f",&s.marks);
	
	
	printf("%s",s.name);
	printf("%d",s.roll);
	printf("%f",s.marks);
}			
