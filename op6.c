#include<stdio.h>
int main(){
	//int a=10,5; //[Error] expected identifier or '(' before numeric constant
	int a,b=5;
	//a=10,5;
	a=(10,5,15);
	printf("a=%d\n",a);
	printf("a=%d b=%d\n",a,b);
	b=(++a,a+5,--a);
	printf("a=%d b=%d\n",a,b);
		
	
	
	
	return 0;
}
