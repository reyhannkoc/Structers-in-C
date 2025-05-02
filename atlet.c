//en iyi dereceli atlet
#include <stdio.h>
#include <string.h>
struct zaman{
    int saat;
    int dk;
    int saniye;
};
struct atlet{
    char isim[20];
    char ulke[20];
    char cinsiyet[10];
    struct zaman bitis;
};
typedef struct atlet maraton;
maraton a[4];
int sure[4];
int main(){
    for(int i=0; i<=3; i++){
        printf("%d. Atletin Bilgileri: ",i+1);
        printf("\nİsim: ");
        scanf("%19s",a[i].isim);
        printf("Ülke: ");
        scanf("%19s",a[i].ulke);
        printf("Cinsiyet: ");
        scanf("%9s",a[i].cinsiyet);
        printf("Saat: ");
        scanf("%d",&a[i].bitis.saat);
        printf("Dk: ");
        scanf("%d",&a[i].bitis.dk);
        printf("Saniye: ");
        scanf("%d",&a[i].bitis.saniye);
    }
    
    int en_kucuk_sure_kadin = 99999999;
    int en_kucuk_sure_erkek = 99999999;
    int kindex;
    int eindex;
    
    for(int i=0; i<4; i++){
        sure[i] = a[i].bitis.saat*3600 + a[i].bitis.dk*60 + a[i].bitis.saniye;
        if(sure[i] < en_kucuk_sure_kadin && strcmp(a[i].cinsiyet , "kadın")==0){
            en_kucuk_sure_kadin = sure[i];
            kindex = i;
        }
        if(sure[i] < en_kucuk_sure_erkek && strcmp(a[i].cinsiyet , "erkek") ==0){
            en_kucuk_sure_erkek = sure[i];
            eindex = i;
        }
    }
    printf("\nAltın madaluya alan kadın: %s ",a[kindex].isim);
    printf("\nAltın madaluya alan erkek: %s ",a[eindex].isim);
    
    int en_kucuk_turk_sure=99999999;
    int turk_index;
    for(int i=0; i<4; i++){
        if(strcmp(a[i].ulke, "türkiye")==0){
            if(sure[i] < en_kucuk_turk_sure){
                turk_index = i;
            }
        }
    }
    printf("\nEn iyi dereceyi yapan Türk atlet: %s",a[turk_index].isim);
    
    return 0;
}