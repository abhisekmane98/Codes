// book id
#include<stdio.h>
struct book input(void);   // declaration of input() function
void display(struct book);

struct book                //  defining structure
{
	int  Id;
	char Title[20];
	float price;
};

struct book input()     // defining input function
{
	 struct book b;
	 printf("Enter book Id,Title,price");
	 fflush(stdin);
	 scanf("%d",&b.Id);
	 fflush(stdin);
	 gets(b.Title);
	 scanf("%f",&b.price);
	 return b;
}

void display(struct book b)
{
	printf("%d %s %f",b.Id,b.Title,b.price);
}
int main() 
{
		struct book b1;
		b1=input();
		display(b1);
		return 0;
}
