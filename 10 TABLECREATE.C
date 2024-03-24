#include<stdio.h>

int main()
{
 int i,j;
 
 printf("Enter a number to create table: ");
 scanf("%d",&j);
 for(i=1;i<11;i++)
 {
	printf("%dx%d=%d\n",j,i,j*i);
 }
 
 return 0;
}
