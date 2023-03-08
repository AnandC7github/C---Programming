#include <stdio.h>

int main() {
    	double num1, num2, sum,div,sub,mul;
    	printf("Enter the first number: ");
    	scanf("%lf", &num1);
    	printf("Enter the second number: ");
    	scanf("%lf", &num2);
    	sum = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;
	div = num1 / num2;
    	printf("The sum of %.2lf and %.2lf is %.2lf\n", num1, num2, sum);
    	printf("The difference of %.2lf and %.2lf is %.2lf\n", num1, num2, sub);
	printf("The product of %.2lf and %.2lf is %.2lf\n", num1, num2, mul);
	printf("The division of %.2lf and %.2lf is %.2lf\n", num1, num2, div);
    	return 0;
}
