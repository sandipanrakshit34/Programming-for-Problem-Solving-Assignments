#include<stdio.h>
int main(){
	int a[12]=   {  10,20,30,40,50,60,70,80,90,100,110,120};
	//int a[3][4]={		{10,20,30,40},	{	50,60,70,80},	{	90,100,110,120}};
	int (*p1)[4]=&a;
	//int (*p2)[1]=&a;
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++)
			//printf("%d ",**p1);
			//printf("%d ",*(*p1+j));
			//printf("%d ",*(*p1+i*4+j)); //when we don't execute p1++
			//printf("%d ",*(*(p1+i)+j));	//when we don't execute p1++
			/*
			//printf("%d ",**p2);
			//printf("%d ",*(*p2+j));
			printf("%d ",*(*p2+i*4+j));
			printf("%d ",*(*(p2+i)+j));*/
			printf("%d ",*(*p1+j));
			
		printf("\n");
		p1++;
		//p2++;
	}
	
	
	/*int (*p1)[1]=&a;
	int (*p2)[2]=&a;
	int (*p3)[3]=&a;
	int (*p4)[4]=&a;
	int (*p5)[5]=&a;
	int (*p6)[6]=&a;
	int (*p7)[7]=&a;
	int (*p8)[8]=&a;
	int (*p9)[9]=&a;
	int (*p10)[10]=&a;
	int i;
	for(i=0;i<3;i++){
		printf("p1=%u ",p1);
		printf("p2=%u ",p2);
		printf("p3=%u ",p3);
		printf("p4=%u ",p4);
		printf("p5=%u ",p5);
		printf("p6=%u ",p6);
		printf("p7=%u ",p7);
		printf("p8=%u ",p8);
		printf("p9=%u ",p9);
		printf("p10=%u ",p10);
		p1++;p2++;p3++;p4++;p5++;p6++;p7++;p8++;p9++;p10++;*/
		
		
		
		
		
		printf("\n");
	
	return 0;
	
}
