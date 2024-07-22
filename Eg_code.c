#include <stdio.h>
int main()
{
 int a[] = {1,2,4,6,8},*p;
 p = a;
printf("%d %d\n", *p, *++p);
printf("%d %d\n", ++*p, *p++);
return 0;
}
