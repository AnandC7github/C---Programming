#include<stdio.h>
#include<process.h>

void add(int a[10][10], int b[10][10], int m, int n)
{
	int i,j,sum[10][10];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\n Addition");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d\t",sum[i][j]);
		}
	}
}

void sub(int a[10][10], int b[10][10], int m, int n)
{
	int i,j,sub[10][10];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sub[i][j] = a[i][j] - b[i][j];
		}
	}
	printf("\n Subtraction");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d\t",sub[i][j]);
		}
	}
}

void det(int a[10][10],int m, int n)
{
	int i,j,det;
	if(m == 2)
	{
		det = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
		printf("%d\t",det);
	}
	else if(m == 3)
	{
		det = a[0][0] * ((a[1][1] * a[2][2]) - a[2][1] * a[1][2]) - a[0][1] * (a[1][0] * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
		printf("%d",det);
	}
}

void trans(int a[10][10], int m, int n)
{
	int i,j,trans[10][10];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			trans[i][j] = a[j][i];
		}
	}
	printf("\n Transpose");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d\t",trans[i][j]);
		}
	}
}

void mul(int a[10][10], int b[10][10], int m, int n, int p, int q)
{
	int i,j,k,prod[10][10];
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			prod[i][j] = 0;
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<n;k++)
			{
				prod[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	printf("\n Multiplication");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d\t",prod[i][j]);
		}
	}
}

void main()
{
	int a[10][10],b[10][10],i,j,m,n,p,q,ch;
	printf("\n\tMATRIX OPERATIONS");
	printf("\n\t-----------------");
	
	printf("\nEnter rows and columns of Matrix A : ");
	scanf("%d%d",&m,&n);
	printf("Enter rows and columns of Matrix B : ");
	scanf("%d%d",&p,&q);
	
	printf("Enter elements of Matrix A : ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter elements of Matrix B :");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n----------");
	printf("\nMATRIX A :");
	printf("\n----------");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	
	printf("\n----------");
	printf("\nMATRIX B :");
	printf("\n----------");
	for(i=0;i<p;i++)
	{
		printf("\n");
		for(j=0;j<q;j++)
		{
			printf("%d\t",b[i][j]);
		}
	}
	
	do
	{
		printf("\n________________");
		printf("\n\tOPTIONS");
		printf("\n-----------------\n");
		printf("1.Addition\n");
		printf("2.Subtraction\n");
		printf("3.Multiplication\n");
		printf("4.Determinant\n");
		printf("5.Transpose\n");
		printf("6.Exit\n");
		printf("\n");
		printf("Enter Your Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : if(m == p && n == q)
					{
						add(a,b,m,n);
					}
					else
					{
						printf("Not Possible!!");
					}
					break;
			
			case 2 : if(m == p && n == q)
					{
						sub(a,b,m,n);
					}
					else
					{
						printf("Not Possible!!");
					}
					break;
					
			case 3 : mul(a,b,m,n,p,q);
					break;
					
			case 4 : if(m == p && n == q)
					{
						printf("\nDeterminant of Matrix A :");
						det(a,m,n);
						printf("\n Determinant of Matrix B :");
						det(b,p,q);
					}
					else
					{
						printf("Not Possible!!");
					}
					break;
					
			case 5 : printf("\nTranspose of Matrix A :");
					trans(a,m,n);
					printf("\n Transpose of Matrix B :");
					trans(b,p,q);
					break;
				
			case 6 : exit(1);
		}
		
	}while(1);
}
