#include<stdio.h>
#include<float.h>

struct Book{
	char title[100];
	char author[100];
	float price;
};

int main() {
	struct Book books[3];
	
	for(int i=0; i<3; i++) {
		printf("Enter the details for Book %d:\n",i +1);
		printf("Title: ");
		scanf("%s",books[i].title);
		
		printf("Author: ");
		scanf("%s",books[i].author);
		
		printf("Price: ");
		scanf("%f",&books[i].price);
	}
	
	struct Book mostExpensive;
	float maxPrice = FLT_MIN;
	for(int i= 0; i<3; i++) {
		if(books[i].price > maxPrice) {
			maxPrice = books[i].price;
			mostExpensive = books[i];
		}
	}
	
	struct Book lowestPriced;
	float minPrice = FLT_MAX;
	for(int i= 0; i<3; i++) {
		if(books[i].price < minPrice) {
			minPrice = books[i].price;
			lowestPriced = books[i];
		}
	}
	
	printf("\nMost Expensive Book:\n");
	printf("Title: %s\n",mostExpensive.title);
	printf("Author: %s\n",mostExpensive.author);
	printf("Price: %f\n",mostExpensive.price);
	
	printf("Lowest Priced Book: \n");
	printf("Title: %s\n",lowestPriced.title);
	printf("Author: %s\n",lowestPriced.author);
	printf("Price: %f\n",lowestPriced.price);
	
	return 0;
}
