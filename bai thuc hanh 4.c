#include <stdio.h>
#include <math.h>
    int main(){
    float thue,luong;
    printf("luong cua nhan vien bao gom thue tinh theo trieu:");
    scanf("%f",&luong);
    if(luong>0&&luong<=5){
        thue=luong*0.05;
    }else if(luong>5&&luong<=10){
        thue=luong*0.1;
    }else if(luong>10&&luong<=18){
        thue=luong*0.15;
    }else if(luong>18&&luong<=32){
        thue=luong*0.2;
    }else if(luong>32&&luong<=52){
        thue=luong*0.25;
    }else if(luong>52&&luong<=80){
        thue=luong*0.3;
    }else{
        thue=luong*0.35;
    }
    printf("%.2f",thue);
    printf("%.2f",luong-thue);
    }   

    
    
    

 