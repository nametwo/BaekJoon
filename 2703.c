#include <stdio.h>
#include <string.h>

int main(void){
	
	int c;
	scanf("%d",&c);
	char result[c][100];
	
	for(int k=0;k<c;k++){
	
    char a[100];
    char b[26];
    scanf(" %[^\n]",a);
    scanf(" %[^\n]",b);
    

    for(int j=0;j<100;j++){
    	
    	if(a[j]!=32){

			for(int i=0;i<26;i++){
				
				if(a[j]== i+65){
	
					a[j]= b[i];
					break;
				}
			}	
		}
	}
	strcpy(result[k],a);
	
	}


 	for(int i=0;i<c;i++){
	printf("%s\n",result[i]);
	}
}
