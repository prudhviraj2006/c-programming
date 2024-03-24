#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int b[5]={11,12,13,14,15};
	int arr1=5,arr2=5,arr_re,i,j;
	arr_re = arr1+arr2;
	int c[arr_re];
	for (i=0;i<arr1;i++)
	{
		c[i]=a[i];
	}
	for (i=0,j=arr1;j <arr_re && i<arr2;i++,j++)
	{
		c[j] = b[i];
	}
	for (i=0;i<arr_re;i++)
	{
		printf("%d",c[i]);
	}
	return 0;
}
