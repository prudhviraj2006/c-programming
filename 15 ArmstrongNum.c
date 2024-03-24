#include<stdio.h>
int main()
{
	int num=153,ognum,r,result=0;
	ognum=num;
	while(ognum!=0)
	{
		r=ognum%10;
		result+=r*r*r;
		ognum/=10;
	}
	if(result==num)
	{
		printf("%d is a amstrong num",num);
	}
	else
	{
		printf("%d it is not a amstrong num",num);
	}
	return 0;
}
