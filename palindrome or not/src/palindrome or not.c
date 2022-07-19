/*
 ============================================================================
 Name        : palindrome.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char name[100];
	int flag=0,len,i;
	setbuf(stdout,NULL);
	printf("enter the string");
	scanf("%s",name);
	len=strlen(name);
	for(i=0;i<len;i++){
		if(name[i]!=name[len-i-1]){
			flag=1;
		}
	}if(flag==0){
		printf("string is palindrome");
	}else{
		printf("string is not palindrome");
	}

	return EXIT_SUCCESS;
}
