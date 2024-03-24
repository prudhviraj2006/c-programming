#include<stdio.h>
#include<string.h>
int main()
{
	char line[150]="saveetha school of engineering";
	int i,j,length=0;
	length=strlen(line);
	for(i=0;i<length;i++)
	{
		if(line[i]=='A'||line[i]=='a'||line[i]=='E'||line[i]=='e'||line[i]=='I'||line[i]=='i'||line[i]=='O'||line[i]=='o'||line[i]=='U'||line[i]=='u')
		{
			for(j=i;j<length;j++)
			{
				line[j]=line[j+1];
			}
			i--;
			length--;
		}
		line[length+1]='\0';
	
	}
	printf(" after removing vowels: %s",line);
	return 0;
}
