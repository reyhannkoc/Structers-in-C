#include <stdio.h>
#include <string.h>
struct basketbol{
    char isim[20];
    int yas;
    float boy;
    float ort_skor;
    float ort_ribaund;
};
typedef struct basketbol top;
top kisi[3];


int main(){
    strcpy(kisi[0].isim,"ali");
    kisi[0].yas = 19;
    kisi[0].boy = 195;
    kisi[0].ort_skor = 3;
    kisi[0].ort_ribaund = 5;
    strcpy(kisi[1].isim, "caner");
    kisi[1].yas = 18;
    kisi[1].boy = 185;
    kisi[1].ort_skor = 7;
    kisi[1].ort_ribaund = 3;
    strcpy(kisi[2].isim,"ozan");
    kisi[2].yas = 20;
    kisi[2].boy = 200;
    kisi[2].ort_skor = 6;
    kisi[2].ort_ribaund = 4;
    
    float boy_ort = (kisi[0].boy + kisi[1].boy + kisi[2].boy) / 3;
    printf("\nBoy ortalaması: %.2f",boy_ort);
    
    float ort_ort_skor = (kisi[0].ort_skor + kisi[1].ort_skor + kisi[2].ort_skor) / 3;
    printf("\nOrtalama skor: %f ", ort_ort_skor);
    
    float max_skor =0; 
    int yeni_index;
    for(int i=0; i<3; i++){
        if(kisi[i].ort_skor > max_skor){
            max_skor = kisi[i].ort_skor;
            yeni_index = i;
        }
    }
    printf("\nEn skorer oyuncu: %f",kisi[yeni_index].ort_skor);
    
    float max_ribaund =0; 
    int yeni_index2;
    for(int i=0; i<3; i++){
        if(kisi[i].ort_ribaund > max_ribaund){
            max_ribaund = kisi[i].ort_ribaund;
            yeni_index2 = i;
        }
    }
    printf("\nEn iyi ribaund alan oyuncu: %f",kisi[yeni_index2].ort_ribaund);
    
    
    
    
    return 0;
}