//书本开头第一页做题得出来的结论 
//   /（除号）   与   %（取余）之间的应用 


#include <stdio.h>
int main(){
	int digit, number, pow, t_number;
scanf("%d", &number);
t_number = number;
pow = 1;
while (t_number>=10){
    pow = pow * 10;
    t_number = t_number / 10;
}
while (pow >= 1){
    digit = number/pow;
    number = number%10;
    pow = pow / 10;
    printf(" %d", digit);
}
printf("\n");
	return 0;
}
