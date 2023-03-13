#include<stdio.h>
#include <string.h>
#include <conio.h>
void wr()
{
    char str[100];
	char b;
	printf("Enter str:");
	gets(str);
	printf("Enter symb:");
	scanf("%c",&b);
	char buf=str[0];
	str[0]=b;
	str [strlen(str)-1]=b;
	puts(str);
	return ;
}
int main()
{
    
wr();
	return 1;
}