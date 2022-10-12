#include <stdio.h>
int main(void)
{
	int n,i,ji,sun;
	double a,p;
	sun=0;
	ji=0;
	
	printf("Enter 学生个数n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("Enter 第%d个学生的成绩a:",i);
		scanf("%lf",&a);
		sun=a+sun;
		if(a>60){
			ji++;
		} 
	}
	p=sun/n;
	printf("学生的平均成绩=%.2f\n及格人数=%d",p,ji);
	
	return 0;
	
}
