#include<stdio.h>

void Addition()
{
      int iValue1 = 0;
      int iValue2 = 0;


      int iAns = 0;

      printf("Please Enter Frist Number :");
      scanf("%d",&iValue1);

      printf("Please Enter Second Number :");
      scanf("%d",&iValue2);

      iAns = iValue1 + iValue2;

      printf("Addition of %d & %d is:\n",iValue1,iValue2,iAns);

}

int main()
{
      Addition();

      return 0;
}







