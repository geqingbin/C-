#include <stdio.h>
int main(void)
{
	char ch;
	int first,k;
	printf("Enter 8 characteres:");
	for(k=1;k<=8;k++){
		ch=getchar();
		if(first==1){
			putchar(ch); 
			first=0;
		}else{
			putchar('-');
			putchar(ch);
		}
    }
	
}
