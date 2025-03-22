#include<stdio.h>
int square(int num)
{
	return num *num;
}
int main()
{
	int n=5;
	int sq= square(n);
	printf("Square=%d", sq);
}
