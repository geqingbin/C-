#include <stdio.h>
int main()
{
	int n,max,number;
	
	printf("������ѧ��������n:");
    scanf("%d",&n);
	printf("��ʾ������\n����һ��while���ѭ�������븺�����ɽ���ѭ��\n");
	
	printf("������%d��ѧ���ĳɼ���",n);
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
