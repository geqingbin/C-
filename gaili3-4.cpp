#include <stdio.h>
int main(void)
{
	double x,y;
	printf("Enter x:");
scanf("%lf",&x);
	if(x<0){
		printf("y=0");
	}else if(x<=15){
		y=4*x/3;
		printf("y=%.2f",y);
	}else{
		y=2.5*x-10.5;
		printf("y=%.2f",y); 
	}

	
	return 0;
}


