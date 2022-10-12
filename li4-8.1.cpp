#include <stdio.h>
int main()
{
	int i,n,max,number;
	
	printf("Enter n");
	scanf("%d",&n);
	printf("请输入%d个学生成绩",n);
	scanf("%d",&number);
	
	max=number;
	for(i=2;i<=n;i++){
		scanf("%d",&number);
		if(max<number){
			max=number;
		}
	}
	
	printf("max=%d",max);
	
	return 0;
}
