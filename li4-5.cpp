#include <stdio.h>
#include <math.h>
int main()
{
	int i,m,limit;
	
	printf("Enter m:");
	scanf("%d",&m);
	
	if(m<=1){
		printf("NO!");
	}else if(m==2){
		printf("YES!");
	}else{
		limit=sqrt(m)+1;
		for(i=2;i<=limit;i++){
		if(m%i==0)
		break;
		}
	
}
	if(i>limit)
	printf("YES!");
else
	printf("NO!");


	return 0;
}
