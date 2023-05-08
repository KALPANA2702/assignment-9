#include<stdio.h>
int main()
{
    int x,r;
       printf("enter any number");
    scanf("%d",&x);
    r=((x%4==0) && (x%400==0) || (x%100!=0));
    switch(r)
    {
    case 1:
        printf("the entered number is leap year");
        break;
        
        case 0:
         printf("the entered number is not form a leap year");
         break;
    
    deafault:printf("invalid");
}
return 0;
}