#include <stdio.h>
double fact(int n);   //�����������Զ���һ�������� 
int main(){
	int i,n;
	double sum;
    sum=0;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum=sum+fact(i);
		}
	printf("%.1lf",sum);
	
	return 0;
}
//����������ʼ   ��ֵ   ���� 
double fact(int n){
	int i;
	double result=1;
	
	for(i=1;i<=n;i++)
	result=result*i;
	
	return result;
}
