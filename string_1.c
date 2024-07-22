#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
	char str[20],temp;
	int len,i;
	printf("enter a string: ");
	scanf("%s",str);
	len=strlen(str);
	printf("string in reverse order:");
	for(i=len-1;i>=0;i--) {
		printf("%c",str[i]);
	}
	return 0;
}
