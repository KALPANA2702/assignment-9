#include<stdio.h>
int main()
{
   float number,amount,total;
    printf("enter any number");
    scanf("%f",number);
    switch(number<=50)
    {
        case 1:
        amount=number*0.50;
        break;

              case 0:switch(number<=150)
              {
                case 1: amount=25+(number-50)*0.75;
                break;

                case 0:switch(number<=250)
                {
                    case 1: amount=100+(number-150)*1.20;
                    break;

                     case 0: amount= 220+(number-250)*1.50;
                     break;
                }
                }

    }
    total=amount+number*0.20;
}