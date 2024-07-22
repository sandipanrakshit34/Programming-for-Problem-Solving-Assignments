#include<stdio.h>
#define r 3
#define c 2
int main(){
	
	int a[][c]={	{1,2},
					{3,4},
					{5,6}
				}; 
	//when initialized during creation, number of row can be omitted
	
	int i,j;
	printf("\nbase address of the 0-th 1-d array of the 2-d array=%u",a);
	printf("\nbase address of the 0-th element of the 0-th 1-d array of the 2-d array=%u",*a);
	printf("\nvalue of the 0-th element of the 0-th 1-d array of the 2-d array=%u",**a);
	for(i=0;i<r;i++){
		printf("\nAddress of 1-d array no. %d of the 2-d array=%u\n",i,(a+i));
		printf("\nAddress of element no. %d of 1-d array no. %d of the 2-d array=%u\n",i,i,*(a+i));
		printf("\nValue of element no. %d of 1-d array no. %d of the 2-d array=%u\n",i,i,*(*(a+i)));
		
	}
	for(i=0;i<r;i++)
		for(j=0;j<c;j++){
			printf("\nAddress of 1-d array(row) no.=%d column no.=%d \nof the 2-d array=%u",i,j,*(a+i)+j);
			printf("\nValue of element of 1-d array(row) no.=%d column no.=%d \nof the 2-d array=%d\n",i,j,*(*(a+i)+j));
		}
	return 0;
}
