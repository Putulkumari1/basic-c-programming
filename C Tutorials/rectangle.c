# include<stdio.h>
int main()
{             // perimeter of rectangle
double length, width, area, perimeter;
printf("enter the length of rectangle: ");
scanf("%1f", &length);
printf("enter the width of rectangle: ");
scanf("%1f", &width);
area= length*width;
perimeter=(length+width)*2;

printf("Area: %1f\n",area);
printf("Peimeter: %1f", perimeter);
return 0;


}
