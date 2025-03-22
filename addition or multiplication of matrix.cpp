#include<stdio.h>
int main() {
	int a[2][3] = {{1,2,3},{4,5,6}};
	int b[2][3] = {{7,8,9},{10,11,12}};
	int c[2][3];
	int i,j,k;
	char op;
	printf("Enter the operation to perform (+ or *): ");
	scanf("%c",&op);
	
	switch(op){
		case'+':
			for(i=0; i<2; i++)
			{
				for(j=0; j<3; j++)
				{
					c[i][j] = a[i][j] + b[i][j];
				}
			}
			printf("The addition of array is:\n");
			for(i=0; i<2; i++)
			{
				for(j=0; j<3; j++)
				{
					printf("%d",c[i][j]);
				}
				printf("\n");
			}
			break;
			case'*':
				for(i=0; i<3; i++)
				{
					for(j=0; j<3; j++)
					{
						c[i][j]= 0;
						for(k=0; k<3; k++)
						{
							c[i][j] += a[i][k] * b[k][j];
						}
					}
				}
				printf("The multiplication of the arrays is: \n");
				for(i=0; i<2; i++)
				{
					for(j=0; j<3; j++)
					{
						printf("%d", c[i][j]);
					}
					printf("\n");
				}
				break;
				default:
					printf("Invalid operation.\n");
	}
	return 0;
}
