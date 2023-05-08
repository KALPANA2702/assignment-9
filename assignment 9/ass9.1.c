#include<stdio.h>

int main()

{

    int x;

    printf("enetr the number of month");

    scanf("%d",&x);

    switch(x)

    {

        case 1:

        printf("there are 30 days in month of january");

        break;

 

        case 2:

        printf("there are 28 days in month of feburary");

        break;

 

        case 3:

        printf("there are 31 days in month of march");

        break;

 

        case 4:

        printf("there are 30 days in month of april");

        break;

 

        case 5:

        printf("there are 31 days in month of may");

        break;

 

        case 6:

        printf("there are 30 days in month of june");

        break;

 

        case 7:

        printf("there are 31 days in month of july");

        break;

 

        case 8:

        printf("there are 31 days in month of august");

        break;

 

        case 9:

        printf("there are 30 days in month of september");

        break;

 

        case 10:

        printf("there are 31 days in month of october");

        break;

 

        case 11:

        printf("there are 30 days in month of november");

        break;

 

        case 12:

        printf("there are 31 days in month of december");

        break;

        default: printf("invalid");

    }

    return 0;

}