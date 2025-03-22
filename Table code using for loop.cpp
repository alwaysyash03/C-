#include<stdio.h>
#include<conio.h>
int main ()
{
	int num, c, i;
	printf("which table you want to know: ");
	scanf("%d", &num);
	
	for(i=1; i<=10; i++)
	{
		c=num *i;
		printf("%d\n",c);
	}
	return 0;
}
