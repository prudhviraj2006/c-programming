#include<stdio.h>
int main()
{
int a[2][2]={1,2,3,4};
int b[2][2]={0,0,0,0};
int i,j;
int length=2;
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		b[i][j]=a[j][i];
	}

	for(j=0;j<2;j++)
	{
		printf("%d\t",b[i][j]);
	}

printf("\n");
}
return 0;
}
