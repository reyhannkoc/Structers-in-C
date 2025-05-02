#include <stdio.h>
struct islem{
    int bolen, bolunen;
};
typedef struct islem is;

float toplam(int a, int b,int c, int d){
    
    float sonuc1 =((float)a / (float)b) + ((float)c / (float)d) ;
    
    return sonuc1;
}

float fark(int a, int b,int c, int d){
    
    float sonuc2 =((float)a / (float)b) - ((float)c / (float)d) ;
    
    return sonuc2;
}
float carp(int a, int b,int c, int d){
    
    float sonuc3 =((float)a / (float)b) * ((float)c / (float)d) ;
    
    return sonuc3;
}
float bol(int a, int b,int c, int d){
    
    float sonuc4 =((float)a / (float)b) / ((float)c / (float)d) ;
    
    return sonuc4;
}

int ebob(int a, int b){
    int ebob_degeri;
    int i;
    for( i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0)
           ebob_degeri=i;
    }
    return ebob_degeri;
}

void sadeles(int a, int b){
    int ortak = ebob(a,b);
    int sade_bolunen = a / ortak;
    int sade_bolen = b / ortak;
    
    printf("%d / %d",sade_bolunen, sade_bolen );
    
}




int main(){
    is top1, top2;
    is carp1, carp2;
    is bol1, bol2;
    is fark1, fark2;
    is sade;
    
    printf("bolunen: ");
    scanf("%d", &top1.bolunen);
    printf("bolen: ");
    scanf("%d", &top1.bolen);
    printf("bolunen: ");
    scanf("%d", &top2.bolunen);
    printf("bolen: ");
    scanf("%d", &top2.bolen);
   
    
    printf("toplama sonucu: %f",toplam(top1.bolunen, top1.bolen, top2.bolunen, top2.bolen));
    
    printf("\nbolunen: ");
    scanf("%d", &fark1.bolunen);
    printf("bolen: ");
    scanf("%d", &fark1.bolen);
    printf("bolunen: ");
    scanf("%d", &fark2.bolunen);
    printf("bolen: ");
    scanf("%d", &fark2.bolen);
    
    printf("fark sonucu: %f",fark(fark1.bolunen, fark1.bolen, fark2.bolunen, fark2.bolen));
    
    printf("\nbolunen: ");
    scanf("%d", &carp1.bolunen);
    printf("bolen: ");
    scanf("%d", &carp1.bolen);
    printf("bolunen: ");
    scanf("%d", &carp2.bolunen);
    printf("bolen: ");
    scanf("%d", &carp2.bolen);
    
    printf("carpım sonucu: %f",carp(carp1.bolunen, carp1.bolen, carp2.bolunen, carp2.bolen));
    
    printf("\nbolunen: ");
    scanf("%d", &bol1.bolunen);
    printf("bolen: ");
    scanf("%d", &bol1.bolen);
    printf("bolunen: ");
    scanf("%d", &bol2.bolunen);
    printf("bolen: ");
    scanf("%d", &bol2.bolen);
    
    printf("bolum sonucu: %f",bol(bol1.bolunen, bol1.bolen, bol2.bolunen, bol2.bolen));
    
    printf("\nbolunen: ");
    scanf("%d", &sade.bolunen);
    printf("bolen: ");
    scanf("%d", &sade.bolen);
    
    sadeles(sade.bolunen, sade.bolen);
    
    
    
}