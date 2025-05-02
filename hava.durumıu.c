// hava durmundaki en yuksek ve en düşük sıcaklık farkı en fazla olan şehiri yazdır
#include <stdio.h>
#include <stdlib.h>
struct hava{
    char isim[20];
    int en_yuksek;
    int en_dusuk;
};
struct hava durum[3];

int main(){
    int fark=0;
    int en_yuksek_fark;
    for(int j=0; j<3; j++){
        printf("%d.  Şehir Bilgileri: ",j+1);
        printf("\nİsim: ");
        scanf("%19s",durum[j].isim);
        printf("En yüksek sıcaklık: ");
        scanf("%d",&durum[j].en_yuksek);
        printf("En düşük sıcaklık: ");
        scanf("%d",&durum[j].en_dusuk);
    }
    for(int i=0; i<3; i++){
        if(abs(durum[i].en_yuksek - durum[i].en_dusuk) > fark){
            en_yuksek_fark = i;
        }
    }
    printf("\n%s",durum[en_yuksek_fark].isim);
    
    return 0;
}