#include<stdio.h>

int main()  {           

       int marks;
       printf("enter num(1-100): ");
       scanf("%d", &marks);
               //if marks >=0 && marks<=30{
               //printf ("FAIL\n");
               //} else if (mark>30 && marks<=100){
               //printf("PASS\n");
               //}else{
                //printf("wrong marks");
                //}
      marks<=30? printf("Fail\n"):printf("Pass");

    return 0;
}