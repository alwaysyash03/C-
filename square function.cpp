#include<stdio.h>
#include<conio.h>
int square(int a);
int main()
{
	int n,s;
	printf("Enter the valuse of n");
	scanf("%d",&n);
	
	s=square(n);
	printf("%d",s);
}
int square(int a)
{
	return a*a;
}
