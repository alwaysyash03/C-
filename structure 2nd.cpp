#include<stdio.h>
union student
{
	char name[10];
	int roll;
	float marks;
	

}s;
int main()
{
	union student s[3];
	int i;
	printf("Enter the unionure information\n");
	
	for(i=0; i<3; i++)
	{
	scanf("%s",&s[i].name);
	scanf("%d",&s[i].roll);
	scanf("%f",&s[i].marks);
    }
	
	//----------------------------
	for(i=0; i<3; i++)
	{
	printf("%s",s[i].name);
	printf("%d",s[i].roll);
	printf("%f",s[i].marks);
    }
}			
