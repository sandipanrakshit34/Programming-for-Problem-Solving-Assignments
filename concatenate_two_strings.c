#include<stdio.h>
int main() {
	char str1[50],str2[50],i=0,j=0;
	printf("enter the first string value: \n");
	gets(str1);
	printf("enter the second string value: \n");
	gets(str2);
	while(str1[i]!='\0') {
		i++;
	}
	j=0;
    while(str2[j]!='\0') {
	        str1[i]=str2[j];
	        i++;
	        j++;
    }
	        str1[i]='\0';
	printf("the concatenation of the both strings: \n");
	printf("%s",str1);
	return 0;
}
