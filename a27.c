#include <stdio.h>
#include<conio.h>
int main()
{
	char s;
	scanf("%c",&s);
	if((s>='a'&&s<='z')||(s>='A'&&s<='Z'))
	{
		printf("NO");
	}
	else
	{
		printf("yES");
	}
	getch();
	
}
