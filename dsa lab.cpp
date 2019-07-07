#include<stdio.h>
#include<stdlib.h>
struct book *enterBookDetail();
void PrintBookDetails(struct book *b1);

struct book
{
	int id;
	char name[20];
	char authorName[20];
	float price;
};
struct book *enterBookDetail()
{
struct book *b;
b=(struct book*)malloc(sizeof(struct book));
scanf("%d",&b->id);
scanf("%s",b->name);
scanf("%s",b->authorName);
scanf("%f",&b->price);
return(b);
}
void PrintBookDetails(struct book *b1)
{
	printf("BOOK DETAILS");
	printf("\nBook id\n=%d",b1->id);
	printf("\Book name=%s\n",b1->name);
	printf("\nAuthors name=%s\n",b1->authorName);
	printf("\nprice=%f\n",b1->price);
}
int main()
{
	struct book *b2,*b3;
	printf("Enter the details of your book");
	b2=enterBookDetail();
	printf("Enter the details for next book");
	b3=enterBookDetail();
	PrintBookDetails(b2);
		PrintBookDetails(b3);

	return 0;
}









