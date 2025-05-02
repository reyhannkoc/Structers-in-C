// 3 vize 1 final ortalaması buldur
#include <stdio.h>
struct ogrenci{
    char isim[20];
    int a1;
    int a2;
    int a3;
    int f;
};
struct ogrenci ogr[3];
int main(){
    float ort[3];
    for(int i=0; i<3; i++){
        printf("%d. Öğrencinin Bilgileri: ",i+1);
        printf("\nİsim: ");
        scanf("%19s",ogr[i].isim);
        printf("Birinci vize: ");
        scanf("%d",&ogr[i].a1);
        printf("İkinci vize: ");
        scanf("%d",&ogr[i].a2);
        printf("Üçüncü vize: ");
        scanf("%d",&ogr[i].a3);
        printf("Final: ");
        scanf("%d",&ogr[i].f);
    }
    for(int i=0; i<3; i++){
        ort[i] = ogr[i].a1*0.2 + ogr[i].a2*0.2 + ogr[i].a3*0.2 + ogr[i].f*0.4;
        printf("\n%s %.2f",ogr[i].isim, ort[i]);
    }
    return 0;
}