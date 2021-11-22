//Stage7.c

# include<stdio.h>

int ArithmaticOperations();

int main()
{
	int ivalue1 = 0;
	int ivalue2 = 0;
	int iResult = 0;

	printf("Please Enter First Operand :");
	scanf("%d",&ivalue1);

	printf("Please Enter Second Operand :");
	scanf("%d",&ivalue2);

	ArithmaticOperations(ivalue1,ivalue2);

	return 0;
}

int ArithmaticOperations(int Fivalue1,int Fivalue2)
{
	int FiResult = 0;
	char Coperator = '\0';
	char cChoice = '\0';

		printf("\nWhich operation you want to do(+,-,*,/):\t");
		scanf("%s",&Coperator);
		printf("\n");

		switch(Coperator)
		{
			case '+' :

				FiResult = Fivalue1 + Fivalue2;
				printf("Addition Of These Two Numbers Is : %d""\n",FiResult);
			break;

			case '-' :

				FiResult = Fivalue1 - Fivalue2;
				printf("Subtraction Of These Two Numbers Is : %d""\n",FiResult);
			break;

			case '*' :

				FiResult = Fivalue1 * Fivalue2;
				printf("Multiplication Of These Two Numbers Is : %d""\n",FiResult);
			break;

			case '/' :

				FiResult = Fivalue1 + Fivalue2;
				printf("Division Of These Two Numbers Is : %d""\n",FiResult);
			break;

			default :

				printf("Please Enter Valid Operator...");

		}
		printf("\nDo You Want To Perform Another Operation(Y/N):\n");
		scanf("%s",&cChoice);

		if(cChoice == 'Y' || cChoice =='y')
		{
			main();
		}
		else
		{
			return 1;
		}



}
