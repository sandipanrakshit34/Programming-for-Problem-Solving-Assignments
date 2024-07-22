#include<stdio.h>
#include<math.h>
int main() {
	float x,r1,r2,a,b,c;
	printf("enter the value of a,b,c \n");
	scanf("%f%f%f",&a,&b,&c);
	x=b*b-4*a*c;
	r1=((-b)+sqrt(x))/(2*a);
	r2=((-b)-sqrt(x))/(2*a);
	if(x==0) {
		printf("both roots are equal\n");
		printf("first root=%f\n",r1);
		printf("second root=%f\n",r2);	
	}
	else if(x>0) {
		printf("both roots are real and different\n");
		printf("first root=%f\n",r1);
		printf("second root=%f\n",r2);
	}
	else {
		printf("roots are imaginary");
	}
	return 0;
}
