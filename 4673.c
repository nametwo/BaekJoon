#include <stdio.h>

int selfnum(int a);


int main(void) {

	int a;
	int result[10036] = { 0, };

	for (int i = 1; i <= 10000; i++) {
		a = selfnum(i);
		result[a] = 1;
	}

	for (int i = 1; i <= 10000; i++) {
		if (result[i] == 0) {
			printf("%d\n", i);
		}
	}
	
	return 0;
}

int selfnum(int a) {

	int z = a;// 출력값

	while (a != 0) {
		z += a % 10;
		a /= 10;
	}
	return z;
}
