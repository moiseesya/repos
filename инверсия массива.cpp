#include <stdio.h>

main()
{
	int mas[100][100];
	
	int a,b;
	
	printf("a=");
	scanf("%i",&a);
	
    printf("b=");
	scanf("%i",&b);
	
	
	for(int j=0;j<a;j++)
	{
	
    	for(int i=0;i<b;i++)
	    {
		scanf("%i",&mas[j][i]);
	    }
    }
    for(int j=0;j<a;j++)
	{
	
    	for(int i=0;i<b;i++)
	    {
			printf("%7i",mas[i][j]);
	    }
	    printf("\n\n");
    }

}