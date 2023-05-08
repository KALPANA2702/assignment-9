#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D,root1,root2,real,imaginary;
    printf("enter cofficient if X^2 %d",a);
    printf("enter cofficient if X %d",b);
    printf("enter constant term %d",c);

    D=b*b-4*a*c;
    switch(D>0)
    {
        case 1:
        printf("roots are real and distinct");
        root1=(-b+sqrt(D)/2*a);
         root1=(-b-sqrt(D)/2*a);
         printf("d",root1);
         printf("d",root2);
         break;

         case 0: switch (D<0)
             {
        case 1:
        printf("roots are real and distinct");
        real=-b/(2*a);
        imaginary=sqrt-D/(2*a);
        printf("real roots are %d ",real);
        printf("imaginary roots are %d",imaginary);
        break;

        case 0:switch(D=0)
        {
            case 1:
        printf("roots are real and equal");
        root1=root2=-b/(2*a);
        printf("%d",root1);
       }
       }
    }
    return 0;
}