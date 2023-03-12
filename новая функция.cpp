#include <stdio.h>

void mass()
{
	int mas1[100];
	int mas2[100];
	int a,b;
	
	printf("a=");
	scanf("%i",&a);
    printf("b=");
	scanf("%i",&b);
	for(int i=0;i<a;i++)
	{
	scanf("%i",&mas1[i]);	
	}
	
	for(int i=0;i<a;i++)
	{
	printf("%1i",mas1[i]);
	}
	printf("\n\n");
	for(int j=0;j<b;j++)
	{
	scanf("%i",&mas2[j]);	
	}
	
	for(int j=0;j<b;j++)
	{
	printf("%i",mas2[j]);
	}
}

int main()
{
	mass();
	
}