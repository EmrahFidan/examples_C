#include<stdio.h>

int main(void){
	
	int x,y,i,j,sum=0;
for(i=1;;)
{	
	printf("please enter lower limit:\n");
	scanf("%d",&x);
	printf("please enter upper limit:\n");
	scanf("%d",&y);
	
	int primenumber=0;
	for(i=x+1;i<y;i++)
	{
		primenumber=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			primenumber=1;
		}
		if(primenumber==0&&i!=1)
		{
			sum=sum+i;
		}
	}
	printf("sum:%d",sum);
	printf("\n\n\n");
}
	return 0;
}
