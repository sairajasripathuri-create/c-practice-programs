#include<stdio.h>
int main()
{
	int lower,upper,digits,charcter;
	char s[100];
	puts("enter s");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if (s[i]>='a'&&s[i]<='z')
		lower++;
		else if(s[i]>='A'&&s[i]<='z')
		upper++;
		else if(s[i]>='0'&&s[i]<='9')
		digit++;
		else if (s[i]>='&'&&s[i]<='&')
		special character++;
	}
	return 0;
	}
}
