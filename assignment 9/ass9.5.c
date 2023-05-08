#include<stdio.h>
int main()
{
    int x;
    printf("enter any number");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
    printf("good");
    break;
    
    case 2:
    printf("better");
    break;
    
    case 3:
    printf("best");
    break;
    
    case 4:
    printf("invalid");
    break;
}
return 0;
}