#include <stdio.h>
struct karmasik{
    int comp;
    int reel;
};
typedef struct karmasik kar;
int main(){
    kar a;
    kar b;
    kar sonuc;
    printf("1. karmaşık sayının sanal ve reel kısımlarını giiriniz: ");
    scanf("%d%d",&a.comp, &a.reel);
    printf("2. karmaşık sayının sanal ve reel kısımlarını giiriniz: ");
    scanf("%d%d",&b.comp, &b.reel);
    sonuc.comp = (a.comp + b.comp);
    sonuc.reel = (a.reel + b.reel);
    
    printf("karmaşık sayının sonucu: %di  %d", sonuc.comp, sonuc.reel);
      
      
    
    
    
    return 0;
} 