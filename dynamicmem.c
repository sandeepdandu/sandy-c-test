#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
char *ptr,*ptr2;
printf("enter a string ");
scanf("%d",&n);
ptr= (char*)malloc(n*sizeof(char));
printf("enter string is ");
scanf("%s",ptr);
printf("%s",ptr);
int m=8;
ptr2= realloc(ptr, m*sizeof(char));
printf("enter a string ");
scanf("%[^\n]",ptr2);
printf("entered string is %s",ptr2);
free(ptr2);
}









