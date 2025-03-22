#include<stdio.h>
int fib(int x){
	if(x== 0 || x==1){
		return x;
	}
	else{
		return fib(x-1) + fib(x-2);
	}
}

int main()
{
	int terms;
	printf("Enter terms: ");
	scanf("%d", &terms);
	
	for(int i=0; i<=terms; i++){
		printf("%d\t",fib(terms));
	}
	return 0;
}
