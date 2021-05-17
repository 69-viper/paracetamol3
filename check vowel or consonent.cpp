//wap to sort numbers in decending order.
#include<stdio.h>
#include<string.h>
int main()
{
	char s;
	printf("enter the character:");
	scanf("%c",&s);
	
	if(s=='a'||s=='A'||s=='e'||s=='E'||s=='i'||s=='I'||s=='o'||s=='O'||s=='u'||s=='U'){
		printf("%c is a vowel",s);
	}
	else
	{
		printf("%c is a consonent",s);
	}
	return 0;
}
