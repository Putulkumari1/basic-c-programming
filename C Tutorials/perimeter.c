#include<stdio.h>

int main()  {           // perimeter of rectangle

       int perimeter,a,b;
       printf("enter a length of rectangle: ");
       scanf("%d", &a);
       printf("enter b width of rectangle: ");
       scanf("%d", &b);
       perimeter=(a+b)*2;

       printf("perimeter : %d",perimeter);
    
    return 0;
}