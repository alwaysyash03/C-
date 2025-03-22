#include<stdio.h>
#include<conio.h>
int main()
{   //----------------------------------------Code for Factorial-------------------------
	int fact = 1,i,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	fact = fact*i;
	printf("%d", fact);
	return 0;
}
