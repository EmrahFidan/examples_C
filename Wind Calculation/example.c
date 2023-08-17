#include<stdio.h>
#include<limits.h>

int main(){
	int speed,i;
	for(i=1;;)
	{
	printf("please enter speed value of wind:\n");
	scanf("%d",&speed);
	
	switch(speed)
	{
		
		case 65 ... 117:
			printf("Class=F0\n");
			printf("Observed damage=Minor\n");
			break;
			
		case 118 ... 180:
			printf("Class=F1\n");
			printf("Observed damage=Weak\n");
			break;
			
		case 181 ... 252:
			printf("Class=F2\n");
			printf("Observed damage=Strong\n");
			break;
			
		case 253 ... 333:
			printf("Class=F3\n");
			printf("Observed damage=Severe\n");
			break;
			
		case 334 ... 419:
			printf("Class=F4\n");
			printf("Observed damage=Devastating\n");
			break;
			
		case 420 ...511:
			printf("Class=F5\n");
			printf("Observed damage=incredible\n");
			break;
			
		case 512 ... INT_MAX:
			printf("Class=F6\n");
			printf("Observed damage=Unthinkable\n");
			break;	
		
		default:
			printf("invalid value:\n");
			break;	
			
	}
	printf("\n");
	printf("\n");
}
	return 0;
}
