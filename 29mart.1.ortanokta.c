#include <stdio.h>
struct nokta{
    int x,y;
};
int main(){
    struct nokta a;
    struct nokta b;
    struct nokta orta;
    printf("birinci noktanın x ve y kordinatlarını giriniz: ");
    scanf("%d%d",&a.x, &a.y);
    printf("\nikinci noktanın x ve y kordinatlarını giriniz: ");
    scanf("%d%d",&b.x, &b.y);
    
    orta.x = (a.x + b.x)/2;
    orta.y = (a.y + b.y)/2;
    
    printf("orta noktanın kordinatı x: %d  y: %d",orta.x, orta.y);
    
    return 0;
    
    
}