#include <stdio.h>
#include <string.h>

main()
{
   char str [100];
   
   gets(str);
   
   int i=0;
   
   for (int j=i;j<strlen(str);j++)
   {
   	str[j]=str[j+1];
   }
 
   
   puts(str);
}