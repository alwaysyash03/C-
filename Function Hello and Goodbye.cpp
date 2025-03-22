#include<stdio.h>
//function/prototype
void printHello();
void printGoodbye();

int main() {
	printHello(); //function calling
	printGoodbye();
	return 0;
}

//function definition
void printHello() {
	printf("Hello!\n");
}

void printGoodbye() {
	printf("Goodbye:)\n");
}
