#include<stdio.h>
#include<string.h>
void swap(char *x,char *y)
{
	char temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	char a[]="141";
	int len=strlen(a);
	int i,j;
	for(i=0;i<len;i++)
	{
		for(j=i;j<len;j++)
		{
			swap(&a[i],&a[j]);
			printf("%s\n",a);
			swap(&a[i],&a[j]);
		}
	}
	return 0;
}
