#include<stdio.h>
int main()
{
    int x,y;
    printf("enter a number");
    scanf("%d",&x);
    switch(x%2==0)
    {
        case 1:
        y=x+1;
         printf("value is %d",y);
        break;

        case 0:
         printf("value is %d",x);
        break;
    }
    return 0;
}