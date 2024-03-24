#include<stdio.h>
void main()
{
	float h=200.7;
	
	if(h<=150.0)
	{
		printf("too short",h);
	}
	else if ((h>=150.0)&&(h<=165.0))
	{
		printf("normal height\n");
	}
	else if ((h>=165.0)&&(h<=195.0))
	{
		printf("taller\n");
	}
	else
	{
		printf("alien\n");
	}
	
}
