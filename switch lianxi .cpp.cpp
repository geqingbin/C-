#include <stdio.h> 
int main()
{
	int value1,value2;
	char op;
	
	printf("Type in an expression:");
	scanf("%d%c%d",&value1,&op,&value2);
	switch(op){
		case'+':
			printf(" =%d\n",value1+value2);
			break;
		case'-':
			printf(" =%d\n",value1-value2);
			break;
			default:
				printf("jdsalkfj");
				break;
	}
	return 0;
}
