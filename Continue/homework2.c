#include<stdio.h>

int main(){
	
	int i,j,n,k,l;
	
	printf("please enter positive number: \n");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=i;j<n+i;j++)
		{
		for(l=5;l<n;l++)
		{
		}
		if(j!=l)
		{
			k=j%l;
			printf("%d",k);
		}
		else{
			printf("%d",j);
		}
		}
	        printf("\n");
	}
	return 0;
}
