#include <stdio.h>
int main(void)
{
	int x;
	printf("Enter x:");
	scanf("%d",&x);
	if(x<0){
		printf("y=sign(%d)=-1",x);
	}else if(x==0){
		printf("y=sign(0)=0");
	}else{
		printf("y=sign(%d)=1",x);
	}
	
	return 0;
}
 
