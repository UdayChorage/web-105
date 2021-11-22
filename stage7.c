#include<stdio.h>

int ArithmaticOperations();

int main()
{
        int iValue1 = 0;
        int iValue2 = 0;
        int iResult = 0;

        printf("Please Enter Frist Number :");
        scanf("%d",&iValue1);

        printf("Please Enter Second Number :");
        scanf("%d",&iValue2);

        ArithmaticOperations(iValue1,iValue2);

        return 0;
}

int  ArithmaticOperations(int FiValue1,int FiValue2)
{
        int FiResult = 0;
        char Coperator = '\0';

        printf("Which operation you want to do ;(+,-,*,/)""\n");
        scanf("%s",&Coperator);

        if(Coperator == '+')
        {

            FiResult = FiValue1 + FiValue2;
            printf("Addition of thease two Numbers is: %d","\n",FiResult);
            }
             else if(Coperator == '-')
             {

              FiResult = FiValue1 - FiValue2;
              printf("Substractions of thease two Numbers is: %d","\n",FiResult);
             }
             else if(Coperator == '*')
             {

             FiResult = FiValue1 * FiValue2;
             printf("Multiplication of thease two Numbers is: %d","\n",FiResult);
             }
              else if(Coperator == '/')
             {

             FiResult = FiValue1 / FiValue2;
             printf("Division of thease two Numbers is: %d","\n",FiResult);
             }
             else
             {
                printf("Please Enter Valid operator..(+,-,*,/)""\n");

             }
}


























