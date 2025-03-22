#include<stdio.h>
#include<math.h>
int main() {
	int num, orn, rem, result=0;
	printf("Enter a three digit number: ");
	scanf("%d",&num);
	orn=num;
	
	while(num != 0) {
		rem= num%10;
		result +=pow(rem, 3);
		num /= 10;
	}
	
	if(result == orn) {
		printf("%d is an armstrong number. \n",orn);
	}
	else{
		printf("%d is not an armstrong number.\n",orn);
	}
	return 0;
}
