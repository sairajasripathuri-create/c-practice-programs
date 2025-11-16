#include <stdio.h>
#include<conio.h>
int main()
{ int count =0,i;
char s[100];
puts("enter s");
gets(s);
for(i=0;s[i]!='\0';i++)
if ((s[i]>='a'&&s[i]<='z'))
{
	count++;
}
return 0;
}
