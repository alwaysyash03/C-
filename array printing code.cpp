#include<stdio.h>
#include<conio.h>
int main()
{
	//-----------------------Printing a matrix------------------
	
	int a[3][3], i,j;
	printf("Enter 9 integer: ");
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d \t",&a[i][j]);
		printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	return 0; 
}
