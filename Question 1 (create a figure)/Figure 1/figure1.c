
#include<stdio.h>

 int main (){
 	
 	int i,j;
 	
 	for(i=1;i<=11;i++)
 	{
 		for(j=1;j<i;j++)
 		{
 			printf("*");
		}
		printf(" ");
		for(j=11;j>i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	
 	return 0;
 }
