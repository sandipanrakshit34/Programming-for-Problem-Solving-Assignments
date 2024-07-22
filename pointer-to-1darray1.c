#include<stdio.h>
int main(){
	//pointer to an int array variable
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	//int *p1=&a;
	int *p1=a;
	int i;
	//printf("\n a=%u",a);
	//printf("\n address of a=%u",&a);
	//printf("\n p1=%u",p1);
	//printf("\n value pointed by p1=%u",*p1);
	//a++;
	for(i=0;i<10;i++){
		
		//printf("\n a=%u",a);
		//printf("\n value pointed by a=%u",*a);
		printf("\n p1=%u",p1);
		printf(" value pointed by p1=%u",*p1);
		p1++;
	}
	return 0;
}
