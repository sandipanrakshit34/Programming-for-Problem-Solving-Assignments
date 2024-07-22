#include<stdio.h>
#include<stdlib.h>
void main() {
	FILE *fptr1=NULL,*fptr2=NULL;
	char name[30],stream[30];
	int roll;
	int ch;
	fptr1=fopen("Profile.txt","w");
	if(fptr1==NULL) {
		printf("File does not exist");
		exit(1);
	}
	if(fptr1!=NULL) {
		printf("Enter your details:\n");
		printf("Name:");
		gets(name);
		printf("stream:");
		gets(stream);
		printf("Roll no.:");
		scanf("%d",&roll);
		fprintf(fptr1,"your details:\n name:%s\n Stream:%s\n Roll no.:%d\n",name,stream,roll);
	}
	fclose(fptr1);
	fptr1=fopen("Profile.txt","w");
	fptr2=fopen("destination.txt","w");
	if(fptr2==NULL) {
		printf("error");
    	exit(1);
    }
    while((ch=fgetc(fptr1))!=EOF) {
    	fputc(ch,fptr2);
	}
	fclose(fptr1);
	fclose(fptr2);
	printf("successfully copied");
}
