#include<stdio.h>
int main() {
	int a,b,c;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	printf("enter c");
	scanf("%d",&c);
	a>b ? (a>c ? printf("a=%d is max\n",a) : printf("c=%d is max\n",c)) : (b>c ? printf("b=%d is max\n",b) : printf("c=%d is max\n",c));
	a<b ? (a<c ? printf("a=%d is min",a) : printf("c=%d is min",c)) : (b<c ? printf("b=%d is min",b) : printf("c=%d is min",c));
	return 0;
}
