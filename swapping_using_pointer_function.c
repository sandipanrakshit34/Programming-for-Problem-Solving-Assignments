#include<stdio.h>
int main () {
int *a,*b,x,y;
printf("enter value of x and y: ");
scanf("%d %d",&x,&y);
*a=x,*b=y;
printf("\n before swapping the values are: x=%d y=%d",*a,*b);
*a=*a+*b;
*b=*a-*b;
*a=*a-*b;
printf("\n after swapping the values are: x=%d y=%d",*a,*b);
return 0;
}
