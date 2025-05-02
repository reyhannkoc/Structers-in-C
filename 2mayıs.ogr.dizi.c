#include <stdio.h>
struct ogr{
    char isim[20];
    int no;
    float ort;
};
struct ogr dizi[3];

int main(){
    for(int i=0; i<3; i++){
        printf("\n%d. öğrencinin bilgileri: ",i+1);
        printf("İsim: ");
        scanf("%19s",dizi[i].isim);
        printf("No: ");
        scanf("%d",&dizi[i].no);
        printf("Ort: ");
        scanf("%f",&dizi[i].ort);
        
    }
    
    int en_buyuk = 0;
    int enbuyuk_index;
    for(int i=0; i<3; i++){
        if(dizi[i].ort > en_buyuk){
            en_buyuk = dizi[i].ort;
            enbuyuk_index = i;
        }
    }
    printf("\nEn yüksek ortalamalı öğrenci: %s  %f", dizi[enbuyuk_index].isim, dizi[enbuyuk_index].ort);
    
    for(int i=0; i<3; i++){
        if(dizi[i].ort<60){
            printf("\n%s  %f",dizi[i].isim, dizi[i].ort);
        }
    }
    
    return 0;
}