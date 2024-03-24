#include<stdio.h>
float calculateSI(float principal,float time,char customerType);
int main()
{
	float principal=10000,rate,time=1,SI;
	char customerType='y';
	SI=calculateSI(principal,time,customerType);
	printf("The simple interest is %.2f\n",SI);
	return 0;
}
float calculateSI(float principal,float time,char customerType)
{
	float rate;
	if(customerType=='y'||customerType=='Y')
	{
		rate=12.0;
	}
	else
	{
		rate=10.0;
	}
	return (principal*rate*time)/1000;
}
