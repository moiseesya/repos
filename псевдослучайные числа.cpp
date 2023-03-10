#include <stdio.h>
#include <time.h>
#include <stdlib.h>
main()
{
	int mas[100][100];
	
	int a,b;
	
	printf("a=");
	scanf("%i",&a);
	
    printf("b=");
	scanf("%i",&b);
	
	srand(time(NULL));
	
	for(int j=0;j<a;j++)
	{
	
    	for(int i=0;i<b;i++)
	    {
		mas[j][i]=rand()%7+(-2);
	    }
    }
    for(int j=0;j<a;j++)
	{
	
    	for(int i=0;i<b;i++)
	    {
			printf("%7i",mas[j][i]);
	    }
	    printf("\n\n");
    }

}