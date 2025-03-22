#include<stdio.h>
#include<conio.h>
void swap(int a, int b)
{
	int temp;
	temp= a;
	a=b;
	b=temp;
	printf("Swapping in formal argument= %d %d\n",a,b);
}
int main()
{
	int a,b;nn
	printf("Enter the value of a & b: ");
	scanf("%d %d",&a,&b);
	swap(a,b);
	printf("Swapping in actual argument= %d %d",a,b);
}
