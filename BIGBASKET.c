#include<stdio.h>
int main()
{
	int M=2,G=3,P=1,W=2000,B,MP=200,GP=400,PP=350,BB;
	printf("Wallet Balance : %d\n\n",W);
	printf("Mangoes price =200\nGrapes price =400\nPomogranate price =350\n\n");
	printf("BASKET :\n");
	printf("Mangoes -> %d X %d = %d\n",MP,M,MP*M);
	printf("Grapes -> %d X %d = %d\n",GP,G,GP*G);
	printf("Pomogranate -> %d X %d = %d\n\n",PP,P,PP*P);
	B =(MP*M + GP*G + PP*P);
	BB = W-B;
	if (BB<=0)
	{
		printf("Insufficient Balance = %d",BB);
	}
	else
	{
		printf("Balance : %d\n\n",BB);
		printf("Thankyou visit again");
	}
	return 0;
	
}
