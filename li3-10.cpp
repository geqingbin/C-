#include <stdio.h>
int main()
{
	int blank,digit,i,n,other;
	char op;
	
	blank=digit=other=0;
	printf("Enter n:");
	scanf("%d",&n);
	getchar();
	
	printf("Enter %d characters",n);
	for(i=1;i<=n;i++){
		op=getchar();
		switch(op){
			case' ':
		    case'\n':
		    	blank++;
		    	break;
		    case'0':case'2':case'3':case'4':case'5':case'6':case'7':case'8':case'9':case'1':
		    		digit++;
		    		break;
		    default:
		    	other++;
		    	break;
		}
	}
	printf("blank=%d  digit=%d  other=%d",blank,digit,other);
	
	return 0;
 } 
