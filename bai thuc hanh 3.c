#include <stdio.h>
#include <math.h>
 int main(){
    float phut,tien;
    printf("nhap vao so phut su dung de tinh tien cuoc:");
    scanf("%f",&phut);
    if(phut<=50){
        tien =phut*600;
    } else if (phut>=50&&phut<=150){
        tien =(phut-50)*400+600*50;
    } else if (phut>=150&&phut<=200){
        tien =(phut-150)*200+600*50+400*100;
    } 
      else if (phut>=200){
        tien =50*600+400*150+200*200+phut*100;
      }
    printf("so tien phai tra la:%f",tien+25000);
 }
          


    

