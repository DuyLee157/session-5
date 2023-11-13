#include <stdioo.h>
#include <math.h>
int main(){
        double a,b,c,x1,x2;
        printf("hay nhap a b c de giai phuong trinh bac 2:";
        scanf("%lf %lf %lf",&a &b &c);
        if(a == 0){
        prinf("day la phuong trinh bac 1");
    } else {
        double delta = (b*b - 4*a*c);
        if(delta < 0)
        printf("phuong trinh vo nghiem");
    } else if(delta == 0){
        x1 = -b/a
        printf("x1 = x2 = %d,x1");
    } else if(delta > 0){
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("x1 = %d",x1);
        printf("x2 = %d",x2);
    }
}




        

    