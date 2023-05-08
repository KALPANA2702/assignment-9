#include<stdio.h>

int main()

{

    int x;

    printf("enetr the number of week");

    scanf("%d",&x);

    switch(x)

    {

        case 1:

        printf("IT'S SUNDAY! Wishing you a blessed and relaxing day  ");

        break;

        case 2:

        printf("HAPPY MONDAY! Wishing you all unlimited blessings this coming week and always");

        break;

        case 3:

        printf("HAPPY TUESDAY MORNING!");

        break;

        case 4:

        printf("HAPPY WEDNESDAY! I hope your mid-week is off to a good start");

        break;

        case 5:

        printf("HAPPY THURSDAY! Be in love with every minute of what life offers you");

        break;

        case 6:

        printf("May this FRIDAY be recharging and relaxing for you");

        break;

        case 7:

        printf("Hope your SATURDAY morning be filled with positivity");

        break;

        default: printf("invalid");

    }

    return 0;

}