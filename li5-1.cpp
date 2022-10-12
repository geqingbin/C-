#include <stdio.h>
double v(double r,double h);
int main(){
	double ri,hi,vo;
	
	printf("Enter ri and hi");
	scanf("%lf%lf",&ri,&hi);
	
	vo=v(ri,hi);
	printf("vo=%.3f\n",vo);
	
	return 0;
} 

double v(double r,double h){
	double result;
	
	r=3.1415926*r*r*h;
	
	return r;
}
