#include<stdio.h>

void printNamaste();
void printBonjour();

int main() {
	printf("Enter f for French and i for Indian: ");
	char ch;
	scanf("%c",&ch);
	if(ch=='i') {
		printNamaste();
	}
	else {
		printBonjour();
	}
	return 0;
	
}

void printNamaste() {
	printf("Namaste\n");
}

void printBonjour() {
	printf("Bonjour\n");
}
