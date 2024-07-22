#include<stdio.h>
//void f1(int*,int);
int main(){
	int a[5]={10,20,30,40,50};
	int b[2][3]={{11,12,13},{14,15,16}};
	int c[2][2][3]={ {  {11,12,13},
						{14,15,16} 
					 },
					 { 	{11,12,13},
					 	{14,15,16}
					 }
					};
	int (*p)[5]=&a;			//fine, pointer to the 1-d array of 5 elements/columns
	
	//int (*q1)[3]=&b[0];	//fine, pointer to the 0-th 1-d array of 3 elements/
							//columns of the 2-d array as name of the array,b=&b[0]
							
	int (*q1)[3]=b;			//fine, pointer to the 0-th 1-d array of 3 elements/
							//columns of the 2-d array as name of the array,b=&b[0]
							
	int (*q2)[2][3]=&b;		//ok, pointer to the 2-d array of 2 rows and 3 columns
	
	//int (*r1)[2][3]=&c[0]; 
	//int (*r1)[2][3]=c[0]; 
	//int (*r1)[3]=&c[0][0];//ok, pointer to the 0-th 1-d array of 3 elements/
							 //columns of the 0-th 2-d array of  the 3-d array as
							 //&c[0][0] refers to the address of the 0-th 1-d array
							 //of the 0-th 2-d array of the 3-d array
	
	int (*r1)[3]=*c;		//ok, as c refers to the address of the 0-th 2-d array 
							//of the 3-d array, *c refers to the address of the 0-th 
							//1-d array of 3 elements/columns, so r be the pointer 
							//to the 0-th 1-d array of the 0-th 2-d array 
							//of  the 3-d array
	
	//int (*r1)[3]=c;		//warning for incompatible initializer as c refers to 
							//the address of the 0-th 2-d array of the 3-d array
		
	int (*r2)[2][3]=c;  	//ok, pointer to the 0-th 2-d array of 2 rows and 
							//3 elements/columns of the 0-th 2-d array of the
							//3-d array	
	//int (*r3)=**c;	//pointer to the 0-th int element of the 0-th 1-d array 
						//of the 0th 2-d arrar of the 3-d array
	int *r4=**c;
	
	/*int x=10;
	int (y)=20;
	int y=30;
	printf("\nx=%d (y)=%d y=%d\n",x,(y),y); // y and (y) are same identifier*/
							
	//int (*r3)[3]=**c;	//warning for incompatible initializer as **c refers to 
						//the address of the 0-th element of the 0-th 1-d array
						//of the 2-d array of the 3-d array
	
	int (*r3)[2][2][3]=&c;
	
	//int *x[5]={a+0,a+1,a+2,a+3,a+4};
	//int *y[6]={*(b+0)+0,*(b+0)+1,*(b+0)+2,*(b+1)+0,*(b+1)+1,*(b+1)+2};
	//int *z[3]={*(b+0),*(b+1),*(b+2)};
	int i;
	for(i=0;i<5;i++){
		printf("\na+%d=%u p=%u q1=%u q2=%u ",i,a+i,p,q1,q2);
		printf("\nr1=%u r2=%u ",r1,r2);
		//printf("\nr3=%u ",r3);
		printf("\nr3=%u r4=%u ",r3,r4);
		p++;q1++;q2++;
		r1++;r2++;
		r3++;
		r4++;
	
		
	}
	/*for(i=0;i<6;i++){
		printf("\na+%d=%u x[%d]=%u *x[%d]=%u ",i,a+i,i,x[i],i,*x[i]);
		
		//x++;y++,z++;
		
	}*/
	//f1(a,5);
	//f1(&a[0],5);
	//f1(&a,5);
	
/*	printf("\n*a=%d",*a);
	printf("\na+1=%u",a+1);
	printf("\n&a+1=%u",&a+1);
	//printf("\na=%u",&(a+1));
	printf("\n*a+1=%d",*a+1);
	printf("\n*a+2=%d",*a+2);
	printf("\n*(a+3)=%d",*(a+3));*/
	return 0;
}
/*void f1(int *x,int y){
	int m;
	for(m=0;m<y;m++){
		printf("\nvalue=%d",x);
		x++;
	}
	
	
}*/
