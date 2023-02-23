#include <stdio.h>

main()
{
int login,password;
printf("login=");
scanf("%i",&login);
printf("password=");
scanf("%i",&password);
if (((login==157)&&(password==751))||((login==256)&&(password==652)))
{
printf("OK");
}
else 
{
 printf("Error");
}

}