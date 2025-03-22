#include<stdio.h>
int main() {
	int arr[10], i, pos, n= 10;
	printf("Enter the elements of the array: \n");
	
	for(i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	pos =4;
	
	if(pos < 0; || pos>n) {
		printf("Deletion not possible.\n");
	}
	
	else{
		for(i=pos-1; i<n-1; i++) {
			arr[i] =arr[i+1];
		}
		n--;
		printf("The new list is: ");
		
		for(i=0; i<n; i++) {
			printf("%d",arr[i]);
		}
		printf("\n");
	}
}
