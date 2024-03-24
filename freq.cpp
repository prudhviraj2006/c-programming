#include<stdio.h>
int main()
{
	int num[]={1,2,2,4};
	int i;
	int len=4;
	int freq[256]={0};
	for(i=0;i<4;i++)
	{
		freq[num[i]]++;
	}
	for(i=0;i<256;i++)
	{
		if(freq[i]>0)
		{
			printf(" The frequency of %d =%d\n",i,freq[i]);
		}
	}
	return 0;
}
