#include<stdio.h>
int main() {
    char alp;
	printf("Enter any alphabet: ");
	scanf("%c",&alp);
	
	switch(alp) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		      printf("Vowel");
	    break;
		default: 
		      printf("Consonent");		  	
	}
	
	return 0;
}
