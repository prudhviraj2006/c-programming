#include<stdio.h>
int main()
{
	int a=12345,i=0;
	for(int multiplier=1;a>0;multiplier*=10,a/=10)
	i+=((a%10)+1)*multiplier;
	printf("the number incremented by 1:%d\n",i);
	return 0;
}
