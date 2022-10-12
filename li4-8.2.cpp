#include <stdio.h>
int main()
{
	int n,max,number;
	
	printf("请输入学生总人数n:");
    scanf("%d",&n);
	printf("提示！！！\n这是一个while语句循环，输入负数即可结束循环\n");
	
	printf("请输入%d个学生的成绩：",n);
	scanf("%d",&number);
	max=number;
	
	while(number>0){
		scanf("%d",&number);
		if(max<number){
			max=number;
		}
	}
	
	printf("MAX=%d",max);
	
	return 0;
}
