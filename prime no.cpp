#include<stdio.h>
int prime(int x);

int main()
{
	int x;
	printf("Enter any integer: ");
	scanf("%d",&x);
	
	if(prime(x))
	{
		printf("Prime");
	}
	else{printf("Not");
	}
	return 0;
}

int prime(int x)
{
	if(x==1)
	{
		return 0;
	}
	for(int i=2; i*i<=x; i++)
	{
		if(x%i==0)
		{
			return 0;
		}
	}
	return 1;
}
