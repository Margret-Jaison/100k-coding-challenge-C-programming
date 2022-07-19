/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,sum=0,i;
	setbuf(stdout,NULL);
	printf("Enter the limit");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2!=0){
			sum=sum+i;
		}
	}printf("odd number sum is %d",sum);

	return EXIT_SUCCESS;
}
