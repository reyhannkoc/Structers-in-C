#include <stdio.h>
#include <string.h>
struct kisi{
    char isim[19];
    char soyad[19];
    int yas;
    int aylik;
    char bolum[19];
}el[3];

int yas60(struct kisi el[]){
    int j=0;
    for(int i=0; i<3; i++){
        
        if(el[i].yas > 60){
            j++;
        } 
    }
    return j;
}

float aylikort(struct kisi el[]){
    int ort, top=0;
    for (int i=0; i<3; i++){
        top += el[i].aylik;
    }
    ort = top/3;
    
    return ort;
}

int main(){
    struct kisi el[3];
    struct kisi en_yuksek_maasli;
    int en_yuksek=0;
    char dep[20]; //en çok eleman çalışan departman
    int depart_index; //en çok eleman çalışan departman sayısı 1den fazlaysa kullanılacak
    int en_cok_eleman=0; 
    
    printf("ABC ŞİRKETİ");
    for(int i=0; i<3; i++){
        printf("%d. Kişinin Bilgileri: ",i+1);
        printf("\nİsim: ");
        scanf("%19s",el[i].isim);
        printf("Soyad: ");
        scanf("%19s",el[i].soyad);
        printf("Yaş: ");
        scanf("%d",&el[i].yas);
        printf("Aylık: ");
        scanf("%d",&el[i].aylik);
        printf("Bölüm: ");
        scanf("%19s",el[i].bolum);
    }
    
    printf("\n60 yaşından büyükler: %d",yas60(el));
    printf("\nOrtalama aylık: %.2lf",aylikort(el));
    
    for(int i=0; i<3; i++){
        if( el[i].aylik > en_yuksek){
            en_yuksek = el[i].aylik;
            en_yuksek_maasli = el[i];
        }
    }
    printf("\nEn yüksek maaşı alan elemanın bilgileri: ");
    printf("\n%s %s\n%d\n%d\n%s",en_yuksek_maasli.isim, en_yuksek_maasli.soyad, en_yuksek_maasli.yas, en_yuksek_maasli.aylik, en_yuksek_maasli.bolum);
    
    int sayac[3] = {0};
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            if(strcmp(el[i].bolum , el[i].bolum ) == 0){
                sayac[i]++;
            }
        }
        if(sayac[i] > en_cok_eleman){
            en_cok_eleman = sayac[i];
            depart_index = i;
        }
        
    }
    
    printf("En fazla eleman bulunan departman: %s",el[depart_index].bolum);
} 