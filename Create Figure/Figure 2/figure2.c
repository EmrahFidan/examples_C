#include<stdio.h>
int main(){
	
	int i,j,k,l,m,n;
	
	for(i=0;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf(" ");
			for(n=9;n>2*i;n--)
			{
				printf("*");
			}
			if(i!=5)
			printf(" ");
	          for(j=1;j<=i;j++)
	          {
	          	printf("*");
			}
		printf("\n");
	}
	
	for(k=1;k<=5;k++)
	{
		for(l=4;l>=k;l--)
		{
			printf("*");
		}
		printf(" ");
			for(n=2;n<=2*k;n++)
			{
				printf("*");
			}
			printf(" ");
			for(l=4;l>=k;l--)
			{
				printf("*");
			}
		
		printf("\n");
	}
	return 0;
}
