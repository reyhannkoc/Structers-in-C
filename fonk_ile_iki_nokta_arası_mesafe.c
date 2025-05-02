#include <stdio.h>
#include <math.h>
struct nokta{
    int x, y;
};
float fonk(struct nokta a, struct nokta b){
    float mes = sqrt(pow((a.x-b.x),2) + pow((a.y-b.y),2));
    return mes;
    
}

int main(){
    struct nokta a;
    struct nokta b;
    printf("birinci noktanın x ve y kordinatlarını giriniz: ");
    scanf("%d%d", &a.x, &a.y);
    printf("ikinci noktanın x ve y kordinatlarını giriniz: ");
    scanf("%d%d", &b.x, &b.y);
    
    float mesafe = fonk( a, b );
    
    printf("%5.2f", mesafe);
    
    return 0;
} 