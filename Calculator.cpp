#include<stdio.h>
#include<conio.h>
int main()
{
	char ope;
	printf("Enter the operator you want to use: ");
	scanf("%c",&ope);
	int a,b;
	printf("Enter your two values: ");
	scanf("%d %d",&a, &b);
	switch(ope)
	{
		case '+':
			printf("%d+%d=%d",a,b,a+b);
			break;
		case '-':
			printf("%d-%d=%d",a,b,a-b);
			break;
		case '*':
			printf("%d*%d=%d",a,b,a*b);
			break;
	    case '/':
			printf("%d/%d=%d",a,b,a/b);
			break; 	
		
	}
	return 0;
}
