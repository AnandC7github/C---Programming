#include<stdio.h>

struct poly
{
	int coeff;
	int expo;
};

struct poly p1[10],p2[10],p3[10];
int readPoly(struct poly []);
int addPoly(struct poly [],struct poly [],int ,int ,struct poly []);
void sortpoly( struct poly [],int terms);
void displayPoly( struct poly [],int terms);

int main()
{
	int d1,d2,d3;
	d1=readPoly(p1);
	sortpoly(p1,d1);
	printf(" \n First polynomial : ");
	displayPoly(p1,d1);
	d2=readPoly(p2);
	sortpoly(p2,d2);
	printf(" \n Second polynomial : ");	
	displayPoly(p2,d2);
	d3=addPoly(p1,p2,d1,d2,p3);
	sortpoly(p3,d3);
	printf(" \n\n After Addition, the Polynomial is : ");
	displayPoly(p3,d3);
	printf("\n");
	return 0;	
}

void sortpoly(struct poly p[10],int term)
{
	int i,j;
	struct poly t;
	for(i=0;i<term-1;i++)
	{
		for(j=i+1;j<term;j++)
		{
			if(p[j].expo<p[j+1].expo)
			{
				t=p[j+1];
				p[j+1]=p[j];
				p[j]=t;
			}
		}
	}
}
int readPoly(struct poly p[10])
{
	int t1,i;
	printf("\n\n Enter the total number of terms in the polynomial:",i);
	scanf("%d",&t1);
	printf("\n Enter the coefficients and exponents\n");
	for(i=0;i<t1;i++)
	{
		printf("\n Enter the (%d) Coefficient:",i+1);
		scanf("%d",&p[i].coeff);
		printf(" Enter the (%d) exponent:",i+1);
		scanf("%d",&p[i].expo); 
	}
	return(t1);
}

int addPoly(struct poly p1[10],struct poly p2[10],int d1,int d2,struct poly p3[10])
{
	int i,j,k;
	i=0;
	j=0;
	k=0;
	while(i<d1 && j<d2)
	{
		if(p1[i].expo==p2[j].expo)
		{
			p3[k].coeff=p1[i].coeff + p2[j].coeff;
			p3[k].expo=p1[i].expo;
			i++;
			j++;
			k++;	
		}
		else if(p1[i].expo>p2[j].expo)
		{
			p3[k].coeff=p1[i].coeff;
			p3[k].expo=p1[i].expo;
			i++;
			k++;
		}
		else
		{
			p3[k].coeff=p2[j].coeff;
			p3[k].expo=p2[j].expo;
			j++;
			k++;
		}
	}
	while(i<d1)
	{
		p3[k].coeff=p1[i].coeff;
		p3[k].expo=p1[i].expo;
		i++;
		k++;
	}
	while(j<d2)
	{	
		p3[k].coeff=p2[j].coeff;
		p3[k].expo=p2[j].expo;
		j++;
		k++;
	}
	return(k);
}

void displayPoly(struct poly p[10],int term)
{
	int k;
	for(k=0;k<term-1;k++)
		printf("%d(x^%d)+",p[k].coeff,p[k].expo);
		printf("%d(x^%d)",p[term-1].coeff,p[term-1].expo);
}

