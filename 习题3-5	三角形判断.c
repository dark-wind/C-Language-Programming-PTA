#include <stdio.h>
#include <math.h>
int main(){
    double x1,x2,x3,y1,y2,y3;
    double l1,l2,l3;
    double p;
    scanf("%lf %lf %lf %lf %lf %lf\n",&x1,&y1,&x2,&y2,&x3,&y3);
    l1 = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    l2 = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    l3 = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));

    if((l1+l2) >l3 && (l2+l3)>l1 && (l1+l3)>l2){
        p=(l1+l2+l3)/2;
        printf("L = %.2f, A = %.2f",l1+l2+l3,sqrt(p*(p-l1)*(p-l2)*(p-l3)));
    }else{
        printf("Impossible");
    }
    return 0;
}