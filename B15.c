#include<stdio.h>
main(){
	int a=5,b=10;
	int c=(b+2,++b,b+5);
	printf("\n c=%d",c);
	//b=++a*a++;	//undefined behavior
	printf("\na=%d b=%d",a,b);
	//b=++a++;	//error, lvalue required as increment operand
	b=~a;
	printf("\na=%d b=%d",a,b);
}
