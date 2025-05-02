#include <stdio.h>
#include <math.h>
int main(){
    struct noktatipi{
        int x, y;
    };
    struct noktatipi n1, n2;
    
    float mesafe;
    
    printf("1.noktanın x ve y kordinatlarını giriniz: ");
    scanf("%d%d", &n1.x, &n1.y);
    printf("2. noktanın kordinatlarını giriniz: ");
    scanf("%d%d", &n2.x, &n2.y);
    
    mesafe = sqrt(pow((n1.x-n2.x),2) + pow((n1.y-n2.y),2));
    printf("iki nokta arasındaki mesafe: %5.2f",mesafe);
}