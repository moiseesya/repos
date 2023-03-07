#include <stdio.h>

main()
{
    int mas[100];
	int n; 
	
	printf("Enter number of elements:");
	scanf("%i",&n);
	
	for(int i=0;i<n;i++)
	{
	scanf("%i",&mas[i]);	
	}
		
	for(int i=0;i<n;i++)
	{
	printf("%i",mas[i]);	
	}
	printf("\n");
	
	bool fl=true;
	while (fl)
	{
		fl=false;
	for(int j=0;j<n;j++)
	{
	for(int i=0;i<n-1;i++)
	{
		if(mas[i]>mas[i+1])
		{
		int z=mas[i];
		mas[i]=mas[i+1];
		mas[i+1]=z;
		fl=true;
		}
	}
}
}
	for(int i=0;i<n;i++)
	{
	printf("%i",mas[i]);	
	}

}