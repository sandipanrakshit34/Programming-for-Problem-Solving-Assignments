#include<stdio.h>
main(){
	int a=1,b=1,c=0,d=0,e=0;
	if(a--||--b){
		printf("\n if..");
		printf("\n a=%d b=%d",a,b);
	}
	else{
		printf("\n else..");
		printf("\n a=%d b=%d",a,b);
	}
	a=1,b=1;
	if(a--&&b--){
		printf("\n if..");
		printf("\na=%d b=%d",a,b);
	}
	else{
		printf("\n else..");
		printf("\n a=%d b=%d",a,b);
	}
	a=4,b=4;
	c=a>>b;
	printf("\n a=%d b=%d c=%d d=%d",a,b,c,d);
	d=a<<b;
	printf("\n a=%d b=%d c=%d d=%d",a,b,c,d);  
	e=a<<b>>b;
	printf("\n e=%d",e);	
}
