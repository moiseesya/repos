#include <stdio.h>

main ()
{
	int dd,mm,yy;
	printf("Enter the dd:");
	scanf("%i",&dd);
	printf("Enter the mm(in format:1,2,3 etc.):");
	scanf("%i",&mm);
	printf("Enter the yy:");
	scanf("%i",&yy);
	
	if ((mm==1&&dd>20)||(mm==2&&dd<20))
	{
		printf ("You are Aquarius");
	}
	if ((mm==2&&dd>19)||(mm==3&&dd<21))
	{
		printf ("You are Pisces");
	}
	if ((mm==3&&dd>20)||(mm==4&&dd<21))
	{
		printf ("You are Aries");
	}
	if ((mm==4&&dd>20)||(mm==5&&dd<22))
	{
		printf ("You are Taurus");
	}
	if ((mm==5&&dd>21)||(mm==6&&dd<22))
	{
		printf ("You are Gemini");
	}
	if ((mm==6&&dd>21)||(mm==7&&dd<23))
	{
		printf ("You are Cancer");
	}
	if ((mm==7&&dd>22)||(mm==8&&dd<24))
	{
		printf ("You are Leo");
	}
	if ((mm==8&&dd>23)||(mm==9&&dd<24))
	{
		printf ("You are Virgo");
	}
	if ((mm==9&&dd>23)||(mm==10&&dd<24))
	{
		printf ("You are Libra");
	}
	if ((mm==10&&dd>23)||(mm==11&&dd<23))
	{
		printf ("You are Scorpio");
	}
	if ((mm==11&&dd>22)||(mm==12&&dd<23))
	{
		printf ("You are Sagittarius");
	}
	if ((mm==12&&dd>22)||(mm==1&&dd<21))
	{
		printf ("You are Capricorn");
	}
	if(mm>12&&dd>30)
	{
		printf("Error");
	}
	
	
	int (yy%4);
	if (yy==0)
	{
		printf("Liap year");
	}
	    else
	    {
	    	printf ("not a leap year");
		}

	
	switch(yy%12)
	{
		case 0:
			{
			printf("Year of monkey");	
			}
			break;
		case 1:
			{
			printf("Year of rooster");	
			}
			break;
		case 2:
			{
			printf("Year of dog");	
			}
			break;	
		case 3:
			{
			printf("Year of pig");	
			}
			break;
		case 4:
			{
			printf("Year of rat");	
			}
			break;	
		case 5:
			{
			printf("Year of ox");	
			}
			break;
		case 6:
			{
			printf("Year of tiger");	
			}
			break;
		case 7:
			{
			printf("Year of rabbit");	
			}
			break;
		case 8:
			{
			printf("Year of dragon");	
			}
			break;
		case 9:
			{
			printf("Year of snake");	
			}
			break;
		case 10:
			{
			printf("Year of horse");	
			}
			break;
		case 11:
			{
			printf("Year of sheep");	
			}
			break;		
									
	}
}
