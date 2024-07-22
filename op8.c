#include<stdio.h>
void main () {
int x=1,y=1;
if (x-- || y--)
        		printf ("\n if block is executed-- x=%d \t y=%d",x,y);
else
       		printf ("\n else block is executed-- x=%d \t y=%d",x,y);
}	

