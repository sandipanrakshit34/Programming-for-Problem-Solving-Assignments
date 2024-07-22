#include<stdio.h>
#define x 3
#define y 2
#define z 2
int main(){
	
	int a[x][y][z]={	{ { 1,3},{5,7} },
						{ {-2,-4},{-6,-8} },
						{ {23,54},{76,87}  }				
				  };
	//when initialized during creation, number of 2-d array can be omitted
	
	int i,j,k;
	/*printf("\nBase address of the 0-th 2-d array of the 3-d array=%u\n",a);
	printf("\nBase address of the 0-th 1-d array of the 0-th 2-d array\n of the 3-d array=%u\n",*a);
	printf("\nBase address of the 0-th element of the 0-th 1-d array \nof the 2-d array of the 3-d array=%u\n",**a);
	printf("\nValue of the 0-th element of the 0-th 1-d array of the 2-d array \nof the 3-d array=%u\n",***a);
	*/
	/*for(i=0;i<x;i++){
		printf("\nAddress of 2-d array no.=%d of the 3-d array=%u %u %u\n",i,(a+i),a[i],i[a]);
		printf("\nAddress of 1-d array  of 2-d array no. \nof the 3-d array=%u\n",*(a+i));
		printf("\nAddress of element  of 1-d array of \n2-d array of the 3-d array=%u\n",*(*(a+i)));
		printf("\nValue of the element  of 1-d array of 2-d array \nof the 3-d array=%d\n",*(*(*(a+i))));
	}*/
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			for(k=0;k<z;k++){
				printf("Address of the \n2-d array no.=%d|1-d array(row) no.=%d|\nof the 3-d array=%u\n",i,j,*(a+i)+j);
				printf("Address of the \n2-d array no.=%d|1-d array(row) no.=%d|column no.=%d|\nof the 3-d array=%u\n",i,j,k,*(*(a+i)+j)+k);
				printf("Value of the element in \n2-d array no.=%d|1-d array(row) no.=%d|column no.=%d|\nof the 3-d array=%d\n\n",i,j,k,*(*(*(a+i)+j)+k));
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
