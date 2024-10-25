#include <stdio.h>
int stringLen(char *str) {
	int length = 0;
	while (*str != '\0') {
		length++;
		str++;
	}
	return length;
}
int main() {
	char word[100];
	int stackleng,j=0;
	printf("enter your word: ");
	scanf("%s",&word);
	printf("your word is %s\n",word);
	stackleng=stringLen(word)+1;
	printf("its %d letters long\n",stackleng-1);
	char stack[stackleng];
	for(int i=0;i<stackleng-1;i++){
		stack[j+1]=word[i];
		j++;
	}
	stack[0]=stackleng-1+'0';
	for(int i=0;i<stackleng;i++){
		printf("%c\n",stack[i]);
	}
	return 0;
}




