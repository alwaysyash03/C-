#include<stdio.h>
#include<conio.h>
int main()
{
	//----------------------------------Printing star----------------
	int i,j,n;
	printf("Enter  the value of n: ");
	scanf("%d",&n);
	for(i=0; i<3; i++)
	{
	    for(j=0; j<n-i; j++)
	    {
		   printf("*");
	    }
	printf("\n");
	}
	return 0;
}
