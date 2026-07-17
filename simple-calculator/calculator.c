#include <stdio.h>

int Addi(int a, int b)
{
        int Answer;

        Answer = a + b;

        return (Answer);
}



#include <stdio.h>

int Sub(int a, int b)
{
	int Answer;
	
	Answer = a - b;
	
	return (Answer);
}




#include <stdio.h>

int Multi(int a, int b)
{
        int Answer;

        Answer = a * b;

        return (Answer);
}



#include <stdio.h>

int Div(int a, int b)
{
        int Answer;

        Answer = a / b;

        return (Answer);
}



#include <stdio.h>

int main(void)
{
	int choice;
	int a;
	int b;
	int result;

	printf("This is a simple calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	printf("Pick the option you would like\n");

	scanf("%d", &choice);

	while (choice < 0 || choice >= 5)
	{
		printf("invalid choice\n");
		scanf("%d", &choice);
	}

	if (choice == 1)
	{
		printf("You have chosen Add\n");
		
		printf("A: ");
		scanf("%d", &a);

		printf("B: ");
		scanf("%d", &b);

		result = Addi(a, b);

		printf("Results: %d\n", result);
	}

	else if (choice == 2)
	{
		printf("you have chosen Subtract\n");

		printf("A: ");
                scanf("%d", &a);

                printf("B: ");
                scanf("%d", &b);

                result = Sub(a, b);

                printf("Results: %d\n", result);
	}

	else if (choice == 3)
	{
		printf("You have chosen Multiply\n");

                printf("A: ");
                scanf("%d", &a);

                printf("B: ");
                scanf("%d", &b);
		
		result = Multi(a, b);

                printf("Results: %d\n", result);
	}

	else if (choice == 4)
	{
		printf("You have chosen Divide\n");

		printf("A: ");
                scanf("%d", &a);

                printf("B: ");
                scanf("%d", &b);

                result = Div(a, b);

                printf("Results: %d\n", result);
	}

	else
	{
		printf("Goodbye!\n");
		return (0);
	}

	return (0);
}
