#include <stdio.h>
#include <math.h>
 int main(){
    float doanhso,hoahong;
    
    printf("hay nhap doanh so ban hang tinht theo tram trieu:");
    scanf("%f",&doanhso);
    if(doanhso<=100){
        hoahong=doanhso*0.05;
    }else if(doanhso<=300){
        hoahong=doanhso*0.1;
    }else if(doanhso>=300){
        hoahong=doanhso*0.2;
    }
        printf("%.2f",hoahong);

 }