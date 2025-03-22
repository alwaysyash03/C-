#include<stdio.h>
#include<conio.h>
int main()
{
	int num,c,i;
	printf("Enter any number: ");
	scanf("%d",&num);
	i=1;
	while(i<=10)
	{
		c=num*i;
		printf("%d\n",c);
		i++;
	}
	return 0;
}
