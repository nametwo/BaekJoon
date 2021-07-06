#include <stdio.h>

int main(void) {

	int a;
	char s[50][50] = { " " };

	scanf("%d", &a);
	
	for (int i = 0; i < a; i++)
	{
		scanf("%s", s[i]);
	}

	for (int i = 0; i < a - 1; i++)
	{
		for (int k = 0; k < 50; k++)
		{
			if (s[i][k] != 0)
			{
				if (s[i][k] == s[i + 1][k])
				{

				}
				else
				{
					s[i + 1][k] = '?';
				}
			}
			else
			{
				break;
			}
		}
	}


	for (int k = 0; k < 50; k++)
	{
		if (s[a - 1][k] != 0) {
			printf("%c", s[a - 1][k]);
		}
	}

}
