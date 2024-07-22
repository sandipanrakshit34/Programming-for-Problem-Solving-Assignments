#include<stdio.h>
#include<stdlib.h>
int main() {
FILE *fptr1=NULL,*fptr2=NULL;
char name[30],stream[30];
int roll;
char ch;
fptr1=fopen("abc.txt","w");
if(fptr1==NULL) {
    printf("no file");
    exit(1);
}
    printf("enter your details:\n");

    printf("enter your name:\n");
    gets(name);
    printf("enter your stream:\n");
    gets(stream);
    printf("enter your roll no.:\n");
    scanf("%d",&roll);
    fprintf(fptr1,"your details:\n Name: %s\n Stream: %s\n Roll no.: %d\n",name,stream,roll);
    printf("your details:\n Name: %s\n Stream: %s\n Roll no.: %d\n",name,stream,roll);
    
fclose(fptr1);
fptr1=fopen("abc.txt","r");
fptr2=fopen("destination.txt","w");
if(fptr2==NULL) {
    printf("no file");
    exit(1);
}
while((ch=fgetc(fptr1))!=EOF) {
    fputc(ch,fptr2);
}
fclose(fptr1);
fclose(fptr2);
printf("succesfull copied");
return 0;
}