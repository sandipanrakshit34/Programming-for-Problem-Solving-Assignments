#include<stdio.h>
int main () {
	int a,b=5;
	a=(10,5,15),
	printf("a=%d\n",a);
	printf("a=%d b=%d\n",a,b);
	b=(++a,a+5,--a);
	printf("a=%d b=%d\n",a,b);
	
	return 0;
}
