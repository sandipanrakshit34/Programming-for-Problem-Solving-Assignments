#include<stdio.h>
int main(){
	int i=4,j=-1,k=0,w,x,y,z;
	int a,b;
	w=i||j||k;
	printf("i=%d\tj=%d\tk=%d\n",i,j,k);
	x=i&&j&&k;
	printf("i=%d\tj=%d\tk=%d\n",i,j,k);
	y=i||j&&k;
	printf("i=%d\tj=%d\tk=%d\n",i,j,k);
	z=i&&j||k;
	printf("i=%d\tj=%d\tk=%d\n",i,j,k);
	printf("w=%d\tx=%d\ty=%d\tz=%d\t",w,x,y,z);
	//a=-3--25;//error --on constants can't be done, lvalue required
	//b=-3--(-3);
	//printf("a=%d\tb=%d\n",a,b);
	return 0;
}
