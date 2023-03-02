#include <stdio.h>

main()
{
	{
	int i=1;
	while(i<10)
	{
		printf("Hello\n");
		i=i+1;
	}
    }

	int i=0;
	while(i<15)
	{
		printf ("%d\n",i);
		i=i+1;
	}
	{
		int i=1;
		while(i<15)
	    {
		printf ("%d\n",i);
		i=i+2;
	    }
	}

    {
	int i=5;
	int sum=0;
	while (i<16)
	{
		sum=sum+i;
		i=i+1;
	}
	printf("%d",sum);
    }
}