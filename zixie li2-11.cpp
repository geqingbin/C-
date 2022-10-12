#include <stdio.h>
double fact(int n);   //声明函数（自定义一个函数） 
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
//声明函数开始   赋值   计算 
double fact(int n){
	int i;
	double result=1;
	
	for(i=1;i<=n;i++)
	result=result*i;
	
	return result;
}
