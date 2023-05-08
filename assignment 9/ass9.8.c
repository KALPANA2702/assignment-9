#include<stdio.h>
int main()
{
    int x,y;
    printf("enter a number");
    scanf("%d",&x);
    switch (x>0)
    {
        case 1:
        y=-x;
        printf("value is %d",y);
        break;
        
        case 0: 
        y=-x;
        printf("value is %d",y);
        break;
    }
    return 0;
}