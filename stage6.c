#include<stdio.h>

int Addition (int iNum1, int iNum2)
{
         int iAns = 0;

         iAns = iNum1 + iNum2;

         return iAns;

}
int main()
{
        int iValue1 = 0;
        int iValue2 = 0;

        int iResult = 0;

        printf("Please Enter First Number :");
        scanf("%d",&iValue1);

        printf("Please Enter Second Number :");
        scanf("%d",&iValue2);

        iResult = Addition(iValue1,iValue2);

        printf("Addition of %d & %d is:%d\n",iValue1,iValue2,iResult);

        return 0;

}












