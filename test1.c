#include<stdio.h>
int main(){
	int a,b,c,d;
	int i=2,l;
	//int j=3;
	float j=3,k;
	
	float x,y,z=9;
	a=2%5;
	b=-2%5;
	c=2%-5;
	d=-2%-5;
	printf("a=%d b=%d c=%d d=%d %d %d\n",a,b,c,d,2/-5,-2/-5);
	k=i/j*j;
	l=j/i*i;
	x=i/j*j;
	y=j/i*i;
	printf("k=%f l=%d x=%f y=%f\n",k,l,x,y);
	//if(2) && if(1)
		//printf("false");
	//else
		//printf("true");
	(z==9?printf("correct\n"):printf("wrong\n"));
	
	return 0;
}
