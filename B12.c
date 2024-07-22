#include<stdio.h>
int main () {
	int counter1,counter2;
	for(counter1=0;counter1<3;counter1++) {
		printf("\n at the beginning of the outer for loop-- counter1=%d",counter1);
		for(counter2=2;;counter2--) {
		printf("\n--at the beginning of the inner for loop before if blook--counter2=%d",counter2);
		if(counter2==1) {
			printf("\n counter2=%d",counter2);
			break;
		}
		printf("\n at the end of the inner for loop after if block--counter2=%d",counter2);
		}
		printf("\n at the beginning of the outer for loop-- counter1=%d",counter1);
	}
	printf("\n out of the outer for loop-- counter1=%d",counter1);

	return 0;
}
