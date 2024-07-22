#include<stdio.h>
main(){
	int i;
	int a[]={0,1,2,3,4};
	int	*p[]={a,a+1,a+2,a+3,a+4};	//array of pointers
	for(i=0;i<5;i++){
		printf("\n(a+%d)=%u *(a+%d)=%d\n",i,a+i,i,*(a+i));
		printf("\n(p+%d)=%u *(p+%d)=%u *(*p+%d)=%d\n",i,p+i,i,*(p+i),i,*(*p+i));
		printf("\n");
	}
}
