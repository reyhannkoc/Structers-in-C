#include <stdio.h>
#include <string.h>
struct okulyapisi{
    char ogrenciisim[20];
    int ogrencisayi;
    int ogretmensayi;
    char sehir[20];
};
typedef struct okulyapisi okul;

int main(){
    
    okul a, *b, c[10];
    printf("bilgileri gir: ");
    scanf("%s",a.ogrenciisim);
    scanf("%d%d%s",&a.ogrencisayi, &a.ogretmensayi, a.sehir);
    
    
    for(int i=0; i<1; i++){
        printf("\nbilgileri gir: ");
        scanf("%s%d%d%s",c[i].ogrenciisim, &c[i].ogrencisayi, &c[i].ogretmensayi, c[i].sehir);
    }
    printf("c nin değeri: \n");
    for(int i=0; i<1; i++){
        printf("%d. öğrenci %s %d %d %s",i+1,c[i].ogrenciisim, c[i].ogrencisayi, c[i].ogretmensayi, c[i].sehir);
        
    }
    b=&a;
    printf("\n\nb nin değeri: \n");
    printf("\n%s %d %d %s",b->ogrenciisim, b->ogrencisayi, b->ogretmensayi, b->sehir);
    
    return 0;
}