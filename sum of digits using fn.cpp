#include<stdio.h>
int sum(int n)
{
	int sum=0;
	while(n!=0)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main()
{
	int n=492;
	printf("%d",sum(n));
	return 0;
}
