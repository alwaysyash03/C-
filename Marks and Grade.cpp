#include<stdio.h>
#include<conio.h>
int main()
{
	int e,m,s,t,p;
	printf("Enter your marks: ");
	scanf("%d %d %d",&e,&m,&s);
	t=e+m+s;
	p=t/300*100;
	if(p>=80 || p<=100)
	{
		printf("A Grade");
	}
	else if(p>=60 || p<80)
	{
		printf("B Grade");
	}
	else
	{
		printf("C Grade");
	}
	return 0;
}
