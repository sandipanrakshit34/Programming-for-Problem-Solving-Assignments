#include<stdio.h>
int min() {
	int a,b,c;
	printf("enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b) {
		if(a>c) {
			printf("%d is the biggest number",&a);
		}
		else {
			printf("%d is the biggest number",&c);
		}
	}
	else {
		printf("%d is the biggest number",&b);
	}
	return 0;
}
