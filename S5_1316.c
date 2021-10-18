#include <stdio.h>
#include <string.h>


int main(void) {

	int alphabet = 0;
	int num, result = 0, b;
	int a[26] = { 0, };

	char word[101] = { "" };

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%s", &word);

		

		for (int k = 0; k < strlen(word); k++) 
		{

            if(strlen(word)==k){
                if(word[k] != word[k-1]){
                    a[word[k]-97] += 1;
                }
            }
			a[word[k]-97] += 1;

            if(word[k] == word[k+1]){
                a[word[k]-97] -= 1;
            }


        }

		for (int k = 0; k < 26; k++) {
			if (a[k] >= 2) {
				result++;
				break;
			}
		}

		for (int k = 0; k < 26; k++) {
			a[k] = 0;
		}
	}
	
	printf("%d", num - result);
}
