#include<stdio.h>
int main(){
	int i;
	//int b[]; //max size of array missing
	int a[]={10,20,30,40,50};	//if initialized when created, dimension can be omitted
	int *p1=a; //a=&a[0]
	//int *p1;p1=a;
//name of the array refers to the base address of the 0-th element of the array
//int *p1=&a[0];	//address of 0-th element of the array
	
	//pointer-to-an-array or array pointer
	//int *p2[5]=&a;
	int (*p2)[5];	//address of the array //dimension can be omitted
	p2=&a;
	//int (*p2)[5]; p2=&a; 
//subscript i.e. [] operator has higher precedence than indirection operator *
//that's why indirection operator and pointer name are encased into parenthesise.
	int *p3[5]; // array of pointers or pointers' array
	for(i=0;i<5;i++){
		p3[i]=&a[i];
		printf("\na[%d]=%d p1=%u p2=%u *p1=%d *(p2+%d)=%u *(*p2+%d)=%d p3[%d]=%u *p3[%d]=%d\n",i,a[i],p1,p2,*p1,i,*(p2+i),i,*(*p2+i),i,p3[i],i,*p3[i]);
		p1++;
		//TESTING THE SIZE OF THE UNIT WHAT THE POINTER POINTS TO
		printf("\nsize of *(p1+%d)=%d",i,sizeof(*(p1+i)));
		printf(" size of *(p2+%d)=%d",i,sizeof(*(p2+i)));
		printf(" size of *(p3+%d)=%d\n",i,sizeof(*(p3+i)));
		p2++;
	}
	//THE FOLLOWINGS SHOULD NOT BE DONE //IF DIMENSION OMITTED THIS CAN'T RUN
	/*for(i=0;i<5;i++){
		printf("\np2[%d]=%u *p2[%d]=%u\n",i,p2[i],i,*p2[i]);
		p2++;
	}*/
	return 0;
}
