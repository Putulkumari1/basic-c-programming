#include<stdio.h>
# include<math.h>

int main()  {           // this is not work on float value only work on integer values

       int a=8;
       int b=3;

       printf("enter a num: ");
       scanf("%d", &a);
       printf("enter a num2: ");
       scanf("%d", &b);
        
    
       printf("module value is \n", a%b);
    
    return 0;
}