#include<stdio.h>
struct student {
    char name[20],address[20];
    float marks;
};
int main() {
    struct student s[5];
    int i;
     printf("enter student record: ");
    for(i=1;i<=5;i++) {
        printf("enter student details of roll no. %d: \n",i);
        printf("enter name: \n");
        scanf("%s",&s[i].name);
        printf("enter marks: \n");
        scanf("%f",&s[i].marks);
        printf("enter address: \n");
        scanf("%s",&s[i].address);
    }
    printf("the student records are: \n");
     for(i=1;i<=5;i++) {
         printf("the details of student of roll no.:%d: \n",i);
         printf("name : %s\n",s[i].name);
         printf("marks : %f\n",s[i].marks);
         printf("address: %s\n",s[i].address);
    }
     printf("enter the student roll number to be found: \n");
     scanf("%d",&i);
         printf("the details of student roll no.:%d: \n",i);
         printf("name : %s\n",s[i].name);
         printf("marks : %f\n",s[i].marks);
         printf("address: %s\n",s[i].address);
    return 0;
}