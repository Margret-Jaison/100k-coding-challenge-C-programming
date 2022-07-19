/*
 ============================================================================
 Name        : search.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,values[100],key,flag=0;
	setbuf(stdout,NULL);
	printf("Enter limit");
	scanf("%d",&limit);
	printf("Enter values");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&values[i]);
	}printf("please enter search key");
	 scanf("%d",&key);
	 for(i=0;i<limit;i++){
		 if(key==values[i]){
			flag=1;
			 break;
		 }
	 }if(flag==1){
		 printf("value found at position %d",i+1);
	 }else{
		 printf("key not present");
	 }
	return EXIT_SUCCESS;
}
