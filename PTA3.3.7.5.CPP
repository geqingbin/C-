#include <stdio.h>
#include <math.h>
double mianji(double x,double y,double z);
int main(){
    double x1,y1,x2,y2,x3,y3,d1,d2,d3,s;
    
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
    d1=(x1-x2)*(x1-x2)+(y1-y2)*(y1*y2);
    d2=(x2-x3)*(x2-x3)+(y2-y3)*(y2*y3);
    d3=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
    s=d1+d2+d3;
    
    if(d1>d2&&d2>d3){
        if(d2+d3>d1){
            printf("L = %.2f,A = %.2f",s,mianji(d1,d2,d3));
        }else{
            printf("Impossible");
        }
    }else if(d1>d3&&d3>d2){
        if(d2+d3>d1){
            printf("L=%.2f,A=%.2f",s,mianji(d1,d2,d3));
        }else{
            printf("Impossible");
        }
    }else if(d2>d1&&d1>d3){
        if(d1+d3>d2){
            printf("L = %.2f,A = %.2f",s,mianji(d1,d2,d3));
        }else{
            printf("Impossible");
        }
    }else if(d2>d3&&d3>d1){
        if(d3+d1>d2){
            printf("L = %.2f,A = %.2f",s,mianji(d1,d2,d3));
        }else{
            printf("Impossible");
        }
    }else if(d3>d1&&d1>d2){
        if(d1+d2>d3){
            printf("L = %.2f,A = %.2f",s,mianji(d1,d2,d3));
        }else{
            printf("Impossible");
        }
    }else{
        if(d2+d1>d3){
            printf("L = %.2f,A = %.2f",s,mianji(d1,d2,d3));
        }else{
            printf("Impossible");
        }
    }
    
    return 0;
}

double mianji(double x,double y,double z){
    double p=(x+y+z)/2;
    double shuchu=sqrt(p*(p-x)*(p-y)*(p-z));
    
    return shuchu;
}
