#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b,c;
    printf("a. check wheather a given of three number are length of an issoceles triangle or not\n");
    printf("b. check wheather a given of three number are length of sides of a right angled triangle or not\n");
    printf("c. check wheather a given of three number are equilateral triangle or not\n");
     printf("d.Exit\n");
    printf("Enter your choice\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("enter the sides of triangle");
        scanf("%d %d %d",&a,&b,&c);
        if(a==b || b==a || c==a)
        {
            printf("the entered digits form an issoceles triangle");
        }
        else 
        {
            printf("the entered digits do not form an issoceles triangle");
        }
        break; 
        
        
        case 2:
        printf("enter the sides of triangle");
          scanf("%d %d %d",&a,&b,&c);
          if((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (b*b)+(c*c)==(a*a))
        {
            printf("the entered digits form a right angled triangle");
        }
        else 
        {
            printf("the entered digits do not form a right angled triangle");
        }        break;
        
        
        case 3:
          printf("enter the sides of triangle");
          scanf("%d %d %d",&a,&b,&c);
          if(a==b && b==c && c==a)
        {
            printf("the entered digits form an equilateral  triangle");
        }
        else 
        {
            printf("the entered digits do not form an equilateral  triangle");
        }        
        break;

        case 4:
       exit(0);
       default: printf("invalid");
    }
    return 0;
}