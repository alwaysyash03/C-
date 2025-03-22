#include<stdio.h>
int main() {
	int arr1[5], arr2[5], arr3[10];
	int i,j, temp;
	
	printf("Enter the elements of the first array: \n ");
	for(i=0; i<5; i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter the elements of the second array: \n");
	for(i=0; i<5; i++) {
		scanf("%d",&arr2[i]);
	}
	
	for(i=0; i<5; i++) {
		arr3[i] = arr1[i];
		
		arr3[i +5] = arr2[i];
	}
	
	for(i=0; i<10; i++) {
		for(j=i + 1; j<10; j++) {
			if(arr3[i] < arr3[j]){ 
			temp = arr3[i];
			arr3[i]= arr3[j];
			arr3[j] = temp;
			}
		}
	}
	
	printf("The merged and sorted array in descending order is: \n");
	for(i=0; i<10; i++) {
		printf("%d", arr3[i]);
	}
	printf("\n");
	return 0;
}
