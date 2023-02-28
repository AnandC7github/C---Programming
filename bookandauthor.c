#include<stdio.h>
#include<stdlib.h>

struct book
{
	char bookname[50];
	char authorname[30];
};

struct book*a;

void read_book(int n)
{
	int i;
	for(i = 0; i<n; i++)
	{
		printf("\n\tEnter details of Books - %d",i+1);
		printf("\n\t*********************************");
		fflush(stdin);
		printf("\n Enter the book name : ");
		gets(a[i].bookname);
		fflush(stdin);
		printf("\n Enter the author name : ");
		gets(a[i].authorname);
	}
}

void disp_book(int n)
{
	int i;
	for(i = 0; i<n; i++)
	{
		printf("\n\n Books - %d",i+1);
		printf("\n**************************");
		printf("\n Book Name : %s",a[i].bookname);
		printf("\n Author Name : %s",a[i].authorname);
	}
}

int main()
{
	int n;
	printf("Enter the number of records to be entered : ");
	scanf("%d",&n);
	a = (struct book *)calloc(n,sizeof(struct book));
	read_book(n);
	printf("\n");
	disp_book(n);
	return 0;
}
