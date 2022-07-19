/*
 ============================================================================
 Name        : selection.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,j,values[100],temp;
	setbuf(stdout,NULL);
	printf("enter the limit");
	scanf("%d",&n);
	printf("enter the values");
	for(i=0;i<n;i++){
		scanf("%d",&values[i]);

	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(values[i]>values[j]){
				temp=values[i];
				values[i]=values[j];
				values[j]=temp;
			}
		}
	}printf("sorted values:");
	for(i=0;i<n;i++){
		printf("%d\t",values[i]);
	}
	return EXIT_SUCCESS;
}

