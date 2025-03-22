#include<stdio.h>
#pragma pack(1)

struct abc
{
	int a; 
	float b;
	char c[10];
	
};

union xyz
{
	int p;
	float q;
	char r[10];
	
};

int main()
{
	struct abc a1;
	union xyz x1; 
	printf("size of structure: %d\n",sizeof(a1));
	printf("size of union: %d",sizeof(x1));
}
