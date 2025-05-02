// komisyon hesaplama
#include <stdio.h>
#include <string.h>
struct satici{
    char isim[20];
    int satis;
};
typedef struct satici s;
s kisi[3];
int main(){
    float kom[3];
    strcpy(kisi[0].isim, "Ege");
    kisi[0].satis = 7000;
    strcpy(kisi[1].isim, "Ece");
    kisi[1].satis = 4000;
    strcpy(kisi[2].isim, "Alev");
    kisi[2].satis = 5000;
    
    for(int i=0; i<3; i++){
        if(kisi[i].satis >= 5000){
            kom[i] = kisi[i].satis*0.06;
        }
        else{
            kom[i] = kisi[i].satis * 0.04;
        }
    }
    
    float ort = (kisi[0].satis + kisi[1].satis + kisi[2].satis) / 3.0;
    for(int i=0; i<3; i++){
        if(kisi[i].satis > ort){
            kom[i]+=500;
        }
    }
    
    for(int i=0; i<3; i++){
        printf("\n%s %.2f",kisi[i].isim, kom[i]);
    }
        
    
    
    return 0;
}