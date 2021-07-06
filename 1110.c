#include <stdio.h>

int main(void) {

	int a;
	int i = 0;

	scanf("%d", &a);

	int b = a;

	

	do 
	{
		int x, y, z;
		
		if (a < 10) {
			a = a * 10 + a;
		}
		else {
			x = a / 10;
			y = a - (x * 10);
			z = x + y;

			if (z >= 10) {
				z = z - ((z / 10) * 10);
			}

			a = y * 10 + z;
		}

		i++;
	} while (b != a);
	
	printf("%d", i);
}
