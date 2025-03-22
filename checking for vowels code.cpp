#include<stdio.h>
#include<conio.h>
int main()
{
	char alp;
	printf("Enter your vowels: ");
	scanf("%c",&alp);
	
	switch(alp)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		     printf("Vowels");
		break;
		default:
			printf("consonent");	
			
	}
	return 0;
}
