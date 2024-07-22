#include<stdio.h>
int main() {
	int i,a,b;
	printf("enter the lower range: \n");
	scanf("%d",&a);
	printf("enter the upper range: \n");
	scanf("%d",&b);
	if(a<b) {
		for(i=a;i<=b;i++) {
			if(i%5==0)
			printf("number=%d",i);
			continue;
		}
	}
	return 0;
}
