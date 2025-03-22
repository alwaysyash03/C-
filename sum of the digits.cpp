#include<stdio.h>
int main() {
	int n,s=0,d;
	printf("Enter a no: ");
	scanf("%d",&n);
	
	while(n>0) {
		d=n%10;
		s+=d;
		n/=10;
	}
	printf("Sum of digits: %d",s);
	return 0;
}
