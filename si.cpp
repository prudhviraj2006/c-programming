#include<stdio.h>
float calculateSI (float principal,float time,float rate,char customerType);
int main()
{
	float principal=20000,time=3,rate,SI;
	char customerType='n';
	SI=calculateSI(principal,time,rate,customerType);
	printf(" The simple interest is %.2f",SI);
	return 0;
}
float calculateSI(float principal,float time,float rate,char customerType)
{
	if(customerType=='Y'||customerType=='y')
	{
		rate=120;
	}
	else
	{
		rate=100;
	}
	return (principal*rate*time)/1000;
}
