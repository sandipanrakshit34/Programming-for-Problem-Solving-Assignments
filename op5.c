#include<stdio.h>
int main(){
	int a=1,b=2;
	//compound assignment operators
	a+=b; //a=a+b;
	printf("a=%d\n",a);
	a-=b; //a=a-b;
	printf("a=%d\n",a);
	//a*=b;
	//a/=b;
	//a%=b;
	a=10,b=20;
	a^=b;	//a=a^b;
	
	return 0;
}
