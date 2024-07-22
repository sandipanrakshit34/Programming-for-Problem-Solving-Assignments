// C program to print elements of a 2-D array 
// by scripting a pointer to an array 
#include<stdio.h> 

int main() 
{ 
int i,j;
int arr[3][4] = { 
					{10, 12, 14, 16}, 
					{20, 22, 24, 26}, 
					{30, 32, 34, 36} 
				}; 
int (*ptr)[4]; //pointer to an array
ptr = arr; //arr means &arr[0] arr
for(i=0;i<3;i++)
	for(j=0;j<4;j++){
	//printf("%u %u %u\n", ptr, ptr + 1, ptr + 2); 
	printf("%u \n", ptr + i); 
	//printf("%u %u %u\n", *ptr, *(ptr + 1), *(ptr + 2)); 
	printf("*ptr+%d=%u *(ptr+%d)=%u\n", i,*ptr+i,i,*(ptr + i));
	printf("**ptr+%d=%d **(ptr+%d)=%d *(*(ptr + %d) + %d)=%d *(*ptr + %d + %d)=%d\n", i,**ptr+i, i,**(ptr+i),i,j,*(*(ptr + i) + j),i,j,*(*ptr + i + j)); 
	printf("%d %d %d\n", ptr[0][0], ptr[1][2], ptr[2][3]);
}
return 0; 
} 

