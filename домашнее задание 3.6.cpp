#include <stdio.h>

main()
{
	int a=5;
	while(a!=7)
	{
		scanf("%i",&a);
		if((a>7)||(a>10))
		{
			printf("bolshe\n");
		}
		else 
		{
			if(a<7)
			{
			printf("menshe\n");	
			}
		}
	if (a<10)
	{
	printf("menshe 10\n");	
	}	
	    if (a%2==0)
	    {
			printf("delitsya na 2\n");
		}
	    if (a%3==0)
	    {
			printf("delitsya na 3\n");
		}	
}
	printf("super\n");
	}

