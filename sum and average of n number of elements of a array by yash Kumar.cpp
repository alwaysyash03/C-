#include<stdio.h>
int main(){
	int arr[100], *p, sum=0, avg, n;
	printf("Enter the size of  the array: ");
	scanf("%d", &n);
	
	if(n>0 && n <= 100) {
		printf("Enter the elements of the array:\n");
		p=arr;
		for(int i=0; i<n; i++) {
			scanf("%d",p);
			p++;
		}
		p=arr;
		for(int i=0; i<n; i++) {
			sum = sum + *p;
			p++;
		}
		avg = sum/ n;
		printf("The sum of the elements of the array is %d\n", avg);
		printf("The average of the elements of the array is %d\n", avg);
	}
	return 0;
}

