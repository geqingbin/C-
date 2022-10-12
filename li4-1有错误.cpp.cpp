#include <stdio.h>
#include <math.h>
int main()
{
	int denominator,flag,i;
	double eps,item,pi;
	
	printf("Enter eps:");
	scanf("%lf",&eps);
	
	i=1;
	flag=1;
	denominator=1;
	item=1.0;
	pi=0;
	while(fabs(item)>=eps){
		pi=pi+item;
		i++;
		flag=-flag;
		denominator=denominator+2;
		item=flag*1.0/denominator;
	}
	printf("pi=%.4f\n",pi);
	return 0;
} 
