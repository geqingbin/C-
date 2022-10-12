#include <stdio.h>
int main()
{
    int valud1,valud2;
	char op;
	
	printf("Type in an exprssinon:");
	scanf("%d%c%d",&valud1,&op,&valud2);
	
	switch(op){
		case'+':
			printf("=%d\n",valud1+valud2);
			break;
	    case'-':
	    	printf("=%d\n",valud1+valud2);
	    	break;
	    case'*':
	    	printf("=%d\n",valud1*valud2);
	    	break;
	    case'/':
	    	if(valud2!=0){
	    		printf("=%d\n",valud1/valud2);
			}else{
				printf("你输入的没有意义");
			}
			break;
		case'%':
			if(valud2!=0){
				printf("=%d\n",valud1%valud2);
			}else{
				printf("你输入的没有意义");
			}
			break;
			default:
				printf("本智能阿斌还没有那么聪明");
				break;
	}
	
	return 0;
}
