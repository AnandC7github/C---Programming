#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int a;
	int b;
	char op;
	int ans;
	
	printf("\t\t CALCULATOR");
	printf("\n");
	printf("--------------------------------------------------------");
	printf("\n");
	printf("\n");
	printf("Enter your calculation \n (press 'enter' after each operant and operator)  : \n");
	scanf("%d %c %d",&a,&op,&b);
	
	switch(op)
	{
		case '+' : ans = a + b;
					printf("%d + %d = %d",a,b,ans);
					break;
		case '-' : ans = a - b;
					printf("%d - %d = %d",a,b,ans);
					break;
		case '*' : ans = a * b;
					printf("%d * %d = %d",a,b,ans);
					break;
		case '/' : ans = a / b;
					printf("%d / %d = %d",a,b,ans);
					break;
		default : printf("Oops..wrong input!!!\n");
					printf("Please check the inputs...");
	}
	return 0;
}
