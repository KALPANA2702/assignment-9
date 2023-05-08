#include<stdio.h>

#include<stdlib.h>

int main()

{

    int x,a,b;

    printf("a. addition\n");

    printf("b. substraction\n");

    printf("c. multiplication\n");

    printf("d. division\n");

    printf("e. exit");

    printf("\n");

    printf("enter your choice");

    scanf("%d",&x);

    switch(x)

    {

        case 1:

         printf("enter two number");

         scanf("%d %d",&a,&b);

         printf("sum of two number is %d",a+b);

         break;

        

         case 2:

         printf("enter two number");

         scanf("%d %d",&a,&b);

         printf("difference of two number is %d",a-b);

         break;

        

         case 3:

         printf("enter two number");

         scanf("%d %d",&a,&b);

         printf("multiplication of two number is %d",a*b);

         break;

        

         case 4:

         printf("enter two number");

         scanf("%d %d",&a,&b);

         printf("division of two number is %d",a/b);

         break;

        

         case 5:

         exit(0);

        

    }

    return 0;

   

}