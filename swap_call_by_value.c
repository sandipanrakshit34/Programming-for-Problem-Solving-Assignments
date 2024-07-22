#include<stdio.h>
void swap(int*a,int*b);
int main() {
	int x,y;
	printf("enter two numbers:");
	scanf("%d%d",&x,&y);
	swap(&x,&y);
	printf("x=%d & y=%d\n",x,y);
	return 0;
}
void swap(int*a,int*b) {
	int temp=*a;
	*a=*b;
	*b=temp;
	printf("a=%d & b=%d\n",*a,*b);
}
