#include<stdio.h>

int main()  {           // area of square

       int age;
       printf("enter age: ");
       scanf("%d", &age);
        
       if(age>18)
       {
     printf("adult \n");
     printf("they can vote \n");
     printf("they can do drive \n");
       }
       else
          {
          printf("not adult\n");
           }
       printf("thank you");

    return 0;
}