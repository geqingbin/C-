#include <stdio.h>
int main(void)
{
	int n,i,ji,sun;
	double a,p;
	sun=0;
	ji=0;
	
	printf("Enter ѧ������n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("Enter ��%d��ѧ���ĳɼ�a:",i);
		scanf("%lf",&a);
		sun=a+sun;
		if(a>60){
			ji++;
		} 
	}
	p=sun/n;
	printf("ѧ����ƽ���ɼ�=%.2f\n��������=%d",p,ji);
	
	return 0;
	
}
