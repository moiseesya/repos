#include <stdio.h>
#include <string.h>

int main()
{
char str[100];
gets (str);
int size = strlen(str);

for (int i = 0; i < size / 2; i++)
{
int buf = str[i];
str[i] = str[size - 1 - i];
str[size - i - 1] = buf;
}
puts (str);
}

