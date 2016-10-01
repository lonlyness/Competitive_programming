#include <stdio.h>

int main(void) {
	char s[21];
	int i,j;

	scanf("%s",s);

	for(i=0; s[i] !='\0'; i++){
	}
	j=i-1;
	for(i=j;j>=0;j--){
		if(s[i] == '<'){
			printf(">");
		}else{
			printf("<");
		}
	}
	printf("\n");

	return 0;
}
