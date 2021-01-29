

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	double num1, num2;
	char op;
	double R;//Result
	
	printf("Enter a number:");
	scanf("%lf", &num1);
	printf("Enter operator:");
	scanf(" %c", &op);
	printf("Enter a number:");
	scanf("%lf", &num2);
	
	if(op=='+')
	{
		double R = num1 + num2;
		printf("Result is %.2lf", R);
	}
	else if(op == '-')
	{
		double R = num1 - num2;
		printf("Result is %.2lf", R);
	}
	else if(op == '*')
	{
		double R = num1 * num2;
		printf("Result is %.2lf", R);
	}
	else if(op == '/')
	{
		double R = num1 / num2;
		printf("Result is %.2lf", R);
	}
	else {printf("Invalid Operator");
	} 
	 return 0;
}
