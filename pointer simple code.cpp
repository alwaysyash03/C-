#include<stdio.h>
int main() {
	int age=22;
	int *ptr=&age;
	int _age=*ptr;
	
	//address
	printf("%d", &age);
	return 0;
}
