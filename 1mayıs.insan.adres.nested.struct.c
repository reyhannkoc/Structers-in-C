#include <stdio.h>
struct adres{
    char sokak[20];
    char apt[20];
    int no;
    char mah[20];
    char sehir[20];
};
struct insan{
    char isim[20];
    int id;
    struct adres adres_bilgisi;
};
int main(){
    struct insan kisi;
    
    printf("İsim: ");
    scanf("%20s",kisi.isim);
    printf("ID: ");
    scanf("%d",&kisi.id);
    printf("Sokak: ");
    scanf("%20s",kisi.adres_bilgisi.sokak);
    printf("Apt ismi: ");
    scanf("%20s",kisi.adres_bilgisi.apt);
    printf("No: ");
    scanf("%d",&kisi.adres_bilgisi.no);
    printf("Mahalle: ");
    scanf("%20s",kisi.adres_bilgisi.mah);
    printf("Şehir: ");
    scanf("%20s",kisi.adres_bilgisi.sehir);
    
    printf("İsim: %s",kisi.isim);
    printf("%s \nApt  no:%d %s Sokak  %s Mah. %s ",kisi.adres_bilgisi.apt, kisi.adres_bilgisi.no, kisi.adres_bilgisi.sokak, kisi.adres_bilgisi.mah, kisi.adres_bilgisi.sehir);
    
    return 0;
}