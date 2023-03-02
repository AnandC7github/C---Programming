#include <stdio.h>
int main()
{
  	int n = 0, count = 0;
  	char s[1000];

	printf("\t\tCheck vowel\n ");
	printf("\t-------------------------------\n");
  	printf("Write a letter :");
  	gets(s);

    if (s[n] == 'A' || s[n] == 'E' || s[n] == 'I' || s[n] == 'O' || s[n] == 'U' || s[n] == 'a' || s[n] =='e' || s[n]=='i' || s[n] == 'o' || s[n] == 'u')
	{
		count++;
		if(count ==1)
		{
			printf("Its a vowel");
		}
		else
		{
			printf("Its not a vowel");
		}
	}
	return 0;
}
