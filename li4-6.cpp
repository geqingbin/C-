#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int count,flag,mynumber,yournumber;
	count=0;
	flag=0;
	
	srand(time(0));
	mynumber=rand()%100+1;
	
	while(count<7){
		printf("Enter yournumber:");
		scanf("%d",&yournumber);
		count++;
		
		if(yournumber==mynumber){
			printf("Lucky you!\n");
			flag=1;
			break;
		}else if(yournumber<mynumber){
			printf("Too small!\n");
		}else if(yournumber>mynumber){
			printf("Too big!\n");
		}

}
    if(flag!=1){
			printf("Game Over!");
		}
	
	
	
	return 0;
 }
