#include<stdio.h>
int main(){
	int i;
	int a[3][2]={{10,20},{30,40},{50,60}};
	int (*p1)[2]=a;
	int *p2=(int*)a;
	//int* p2=a;
	printf("\np1=%u p2=%u",p1,p2);
	p1++;
	p2++;
	printf("\np1=%u p2=%u",p1,p2);
	printf("\n*p1=%u *p2=%d",*p1,*p2);
	printf("\n**p1=%d *p2=%d",**p1,*p2);
	return 0;
}
