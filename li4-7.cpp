#include <stdio.h>
double f(int n);      //���� ���� 
int main()
{
	int i,n;
	double sum;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	sum=0;
	
	for(i=1;i<=n;i++){
		sum=sum+f(i);
		 
	}
	
	printf("1!+2!+...+%d!=%.0f",n,sum);
	
	return 0;
}


//���� ��n���ĺ��� 
double f(int n)
{
	int i;
	double result;
	
	if(n<0){
		return 0;
	}
	
	
	result=1;
	for (i=1;i<=n;i++){
		result=result*i;
	}
	
	return result;
}

