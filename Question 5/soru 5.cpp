#include<stdio.h>

int main(){
	
	float i,n,a,b,k,result;
	for(k=1;;)
	{
		float d=0,c=0;
		
	printf("enter a value; \n");
	scanf("%f",&n);
	
	for(i=1;i<=n;i=i+2)
	{
		a=(1/i)*(1/i);
		c=c+a;
	}
	
		for(i=2;i<=n;i=i+2)
	{
		b=(1/i)*(1/i);
		d=d-b;
	}
	result=c+d;
	
	printf("f(%.0f)result= %.4f",n,result);
	printf("\n\n\n");
}
	
	return 0;
}
