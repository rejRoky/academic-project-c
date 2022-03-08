/*
Project Name: Sample Calculator
Name: S.M Rejaul Islam Roky
*/

#include<stdio.h>
#include<conio.h>

void addition();
void subtraction();
void multiplication();
void division();
void calculator_operations();

void calculator_operations()
{
	printf("\n\t\tWelcome to Calculator \n\n");
	printf("Enter + For Addition \n");
	printf("Enter - For Subtraction \n");
	printf("Enter * For Multiplication \n");
	printf("Enter / For Division \n");
}


void main()
{
	char co;

	calculator_operations();

	while (1)
	{
		printf("\n\nEnter the calculator Operation you need:");

		co =_getch();

		switch (co)
		{
		case '+': addition();
			break;

		case '-': subtraction();
			break;

		case '*': multiplication();
			break;

		case '/': division();
			break;

		default:
		{
			printf("\n\n\tYou Entered Wrong Operation");
			printf("\n\tPlease Enter Correct Operation");

			break;
		}
		}
	}

}

void addition()
{
	int e;
	float sum = 0, number;
	printf("\n\nEnter the number of elements: ");
	scanf("%d", &e);
	printf("Please enter %d numbers one by one:\n", e);

	int i = 0;
	while (i<e)
	{
		scanf("%f", &number);
		sum = sum + number;
		i = i + 1;

	}
	printf("\n\nSum of %d numbers = %.2f \n", e, sum);
	printf("\n\n\t\tWelcome Again!!\n");
}


void multiplication()
{
	int e;
	float mul = 1, number;
	printf("\n\nEnter the number of elements: ");
	scanf("%d", &e);
	printf("Please enter %d numbers one by one:\n", e);

	int i = 0;
	while (i<e)
	{
		scanf("%f", &number);
		mul = mul*number;
		i = i + 1;

	}
	printf("\nMultiplication of %d numbers = %.2f \n", e, mul);
	printf("\n\n\t\tWelcome Again!!\n");
}


void subtraction()
{
	float x, y;
	float z = 0;
	printf("\n\nPlease enter first number : ");
	scanf("%f", &x);
	printf("Please enter second number : ");
	scanf("%f", &y);
	z = x - y;
	printf("\n%.2f - %.2f = %f\n", x, y, z);
	printf("\n\n\t\tWelcome Again!!\n");
}


void division()
{
	float x, y, z = 0;
	printf("\n\nPlease enter first number : ");
	scanf("%f", &x);
	printf("Please enter second number : ");
	scanf("%f", &y);
	z = x / y;
	printf("\n%.2f / %.2f = %.2f\n", x, y, z);
	printf("\n\n\t\tWelcome Again!!\n");

}
