#include<stdio.h>

int main(){
	
	int i,j;
	for(i=0;i<=9;i++)
	 { 
	 for(j=0;j<i;j++)
	 {
	 	printf(" ");
	 }
	 for(j=8;j>=2*i;j--)
	 {
	 	printf("*");
	 }
	 printf("\n");
	 }
	
	return 0;
}
